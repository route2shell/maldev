# Module 00 Reference Cheat Sheet - Orientation, Safety, Lab Architecture, and Course Map

---

## Module Role

Build and validate the reusable Windows malware research lab, toolchain, workspace, safety boundaries, snapshots, and evidence workflow that every later hands-on lesson depends on.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 0.1 | What Malware Development Means in This Course | personal scope statement and hands-on boundary statement |
| 0.2 | Legal, Ethical, and Operational Safety Boundaries | safety boundary checklist and allowed-target inventory |
| 0.3 | Building the Malware Research Lab | VM inventory, isolated network proof, and snapshot table |
| 0.4 | Developer Environment and Tooling Workflow | tool installation checklist and version notes |
| 0.5 | Repository Workspace, Evidence Notebook, and Artifact Discipline | repository workspace and evidence notebook template |
| 0.6 | First Build-Run-Inspect Smoke Test | benign build output, PE inspection note, process observation, and cleanup note |
| 0.7 | Course Roadmap and Lab Readiness Gate | annotated dependency map and readiness sign-off |

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
