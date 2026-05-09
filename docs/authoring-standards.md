# Authoring Standards

---

## Page Grammar

Course pages use plain GitHub Markdown:

- H1 title
- horizontal rule after the opening
- blockquote objective or start-here callout
- compact metadata tables
- clear table of contents for long pages
- Mermaid diagrams only where they clarify a relationship
- details blocks for answers

## Safety Grammar

Every lab must include:

- safety boundary
- allowed target
- snapshot/reset expectations
- expected observations
- direct observation vs inference table
- cleanup steps

## Lesson Grammar

Each lesson should include objective, metadata, prerequisites, table of contents, lesson map, why it matters, objectives, mental model, main concepts, walkthrough, interpretation, mistakes, defender or analyst view, practice, knowledge check, answers, and next lesson bridge.

Every technical lesson should include a hands-on path unless it is explicitly a safety or planning lesson. The default path is:

```text
build or prepare -> run or simulate -> inspect -> interpret -> clean up
```

Concept-only pages are acceptable only when the page produces a concrete lab artifact such as a scope statement, architecture diagram, worksheet, readiness checklist, or evidence template.

## Tone

Write as a serious technical course. Prefer clear mechanics, evidence, constraints, and tradeoffs over hype or technique worship.
