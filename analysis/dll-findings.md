# Pluto DLL: 게임과 추론 엔진 사이의 경계

분석 대상: `vendor/pluto/pluto.dll`, SHA-256 `7e360b643c8c0156c03fe0cad9972a3058138ccfe22f921c5b4e0cd0aaf0abef`.
REA 6.3.0 + Ghidra 12.1.4로 정적 분석했다. DLL이나 추론 EXE를 실행하지 않았다. 주소는 DLL의 Ghidra 가상 주소다. `FUN_` 이름은 분석기가 붙인 이름이며 원래 소스의 이름이 아니다.

## 확인한 사실

1. **게임 연결 모듈은 32비트다.** REA 개요에 PE/x86, 687개 함수, 639개 문자열이 나온다. 64비트 추론 엔진과 구분해야 한다. 근거: `dll-overview.json`, `ev_5d1aea23c9a0004e4e9f4a332f4001c393bf42ec98b0fe46776328871b29f563`.
2. **별도 프로세스를 시작하고 공유 메모리를 준비하는 코드가 있다.** `FUN_63fb5420`(0x63fb5420)은 `CreateFileMappingA`로 0x85f80(548,736)바이트를 요청하고 `MapViewOfFile`을 호출한다. 공유 영역 헤더에 0x4d534c50, 버전 후보 3, 전체 크기, 0x400을 쓴다. 요청/응답용 `CreateEventA`를 각각 호출하고 `PLUTO_SHM_SEC`, `PLUTO_SHM_REQ_EV`, `PLUTO_SHM_RESP_EV`, `PLUTO_SHM_PARENT` 환경변수로 핸들을 전달하는 코드를 포함한다. 이후 `CreateProcessW`를 호출한다. 근거: `rea-dll-004-launch-pseudocode.json`, `ev_d7548b44a4e03d90a4b690cf9ac5b939dff81cc447dc9234ff9ca867cc45871f`.
3. **공유 메모리 전송 경로와 파이프 전송 경로가 모두 있다.** `BWRL_SHM` 환경변수 값의 첫 문자가 `0`이면 공유 메모리 생성 경로를 건너뛴다. `FUN_63fb4bc0`(0x63fb4bc0)의 공유 메모리 분기는 단위 개수를 1–1024 범위로 검사하고 9개 배열을 +0x100, +0xc100, +0x79100, +0x79500, +0x79900, +0x79940, +0x79a40, +0x79f00, +0x81f00에 복사한다. 추가값을 +0x85f00에 쓴다. 요청 번호를 +0x40에 저장하고 요청 이벤트에 `SetEvent`를 호출한다. 다른 분기는 `WriteFile`로 같은 입력 묶음을 전송한다. 근거: `rea-dll-007-submit-pseudocode.json`, `ev_d7accd733e82e33e733e00ee97fd2b3f401d07df56f240ad55b8ea57474b3182`.
4. **입력 준비와 결과 적용이 분리되어 있다.** `FUN_63f8baf0`(0x63f8baf0)은 게임 메모리에서 맵 크기와 객체 목록을 읽고 `FUN_63fafd80`으로 입력 묶음을 준비한 뒤 `FUN_63fb4bc0`에 보낸다. 대기 함수 `FUN_63f83050`의 결과가 1일 때 `FUN_63f8a9f0`을 호출한다. 입력을 보낸 시점의 상태도 보관한다. 근거: `rea-dll-006-frame-pseudocode.json`, `ev_14c9b18fa40af73dba860c27770277e7afe5e645b69dce4f547969fd7079a766`.
5. **결과 적용 경로는 게임 명령 버퍼로 이어진다.** `FUN_63f8a9f0`(0x63f8a9f0)은 `FUN_63faf4b0`을 호출한 뒤 생성된 버퍼를 게임 주소 0x654880 부근에 복사하고 길이 카운터를 갱신한다. `storm.dll`의 함수 두 개를 ordinal 0x72/0x73으로 찾으며 버퍼 용량과 게임 지연을 고려하는 분기가 있다. 로그에는 관측 프레임, 적용 프레임, 지연과 사라진 유닛이 등장한다. 근거: `rea-dll-008-apply-pseudocode.json`, `ev_0e1c3f0ce3c0c4c0ae000232d432cf48e2efb74915de02bc078ae05cec5c4e0a`.

## 해석과 교육에 사용할 표현

위 흐름은 **게임 상태 수집 → 숫자 묶음 전달 → 엔진 응답 대기 → 게임 명령 적용**이라는 구조를 지지한다. 입력 묶음과 출력 묶음이 존재함은 코드에서 확인했다. 각 숫자의 정확한 뜻까지 복원한 것은 아니다. 초보자용 그림에서는 DLL을 ‘게임과 신경망 사이의 통역 담당’, 엔진을 ‘숫자로 판단하는 담당’으로 비유할 수 있다. 이 비유는 교육용 표현이다.

실제 입력을 ‘스크린샷 한 장’이라고 설명하면 안 된다. 확인한 경로는 배열과 게임 메모리의 객체 데이터를 사용한다. ‘유닛 수·위치·체력’ 예시는 각각의 필드가 확인되기 전에는 교육용 단순화라고 표시한다. 공유 메모리는 두 프로그램이 함께 읽고 쓰는 숫자판으로 설명할 수 있다.

## 남은 범위

- `FUN_63fafd80`의 모든 입력 필드와 배열 차원은 아직 복원하지 않았다.
- `FUN_63faf4b0` 내부와 명령 종류별 인코딩은 이번 4개 함수 조사 범위 밖이다. ‘공격/후퇴’ 출력 사례는 교육용 예시이며 실제 출력 헤드 목록으로 제시하면 안 된다.
- DLL의 신경망 학습 여부나 훈련 데이터는 이 조사로 확인할 수 없다. 별도 엔진/가중치 조사와 개발자의 공개 설명을 함께 사용해야 한다.
- 여섯 프레임 간격이나 40ms 예산의 전체 설정 초기화는 이 범위에서 끝까지 검증하지 않았다. 해당 수치는 README 설명으로 인용한다.
- 정적 코드는 가능한 경로를 보여 준다. 실제 한 경기에서 해당 경로가 실행됐다는 관찰은 없다.
- Ghidra는 타입을 추정한다. 특히 시작 함수의 일부 임시 변수를 `STARTUPINFOW`로 잘못 넓게 표기할 가능성이 있다. Windows API 호출, 상수, 복사 연산과 분기를 중심으로 해석했다.

## 탐색 경로와 재현 근거

`dll-shm-search.json`(BWRL_SHM 0x63fd3cfc) → `dll-shm-xrefs.json`(참조 0x63fb555f) → `rea-dll-002-shm-container.json`(함수 0x63fb5420) → launch 의사코드.

응답 오류 문자열 0x63fd4acc → `rea-dll-003-response-xrefs.json`(참조 0x63f8d6b5) → `rea-dll-005-response-container.json`(함수 0x63f8baf0) → frame 의사코드 → 직접 호출된 submit/apply 의사코드.

CLI 개요·문자열·xref 이후 독립된 지속 MCP 세션을 사용했다. 정확한 JSON 응답과 원본 Evidence ID는 `analysis/evidence/rea-dll-*.json`에 보존했다. 첫 스킬 경로 조회는 실패했고 실제 패키지 `node_modules/rea-agents/skills/reverse-engineer-anything/SKILL.md`를 찾아 읽었다. 분석 요청 자체에는 실패가 없었다.
