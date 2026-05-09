# Module 08 Reference Cheat Sheet - Persistence, Sideloading, and Launch Chains

---

## Module Role

Teach re-execution, launch chains, and trusted-loading concepts as architectural choices with residue, cleanup, and safety costs.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 8.1 | Persistence as Re-Execution, Not Magic Survival | persistence taxonomy |
| 8.2 | Launch Persistence vs Runtime Stealth | comparison table |
| 8.3 | Common Persistence Surfaces and Reversibility | host-state map and cleanup plan |
| 8.4 | DLL Search Order and Sideloading Fundamentals | search-order diagram |
| 8.5 | Trusted Execution Hijacking and Load-Chain Reasoning | trust-boundary map |
| 8.6 | Packers, Loaders, and PE Manipulation in Launch Chains | lifecycle placement table |
| 8.7 | Persistence Telemetry and Forensic Residue | telemetry table |
| 8.8 | When Persistence Is Not Worth the Cost | decision exercise |
| 8.9 | Synthesis: Launch Chain and Persistence Design Review | module checkpoint |

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
