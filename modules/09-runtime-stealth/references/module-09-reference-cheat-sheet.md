# Module 09 Reference Cheat Sheet - Runtime Stealth, Sleep Obfuscation, and In-Memory Survival

---

## Module Role

Teach how runtime behavior and memory state change over time, especially during idle periods.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 9.1 | Runtime Threat Model and Dwell-Time Exposure | threat model worksheet |
| 9.2 | Active State vs Idle State | state transition diagram |
| 9.3 | Memory Regions, Protections, and Runtime Visibility | memory visibility map |
| 9.4 | Sleep Behavior, Timing Profiles, and Cadence | timing profile comparison |
| 9.5 | Sleep Obfuscation Families at a Conceptual Level | family matrix |
| 9.6 | Code, Region, Stack, and Context Visibility During Idle States | active/idle before-after table |
| 9.7 | Timers, Threadpool, Callback, and VEH-Assisted Runtime Patterns | scheduling map |
| 9.8 | Behavioral Camouflage and Runtime Stealth Failure Modes | failure-mode matrix |
| 9.9 | Synthesis: Reconstructing Runtime State Over Time | module checkpoint |

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
