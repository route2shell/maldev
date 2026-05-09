# Module 06 Reference Cheat Sheet - Advanced Execution Paths, Syscalls, Unhooking, Patchless Concepts, and Threadless Patterns

---

## Module Role

Teach advanced execution-path ideas as engineering tradeoffs, with emphasis on assumptions, fragility, portability, and observable side effects.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 6.1 | Advanced Execution Paths: What Problem Are We Solving? | problem-definition worksheet |
| 6.2 | WinAPI, NTAPI, Syscalls, and Versioning Risk | API layer map |
| 6.3 | NTDLL Hooking, Unhooking, and API Repair Concepts | hook-state diagram |
| 6.4 | Hardware Breakpoints and Debug Registers | register concept map |
| 6.5 | Patchless Concepts and HWBP-Assisted Reasoning | patchless tradeoff table |
| 6.6 | VEH, Exceptions, Callbacks, Timers, and Threadpool Dispatch | dispatch surface map |
| 6.7 | Threadless Execution and Context Manipulation Claims | claim validation worksheet |
| 6.8 | LOLBins, Trusted Utilities, and Control-Flow Boundary Topics | trust-boundary worksheet |
| 6.9 | Advanced Execution Failure Modes | failure-mode matrix |
| 6.10 | Synthesis: Choosing Advanced Paths Responsibly | module checkpoint |

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
