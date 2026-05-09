# Module 05 Reference Cheat Sheet - Security Telemetry and Detection Surfaces

---

## Module Role

Teach what defenders, analysts, and endpoint security products observe so learners understand detection surfaces before advanced evasion claims.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 5.1 | What EDR Actually Tries to Observe | visibility map |
| 5.2 | Events, Correlation, and Behavioral Analytics | event-chain worksheet |
| 5.3 | User-Mode Hooks, Kernel Callbacks, and Monitoring Boundaries | hook/callback map |
| 5.4 | ETW in Context | provider and signal map |
| 5.5 | AMSI in Context | AMSI data-flow diagram |
| 5.6 | Memory Scanning and Runtime Inspection | memory-scan concept map |
| 5.7 | Process, Thread, Module, Handle, File, and Registry Signals | artifact matrix |
| 5.8 | Network, Beacon, and Timing Signals | timing profile worksheet |
| 5.9 | Technique-to-Telemetry Mapping | technique telemetry matrix |
| 5.10 | Why One Bypass Does Not Equal Invisibility | layered visibility exercise |
| 5.11 | Building an Analyst-Quality Evidence Note | evidence note lab |

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
