# Module 04 Reference Cheat Sheet - Static Stealth, Import Obfuscation, and Anti-Analysis Fundamentals

---

## Module Role

Teach how binaries change their static shape, how analysts triage them, and why static stealth is limited.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 4.1 | What a Binary Reveals Before It Runs | static triage worksheet |
| 4.2 | Static vs Dynamic Detection Boundaries | observation vs inference table |
| 4.3 | String Obfuscation as Representation Change | before/after string inspection |
| 4.4 | Import Evasion, Delayed Resolution, and API Hashing | import visibility comparison |
| 4.5 | Custom Import Resolution and API Set Awareness | resolution responsibility map |
| 4.6 | Metadata, Resources, Entropy, and Packing Concepts | entropy and metadata comparison |
| 4.7 | Anti-Debugging, Anti-VM, and Anti-Sandbox Signals | environment-signal worksheet |
| 4.8 | Static Stealth Failure Modes | failure-mode matrix |
| 4.9 | Analyst View: Reconstructing Meaning From a Transformed Binary | analyst note exercise |
| 4.10 | Synthesis: Static Stealth Tradeoff Review | module checkpoint |

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
