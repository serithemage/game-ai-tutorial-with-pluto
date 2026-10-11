# 분석 재현 절차

## 고정된 대상

- Pluto: `cog2026-2578600` ZIP. 정확한 URL과 digest는 [다운로드 기록](evidence/download-pluto.json)에 있다.
- REA: npm 패키지 `rea-agents@6.3.0`. `package-lock.json`으로 의존성을 고정한다.
- Ghidra: 12.1.4. [다운로드 기록](evidence/download-ghidra.json).
- JDK: Temurin 21.0.9+10, macOS ARM64. [다운로드 기록](evidence/download-temurin21-binaries.json).

이번 재현 도구 준비 스크립트는 macOS ARM64를 대상으로 한다. 다른 운영체제는 해당 호스트용 Ghidra 네이티브 역컴파일러와 전체 JDK를 설정해야 한다. 준비에는 약 1GB의 압축 파일 다운로드와 수 GB의 로컬 공간이 필요하다. Apple 명령행 개발 도구의 C++ 컴파일러와 `make`, Python 3.12 이상, 지원되는 Node.js와 npm이 필요하다.

## 1. 프로젝트 내부 도구 준비

프로젝트 루트에서 실행한다. 배포 대상 EXE/DLL은 실행하지 않는다.

```sh
npm ci --ignore-scripts
python3 scripts/prepare_tools.py
```

스크립트는 다운로드 기록에 고정된 URL을 사용하고 SHA-256을 확인한다. 이미 받은 파일도 해시를 대조한다. 압축을 풀고, macOS ARM64용 Ghidra 역컴파일러가 없으면 함께 제공된 소스로 빌드한다. 전역 MCP 등록, 사용자 설정, Homebrew는 수정하지 않는다.

최초 제작 시 Adoptium API 한 경로가 HTTP 403을 반환하여, GitHub의 공식 Temurin 릴리스 경로로 다운로드했다. Ghidra ZIP을 Python으로 풀었을 때 실행 비트가 빠졌으므로 ZIP에 기록된 권한을 복원했다. 공식 ZIP에는 Linux 역컴파일러만 있어 macOS ARM64용을 소스에서 빌드했다. 이것은 분석 대상의 변경이 아니라 로컬 도구 준비다.

## 2. 제공자 확인

```sh
export GHIDRA_INSTALL_DIR="$PWD/tools/ghidra_12.1.4_PUBLIC"
export JAVA_HOME="$PWD/tools/jdk-21.0.9+10/Contents/Home"
node_modules/.bin/rea doctor --provider ghidra --json
```

최종 검사 결과 `healthy: true`다. MCP 클라이언트 등록 검사의 결과와 실제 CLI/stdio 분석 제공자 준비는 구분한다. 본 프로젝트는 사용자의 Codex 등록을 수정하지 않고 로컬 stdio와 CLI를 사용했다.

## 3. 배포물과 가중치 검사

```sh
node_modules/.bin/rea inspect-artifact "$PWD/vendor/pluto-cog2026-2578600.zip" --json
python3 scripts/inspect_weights.py vendor/pluto/pluto/pluto_weights.bin
```

가중치 검사 결과는 `analysis/evidence/weights-header.json`, `weights-summary.json`에 기록한다. 269개 텐서의 형식별 크기, 페이로드 범위, 스케일 범위, 영역 겹침을 확인한다. PLWB 1과 이번 배포물에서 확인한 64바이트 정렬을 대상으로 한다.

## 4. 정확한 REA 요청 재생

처음 분석할 때는 문자열 → 참조 → 포함 함수 → 역컴파일 순서로 진행했다. 요청은 [엔진 요청 목록](rea-infer-requests.json)과 [DLL 요청 목록](rea-dll-requests.json)에 보존했다. 분석기는 원본 아티팩트를 정적으로 읽고 임시 Ghidra 프로젝트를 사용한다.

```sh
python3 -u scripts/rea_session.py --replay analysis/rea-infer-requests.json
python3 -u scripts/rea_session.py --session dll --replay analysis/rea-dll-requests.json
```

재생은 같은 이름의 `analysis/evidence/rea-*.json` 응답 파일을 갱신한다. 최초 근거를 보존해야 하면 프로젝트 사본에서 재생한다. 스크립트는 `tools/list`로 실제 도구 스키마를 저장하고, 요청 결과를 기록하며, 끝에서 대상을 닫는다. 첫 Ghidra 분석에는 시간이 걸린다. REA 도구 오류는 재생을 중단한다.

주요 주소만 조사하려면 아래처럼 CLI를 사용할 수도 있다. CLI는 명령마다 세션을 다시 만들 수 있어 연속 조사보다 느릴 수 있다.

```sh
node_modules/.bin/rea function "$PWD/vendor/pluto/pluto/pluto_infer.exe" 0x14000f1f0 --provider ghidra --json
node_modules/.bin/rea function "$PWD/vendor/pluto/pluto/pluto_infer.exe" 0x140034f10 --provider ghidra --json
node_modules/.bin/rea function "$PWD/vendor/pluto/pluto.dll" 0x63fb5420 --provider ghidra --json
```

주소는 이번 파일에 대해 Ghidra가 사용한 가상 주소다. 다른 빌드나 다른 로더 설정에 그대로 적용하지 않는다. Evidence ID가 같거나 함수명에 특정 단어가 있다는 사실만으로 실제 실행을 확인했다고 주장하지 않는다.

## 5. 검증 범위

[검증 결과](VERIFICATION.md)에 기록했다. 통합 HTML의 링크, JSON, 조작 예제 산술, 주요 근거 인용, HTML 생성과 브라우저 화면 배치를 검사했다. Windows/Wine에서 게임을 실행하는 절차는 이번 재현 범위에 포함하지 않는다. 훈련 코드, 실제 관측 필드 명세, 전체 행동 매핑, 성능 평가도 미확보다.
