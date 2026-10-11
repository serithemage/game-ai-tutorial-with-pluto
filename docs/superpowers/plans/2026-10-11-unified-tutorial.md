# Unified Pluto Tutorial Implementation Plan

> Implement inline with the executing-plans workflow. User approved the proposed content, CC BY 4.0, public repository and deployment.

**Goal:** Publish one accessible Korean HTML explanation of how Pluto learns and acts.
**Architecture:** Static HTML/CSS with small browser modules for educational interactions; a Node script renders the analysis report and stages explicitly selected files for Pages.
**Tech Stack:** HTML, CSS, SVG, JavaScript modules, markdown-it, Node test runner, Playwright for local browser checks, GitHub Pages Actions.
**Spec:** docs/DESIGN.md

## Constraints
One unified guide; non-programming audience; mathematical intuition; analysis-grounded facts; general learning principles separated from unverified Pluto training details; CC BY 4.0 on original work only.

## Review focus
Mobile overflow; zero/negative decision signals; slider reset consistency; deployed relative evidence links; conflation of illustrative simulations and real Pluto.

## Tasks
- [x] Write outcome tests for educational weight and memory interactions, then implement the small pure computation module.
- [x] Author seven connected chapters, original diagrams, accessible interactions and source disclosures in tutorial/index.html; replace the previous split primary guides.
- [x] Build a curated static site with rendered analysis report and source files. Update README, report navigation, license and third-party notice.
- [x] Verify unit calculations, HTML and local links, desktop/mobile browser behavior and screenshots. Record verification.
- [x] Initialize Git, commit in logical groups, create approved public repository, push all configured remotes, enable Pages, and verify workflow and live URL.

## Execution notes
No repository currently exists. Do not create external resources until local content and checks are reviewable. The user's instruction “배포 진행해” authorizes the approved publication. No further confirmation is required for this scope.

## Ledger
- Ruling: execute in the existing task folder because it contained only this project and had no prior Git repository. No shared development branch needed isolation.
- Ruling: retain earlier split drafts locally as ignored files; publish only the unified guide.
- User steering: rename destination to serithemage/game-ai-tutorial-with-pluto before repository creation.
- Verification: seven outcome tests; actual Pages file and anchor checks; browser interactions and no overflow at desktop/mobile; no-JavaScript reading.
- Final review: independent read-only reviewer found no Critical or Important issue. Mobile battlefield readability and reset assertions improved. Raw Mermaid in the optional technical report remains readable source; primary tutorial diagrams are rendered.
- Publication excludes binary files, user diagnostics, provider caches and copied upstream README files.

- Publication complete: public repository created, origin/main push verified, GitHub Pages workflow succeeded after initial Pages-configuration timing failure. Live HTTP and browser interactions passed at the approved renamed URL.
