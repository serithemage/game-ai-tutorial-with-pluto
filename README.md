# Pluto는 어떻게 배우고 판단할까?

스타크래프트 AI Pluto의 REA/Ghidra 분석을 바탕으로, AI 비전공 대학생에게 학습과 동작 원리를 설명하는 하나의 HTML 튜토리얼이다. 프로그래밍이나 미적분 지식은 필요하지 않다.

**[튜토리얼 읽기](https://serithemage.github.io/game-ai-tutorial-with-pluto/)**

관찰 → 숫자 표현 → 가중치 조합 → 기억 → 행동 실행 → 자기 대전 학습 → 배포된 모델의 추론을 연결한다. 수식 대신 직접 만든 그림과 가중치·기억·양자화 조작 예제를 사용한다. 분석 근거는 본문에서 펼쳐 읽을 수 있다.

## 근거와 범위

- [REA 분석 보고서](analysis/REPORT.md), [DLL 상세 분석](analysis/dll-findings.md), [근거 색인](analysis/evidence/INDEX.md).
- 입력·출력 차원과 일부 계산·통신 경로는 정적 분석 결과다.
- 자기 대전 학습은 개발자의 공개 설명과 일반 원리를 바탕으로 설명한다. 훈련 알고리즘이나 실제 경기 실행을 재현한 결과는 아니다.
- 조작 예제는 교육용 모형이다. 실제 Pluto의 값, 행동 또는 승률로 해석하지 않는다.

## 로컬 실행

```sh
npm ci --ignore-scripts
npm run check
python3 -m http.server 8000 --directory _site
```

http://localhost:8000 에서 확인한다. 본문 소스는 `tutorial/index.html`, 스타일과 동작은 같은 폴더에 있다. JavaScript 없이도 본문과 설명을 읽을 수 있다. 모든 화면 자산은 로컬 파일이며 외부 CDN이나 폰트 요청이 없다.

브라우저 검증은 서버를 실행한 상태에서 `npm run test:browser`로 수행한다. macOS에서는 설치된 Chrome을 사용한다. 다른 환경은 `CHROME_PATH`를 지정하거나 Playwright Chromium을 설치한다.

## 배포

`main`에 변경 사항을 올리면 GitHub Actions가 산술 테스트, 사이트 생성, 링크 검사를 실행한 뒤 GitHub Pages에 배포한다. 배포 디렉터리는 `_site/`다. [분석 재현 절차](analysis/REPRODUCE.md)는 별도로 제공한다.

## 라이선스

© 2026 serithemage. **이 저장소와 가이드의 직접 작성한 본문·그림·HTML/CSS/JavaScript·제작 스크립트·자체 분석 설명은 [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/deed.ko)을 따른다.** 출처와 라이선스를 표시하고 변경 사항을 알리면 재사용할 수 있다. 전체 조건은 [LICENSE](LICENSE)에 있다.

외부 소프트웨어, 원본 자료와 역컴파일 산출물은 이 CC 적용에서 제외하며 원저작자의 권리를 유지한다. [외부 자료 안내](THIRD_PARTY_NOTICES.md)를 따른다. Pluto 실행 파일과 가중치, 로컬 도구, 사용자 설정 진단은 저장소와 사이트에 포함하지 않는다.
