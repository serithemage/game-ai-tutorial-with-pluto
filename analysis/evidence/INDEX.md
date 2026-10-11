# 분석 근거 색인

REA JSON은 정확한 도구 응답을 보존한다. `.c` 파일은 동일 응답의 역컴파일 문자열을 읽기 쉽게 저장한 것이다. 원래 소스코드가 아니다.

| 근거 파일 | 작업 | Evidence ID |
|---|---|---|
| [dll-overview.json](dll-overview.json) | binary_overview | `ev_5d1aea23c9a0004e4e9f4a332f4001c393bf42ec98b0fe46776328871b29f563` |
| [dll-shm-search.json](dll-shm-search.json) | search_strings | `ev_dc16965667f965cf1467bc9cc4894c5129bd79630220c1dfc2bb3d1732a6ecef` |
| [dll-shm-xrefs.json](dll-shm-xrefs.json) | xrefs | `ev_714bd5d31b2b747be439756e93ad0490be474a58f4524fcdc84b72d4c9306a65` |
| [rea-002-overview.json](rea-002-overview.json) | binary_overview | `ev_7158f4738bf0710606824acd9787fad02d4ea4473b138185ff137fa849b1093c` |
| [rea-003-main.json](rea-003-main.json) | search_procedures | `ev_2d72da74f003b902e3f8029e1dbab64028623ac96526a4c4018823efe8819eb7` |
| [rea-004-forward.json](rea-004-forward.json) | search_procedures | `ev_b45588f8feef07eb2b5ce2f265f193a73e62ac2f1450bba9ed9bee3765f481af` |
| [rea-005-model-strings.json](rea-005-model-strings.json) | search_strings | `ev_16d0c6efde0afe953023e8fc1e77d7ea186ad2bbb7b60e4876eeb113750954bd` |
| [rea-006-shared-memory.json](rea-006-shared-memory.json) | search_strings | `ev_b7200281f545feb6587b8df3abc45e84f5c0c108a715d84beb532ec5d785e357` |
| [rea-007-xref-cont.json](rea-007-xref-cont.json) | xrefs | `ev_7524395b770153ae0164e0de015a88adf54bbeb03076f2d65bb9e109934ac541` |
| [rea-008-xref-ipc.json](rea-008-xref-ipc.json) | xrefs | `ev_23ef6bfbcacb72c0b33d3ef6c3852f88c0789decff977049d3dfd02dd0561693` |
| [rea-009-stage-strings.json](rea-009-stage-strings.json) | search_strings | `ev_f512bdf5479df40a64730b5a83593fe25263da7349c9915fbadbdc04f750a3d8` |
| [rea-010-linear-strings.json](rea-010-linear-strings.json) | search_strings | `ev_90f387a51d914b71f42bdd5ef49ed77b356691ed6785fa58aa99f0f78cbf6f08` |
| [rea-011-loader-strings.json](rea-011-loader-strings.json) | search_strings | `ev_9bcb5734ce3cbe0383935ebeea897f07e4e9ef597bfc0dacdc3cae22abf80316` |
| [rea-012-arg-strings.json](rea-012-arg-strings.json) | search_strings | `ev_7efe57a160288d58946244c66ff71da15e2403b9e27a36873f57072353fbf87b` |
| [rea-013-xref-gru.json](rea-013-xref-gru.json) | xrefs | `ev_b30ee169844781fed70689f4b0eb69173356248ff4fbccd4ac413737f4ee21dd` |
| [rea-014-xref-linear.json](rea-014-xref-linear.json) | xrefs | `ev_be75f2f23b4cd6bb89b466531137095610cace81e7ca6ddcbc700cb05d125289` |
| [rea-015-xref-loader.json](rea-015-xref-loader.json) | xrefs | `ev_5045bebe41f2bfad5915d5fd81ac42dccaa6ff9be3ba458bb855f35ae0f5cae5` |
| [rea-016-cont-function.json](rea-016-cont-function.json) | resolve_containing_procedure | `ev_0d1dd3d1361bd03c4f35d9df930afd160b46e34ba4567b846b7b56f478fde444` |
| [rea-017-cont-init.json](rea-017-cont-init.json) | resolve_containing_procedure | `ev_5aec1c885c24630bfc66dbb62f4380e99bbae8130b01b0d2814c6bbbe2d00c5d` |
| [rea-018-ipc-function.json](rea-018-ipc-function.json) | resolve_containing_procedure | `ev_328f2d187ce85651900360253cb1426dca7fb780ce3a72e72c19dc59d6eb94da` |
| [rea-019-xref-action.json](rea-019-xref-action.json) | xrefs | `ev_1912496cb5be5d8e89a65485e20b2ee70b5a8ee250c27bbee966ed06c07e4365` |
| [rea-020-forward-code.json](rea-020-forward-code.json) | procedure_pseudo_code | `ev_ea4e077c5aaf51283f585b35be391f5d1e9b08b7529747510b3891657b28cb1d` |
| [rea-021-weight-init-code.json](rea-021-weight-init-code.json) | procedure_pseudo_code | `ev_32485ee1abe728b6b642b0819816f3e8b25a17c4bae8003cb6a09b0d14b273c7` |
| [rea-022-engine-ipc-code.json](rea-022-engine-ipc-code.json) | procedure_pseudo_code | `ev_e88c1038d07c0016ea004e493300fdb46d4b73564db234e595fbf20660fa9cb4` |
| [rea-023-loader-function.json](rea-023-loader-function.json) | resolve_containing_procedure | `ev_645132c00b4d83a435b4d23fb43e4ecb1877e1f4478de69d3b135db2f9daf236` |
| [rea-024-linear-function.json](rea-024-linear-function.json) | resolve_containing_procedure | `ev_d8faf6f94ca9f3cd8fa7ef5cc29a8e5b78a77b05e8ce117242fa4b9b1d33f5c3` |
| [rea-025-loader-code.json](rea-025-loader-code.json) | procedure_pseudo_code | `ev_9e87479af6c0ffb5191ab853476fb22c18f2697d9586c4edc434b424526fdc01` |
| [rea-026-linear-code.json](rea-026-linear-code.json) | procedure_pseudo_code | `ev_6c5d2d25885f9e53bba5ccfad2ba32b82528b255eb3adb0aef9dc48ca969bcd9` |
| [rea-027-memory-code.json](rea-027-memory-code.json) | procedure_pseudo_code | `ev_2096042e07eccb792aa17ae818beda65c97977b109202f2f2af4c96ac4dbf072` |
| [rea-028-activation-code.json](rea-028-activation-code.json) | procedure_pseudo_code | `ev_408e9a28ba54459b59a4d360b89f3646fefdf7e87cad26e676bcfe646b42c7bb` |
| [rea-029-validator-code.json](rea-029-validator-code.json) | procedure_pseudo_code | `ev_e748a45fff7e90d44d740ee2bbfb43828d981e99c7daafb5573210dfcac0a15c` |
| [rea-030-continuous-linear-code.json](rea-030-continuous-linear-code.json) | procedure_pseudo_code | `ev_b96a751f53656ca4550881ba8cc0d15f40699c1792063f386ddf7d272e6642a5` |
| [rea-artifact.json](rea-artifact.json) | inspect_artifact | `ev_92150fe0501ed8ecae1fa51bf8b0f23245f499398e65b028080e7362587658f9` |
| [rea-dll-002-shm-container.json](rea-dll-002-shm-container.json) | resolve_containing_procedure | `ev_8168f30196ecdabbf43cf7e494edd4673177803be5844b6b74ff222019ba1dba` |
| [rea-dll-003-response-xrefs.json](rea-dll-003-response-xrefs.json) | xrefs | `ev_901a24e623bac16dab55635cd2dd5e2509c4cd0b0083a96c62163d6eee1ccb58` |
| [rea-dll-004-launch-pseudocode.json](rea-dll-004-launch-pseudocode.json) | procedure_pseudo_code | `ev_d7548b44a4e03d90a4b690cf9ac5b939dff81cc447dc9234ff9ca867cc45871f` |
| [rea-dll-005-response-container.json](rea-dll-005-response-container.json) | resolve_containing_procedure | `ev_714f29035e6756da50a21a76bc9c25d5cd61292bd4a3a69ba06cf2027f15c87b` |
| [rea-dll-006-frame-pseudocode.json](rea-dll-006-frame-pseudocode.json) | procedure_pseudo_code | `ev_14c9b18fa40af73dba860c27770277e7afe5e645b69dce4f547969fd7079a766` |
| [rea-dll-007-submit-pseudocode.json](rea-dll-007-submit-pseudocode.json) | procedure_pseudo_code | `ev_d7accd733e82e33e733e00ee97fd2b3f401d07df56f240ad55b8ea57474b3182` |
| [rea-dll-008-apply-pseudocode.json](rea-dll-008-apply-pseudocode.json) | procedure_pseudo_code | `ev_0e1c3f0ce3c0c4c0ae000232d432cf48e2efb74915de02bc078ae05cec5c4e0a` |

## 파일 직접 검사와 공개 설명

- [파일 신원](file-manifest.json)
- [가중치 JSON 헤더](weights-header.json)
- [가중치 검사 결과](weights-summary.json)
- [Pluto README 사본](https://raw.githubusercontent.com/tscmoo/pluto/d41f473aeebafcfc90e28527b57324656c0ffca1/README.md) 및 [고정 커밋](pluto-source.json)
- [REA README 사본](https://raw.githubusercontent.com/morluto/rea/f88c99021b88ce67e513025901f57478d8107d0c/README.md) 및 [고정 커밋](rea-source.json)
- `download-*.json`: 다운로드 URL, 릴리스 식별자, SHA-256 및 GitHub 선언 digest.
- Ghidra 준비 진단은 로컬에서만 보관한다. 최종 선택한 제공자는 healthy 상태였다.
- 제공자 중립 분석 캐시는 로컬에서만 보관한다. 원래 소스나 전체 모델 명세가 아니다.
