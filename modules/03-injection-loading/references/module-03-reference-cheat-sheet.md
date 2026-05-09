# Module 03 Reference Cheat Sheet - Code Injection, Remote Execution, and Manual Loading

---

## Module Role

Teach remote-process interaction and injection/loading families as controlled mechanics with prerequisites, tradeoffs, and observable side effects.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 3.1 | Remote Execution on Windows: Targets, Boundaries, and Access | boundary and rights map |
| 3.2 | Process and Thread Enumeration Fundamentals | process and thread inventory |
| 3.3 | Choosing a Stable Target and Requesting the Right Access | target selection worksheet |
| 3.4 | Reading Remote State Before Changing Anything | remote-state checklist |
| 3.5 | Remote Memory as a Lifecycle | lifecycle diagram |
| 3.6 | Allocation, Writing, Protection, and Verification | protection transition table |
| 3.7 | Section Objects and Shared Mapping Concepts | private vs section-backed map |
| 3.8 | Injection Families: A Comparative Mental Model | family taxonomy |
| 3.9 | Remote Thread and DLL Path Injection Baselines | baseline chain diagram |
| 3.10 | APC, Thread Hijacking, and Context Redirection | execution context comparison |
| 3.11 | Section-Based, Manual Mapping, Reflective Loading, and sRDI Concepts | responsibility map |
| 3.12 | Hollowing, Startup Timing, and Image Replacement Families | variant comparison |
| 3.13 | Masquerading, Lineage, Module Stomping, and Artifact Reduction | identity surface table |
| 3.14 | Synthesis: Selecting the Right Remote Execution Strategy | strategy checkpoint |

## Evidence Questions

| Question | Reminder |
|---|---|
| What changed? | Identify file, memory, process, telemetry, architecture, or worksheet state |
| What was directly observed? | Name the tool, source, or artifact |
| What is inferred? | Label conclusions that are not directly proven |
| What validates it? | Add a second source or repeatable test |
| What does a defender see? | Think process, thread, module, memory, file, registry, network, event |
| What cleanup happened? | Snapshot, stopped process, removed files, or documented no-op |

## Safety Reminders

- Use learner-owned isolated systems only.
- Prefer benign toy targets and simulated evidence.
- Do not test against public infrastructure.
- Do not preserve real secrets or sensitive host data.
- Stop when an exercise would require uncontrolled deployment.
