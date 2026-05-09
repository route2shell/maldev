# Module 02 Reference Cheat Sheet - PE Loading, Shellcode, and Payload Execution Fundamentals

---

## Module Role

Teach how executable logic is represented, stored, transformed, prepared, and executed in a controlled local lab.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 2.1 | What Is a Payload? Roles, Forms, and Execution Goals | classify payload examples |
| 2.2 | EXE vs DLL vs Shellcode | startup model comparison |
| 2.3 | Position-Independent Code and Runtime API Resolution | PIC and API-resolution map |
| 2.4 | From Bytes to Executable Memory | prepare-transfer-observe flow |
| 2.5 | Direct Invocation, Thread-Based Execution, and Cleanup | controlled benign execution lab |
| 2.6 | Standard DLL Loading as the Baseline | DLL loading inspection |
| 2.7 | Where Payload Bytes Live Before Execution | storage-surface map |
| 2.8 | Stagers, Stages, Delivery, and the Fileless Misconception | taxonomy worksheet |
| 2.9 | Encoding, Encryption, Obfuscation, and Packing | classify transformations |
| 2.10 | Payload Configuration and Key Material | config schema sketch |
| 2.11 | Observing Local Execution: Memory, Crashes, and Artifacts | crash triage and evidence notes |
| 2.12 | Payload Safety, Sandboxing, and Module Synthesis | module checkpoint lab |

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
