# Module 07 Reference Cheat Sheet - Implant Architecture, Staging, Profiles, and C2 Design

---

## Module Role

Shift learners from isolated mechanisms to implant-system design using local-only, controlled architecture exercises.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 7.1 | From Payload to Implant: Why Architecture Changes Everything | component boundary sketch |
| 7.2 | Loader, Stager, Stage, Implant, and Capability Boundaries | role taxonomy |
| 7.3 | Reference Implant Architecture Blueprint | architecture diagram |
| 7.4 | Configuration Design and Runtime Settings | config schema worksheet |
| 7.5 | Beacon Loop Anatomy | loop diagram |
| 7.6 | Tasking Model and Command Boundaries | local task schema |
| 7.7 | Transport Abstraction and Local-Only Communication | loopback transport lab |
| 7.8 | Communication Profiles and Traffic Shape | profile comparison |
| 7.9 | Transport Families and Tradeoffs | transport matrix |
| 7.10 | Sleep, Jitter, Retry, Failure Handling, and Safe Test Modes | timing profile diagram |
| 7.11 | OPSEC as Engineering Constraint | OPSEC checklist |
| 7.12 | Synthesis: Local-Only Beacon Simulation Design | module checkpoint |

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
