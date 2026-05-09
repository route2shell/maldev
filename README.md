<div align="center">

# Malware Development and Implant Engineering

### A safe, hands-on, self-paced course for learning Windows internals, malware research mechanics, implant architecture, and defensive interpretation in an isolated lab.

**Build benign artifacts. Run them locally. Inspect what changes. Defend what the evidence proves.**

[Start Module 00](modules/00-orientation/README.md) ·
[Course Map](docs/course-map.md) ·
[Lab Architecture](docs/lab-architecture.md) ·
[Safety Boundaries](docs/legal-and-safety-boundaries.md)

</div>

---

> **Start Here**
>
> Begin with [Module 00 - Orientation, Safety, Lab Architecture, and Course Map](modules/00-orientation/README.md). This is not optional setup material. Module 00 builds the Windows analysis lab, installs the tools, creates the evidence workflow, and proves the build-run-inspect loop that every later lesson depends on.

## What This Course Is

`Malware Development and Implant Engineering` is a premium, GitHub-native course for learners who want to understand malware-like software behavior from first principles without turning the material into an operations guide.

The course teaches the mechanics behind native Windows execution, PE files, process memory, loader behavior, payload forms, remote process interaction, telemetry, stealth claims, implant architecture, persistence tradeoffs, runtime state, and capstone design defense.

The organizing idea is simple:

> **Concepts become real when you can build a safe artifact, observe it, and explain what the evidence does and does not prove.**

This is not a notes archive. It is a structured learning system with modules, lessons, labs, references, checkpoints, evidence templates, and a final capstone.

---

## What Makes It Different

| Instead of... | This course teaches... |
|---|---|
| Technique-name memorization | Mechanism, state, evidence, and tradeoff reasoning |
| Passive reading | Build-run-inspect labs using benign local artifacts |
| Copy-paste code without context | Small controlled programs with interpretation and cleanup |
| "Stealth" as mythology | Visibility, telemetry, assumptions, and validation limits |
| Disconnected malware notes | A progressive path from Windows internals to capstone architecture |
| Offensive-only framing | Defender, analyst, and reverse-engineering viewpoints throughout |
| Unbounded dual-use recipes | Local-only, reversible, safety-scoped research exercises |

> **Mental Model**
>
> The curriculum is not the list of techniques. The curriculum is the sequence of questions the learner learns to ask: what changed, where can I see it, what am I inferring, what would validate it, what remains visible, and how do I cleanly reset?

---

## The Learning Loop

Every technical module reinforces the same core workflow:

```text
Frame the concept
  -> build or prepare a benign artifact
  -> run or simulate it in the isolated lab
  -> inspect file, process, memory, debugger, or telemetry state
  -> separate observation from inference
  -> clean up and reset
  -> carry the evidence into the checkpoint
```

| Course habit | What the learner practices |
|---|---|
| Build | Compile or prepare small benign programs, DLLs, configs, diagrams, or worksheets |
| Run | Execute only inside the learner-owned local lab or use an explicitly labeled simulation |
| Inspect | Use PE tools, debuggers, process tools, memory views, logs, and architecture reviews |
| Interpret | Explain direct observations separately from claims and assumptions |
| Defend | Write evidence notes from both an engineering and analyst perspective |
| Reset | Stop test programs, remove temporary artifacts, revert snapshots, and document cleanup |

---

## Who This Is For

This course is for learners who want to:

- understand Windows internals through hands-on native development
- learn malware development concepts in a controlled research lab
- build strong PE, loader, process, memory, and debugger literacy
- reason about payloads, loading, telemetry, and implant architecture without mysticism
- connect offensive engineering concepts to defender and analyst visibility
- practice writing evidence-backed technical explanations

You should be comfortable with basic programming and command-line work. You do not need previous malware development experience.

This course is not for learners looking for turnkey intrusion tooling, real-world targeting playbooks, credential theft workflows, destructive payloads, or production evasion recipes.

---

## Safety Position

This repository teaches dual-use subject matter with strict boundaries.

All hands-on work must be:

- learner-owned
- local-only or isolated
- reversible
- snapshot-backed
- based on benign test programs, toy targets, inert artifacts, or simulations
- documented with cleanup notes
- explicit about what is observed versus inferred

This course does not teach unauthorized deployment, public infrastructure operations, credential theft, destructive behavior, persistence on non-lab systems, or bypass validation against third-party products outside a controlled lab.

Read [Legal and Safety Boundaries](docs/legal-and-safety-boundaries.md) before starting the technical path.

---

## Course Journey

The course is organized as a progression. Each phase gives the learner a new layer of understanding and a new type of evidence to preserve.

| Phase | Modules | What the learner builds |
|---|---|---|
| **I. Lab and systems foundation** | 00-01 | Isolated lab, toolchain, benign Windows programs, PE and debugger evidence |
| **II. Execution mechanics** | 02-03 | Payload-form maps, local execution evidence, remote-process interaction models |
| **III. Visibility and detection reasoning** | 04-06 | Static triage reports, telemetry matrices, advanced execution tradeoff reviews |
| **IV. Implant-system design** | 07-09 | Local-only architecture diagrams, beacon simulations, lifecycle and runtime-state reviews |
| **V. Capstone synthesis** | 10 | Final architecture, evidence pack, telemetry review, safety review, and design defense |

<details>
<summary><strong>Why this order?</strong></summary>

Advanced malware development topics become unsafe and confusing when learners skip the foundations. This course starts with lab discipline, native Windows development, PE files, memory, loader behavior, and debugging before moving into payloads, remote-process concepts, telemetry, advanced execution paths, implant architecture, persistence, runtime state, and capstone synthesis.

The point is not to race toward advanced labels. The point is to understand what the labels mean, what state changes underneath them, and what an analyst can still observe.

</details>

---

## Course Roadmap

### Phase I - Lab And Systems Foundation

| Module | Focus | Checkpoint |
|---|---|---|
| [00. Orientation, Safety, Lab Architecture, and Course Map](modules/00-orientation/README.md) | Build the reusable Windows research lab, install tools, create snapshots, set up the `maldev-lab/` workspace, and prove build-run-inspect works | Lab readiness gate |
| [01. Windows Internals and Native Development Foundations](modules/01-windows-foundations/README.md) | Native C, Windows processes, memory, PE files, loader behavior, and debugger essentials | Source-to-runtime evidence pack |

### Phase II - Execution Mechanics

| Module | Focus | Checkpoint |
|---|---|---|
| [02. PE Loading, Shellcode, and Payload Execution Fundamentals](modules/02-payload-execution/README.md) | Payload forms, local execution lifecycle, staging, storage, transformation, and observation | Payload lifecycle evidence |
| [03. Code Injection, Remote Execution, and Manual Loading](modules/03-injection-loading/README.md) | Remote process readiness, memory lifecycle, execution triggers, loading families, and tradeoffs | Remote execution family comparison |

### Phase III - Visibility And Detection Reasoning

| Module | Focus | Checkpoint |
|---|---|---|
| [04. Static Stealth, Import Obfuscation, and Anti-Analysis Fundamentals](modules/04-static-stealth-anti-analysis/README.md) | Static triage, representation changes, import visibility, anti-analysis assumptions, and analyst reconstruction | Before/after static triage report |
| [05. Security Telemetry and Detection Surfaces](modules/05-telemetry-detection-surfaces/README.md) | Endpoint visibility, events, ETW, AMSI, memory scanning, behavioral correlation, and evidence quality | Technique-to-telemetry matrix |
| [06. Advanced Execution Paths, Syscalls, Unhooking, Patchless Concepts, and Threadless Patterns](modules/06-advanced-execution-evasion/README.md) | API layers, hook-aware reasoning, dispatch alternatives, fragility, portability, and defender view | Advanced execution tradeoff review |

### Phase IV - Implant-System Design

| Module | Focus | Checkpoint |
|---|---|---|
| [07. Implant Architecture, Staging, Profiles, and C2 Design](modules/07-implant-architecture-c2/README.md) | Local-only implant architecture, component boundaries, task schema, config, timing, and safe beacon simulation | Local-only beacon architecture |
| [08. Persistence, Sideloading, and Launch Chains](modules/08-persistence-launch-chains/README.md) | Persistence as lifecycle design, launch chains, sideloading concepts, residue, reversibility, and restraint | Persistence and launch-chain review |
| [09. Runtime Stealth, Sleep Obfuscation, and In-Memory Survival](modules/09-runtime-stealth/README.md) | Runtime threat model, active/idle state, memory visibility, timing, state transitions, and reconstruction limits | Runtime state timeline |

### Phase V - Capstone Synthesis

| Module | Focus | Checkpoint |
|---|---|---|
| [10. Full Implant Architecture and Capstone Project](modules/10-capstone/README.md) | Controlled local-only architecture, milestone evidence, telemetry review, safety review, and final defense | Capstone evidence pack |

---

## What You Will Be Able To Do

By the end of the course, a learner should be able to:

- build and inspect benign native Windows programs
- explain how source code becomes a PE file and runtime process state
- inspect PE headers, imports, sections, modules, memory regions, threads, and debugger state
- compare payload forms and loading models by assumptions and constraints
- reason about remote-process interaction families without treating them as magic
- evaluate static stealth claims with before/after evidence
- map behaviors to telemetry and detection surfaces
- explain advanced execution paths as tradeoffs, not invisibility guarantees
- design a local-only implant architecture with clear component boundaries
- evaluate persistence and runtime stealth as lifecycle decisions with residue and cleanup cost
- produce a capstone evidence pack with diagrams, lab notes, telemetry reasoning, safety review, and design defense

---

## Course Materials

| Resource | Use it for |
|---|---|
| [Course Map](docs/course-map.md) | Module order, dependency flow, and progress gates |
| [Lab Architecture](docs/lab-architecture.md) | VM model, network isolation, snapshots, workspace structure, and reset workflow |
| [Tooling and VM Setup](docs/tooling-and-vm-setup.md) | Compiler, debugger, PE tools, process tools, and telemetry setup |
| [Legal and Safety Boundaries](docs/legal-and-safety-boundaries.md) | Allowed and prohibited use, lab-only rules, and dual-use guardrails |
| [Evidence Notebook Template](docs/evidence-notebook-template.md) | Standard notes for observations, inferences, validation, and cleanup |
| [Lab Safety Checklist](docs/lab-safety-checklist.md) | Pre-lab and post-lab safety checks |
| [Glossary](shared/terminology/glossary.md) | Course vocabulary and working definitions |
| [Observation Checklist](shared/telemetry-checklists/observation-inference-validation.md) | Evidence discipline for labs and checkpoints |

---

## How To Use This Repository

### First pass

1. Start with [Module 00](modules/00-orientation/README.md).
2. Build the isolated Windows lab and `maldev-lab/` workspace.
3. Complete the benign smoke test before entering Module 01.
4. Work through modules in order.
5. Complete every lesson artifact, lab, and checkpoint.
6. Keep evidence as you go.

### Returning as a reference

- Use the module READMEs to re-enter a topic.
- Use reference cheat sheets during labs.
- Use checkpoints to test whether you still understand the module.
- Use deep dives only after the core path is clear.

---

## Repository Layout

```text
maldev/
├── README.md
├── docs/
│   ├── course-map.md
│   ├── legal-and-safety-boundaries.md
│   ├── lab-architecture.md
│   ├── tooling-and-vm-setup.md
│   ├── evidence-notebook-template.md
│   ├── authoring-standards.md
│   └── lab-safety-checklist.md
├── modules/
│   ├── 00-orientation/
│   ├── 01-windows-foundations/
│   └── ...
├── shared/
│   ├── lab-templates/
│   ├── telemetry-checklists/
│   ├── terminology/
│   └── worksheets/
└── assets/
```

Each module is designed to contain:

- a module landing page
- ordered lessons
- at least one lab
- a checkpoint
- a reference cheat sheet
- optional deep dives

---

## The First Milestone

Your first real goal is not to learn injection, stealth, or C2.

Your first goal is to prove that your lab can safely support the rest of the course:

| Requirement | Where to complete it |
|---|---|
| Understand the course boundary | [Module 00](modules/00-orientation/README.md) |
| Build the isolated lab | [Lab Architecture](docs/lab-architecture.md) |
| Install and verify tools | [Tooling and VM Setup](docs/tooling-and-vm-setup.md) |
| Create the evidence workflow | [Evidence Notebook Template](docs/evidence-notebook-template.md) |
| Compile and inspect a benign program | [Module 00 Readiness Lab](modules/00-orientation/labs/module-00-lab-01-lab-installation-tooling-and-readiness-gate.md) |

Once that is complete, move into [Module 01 - Windows Internals and Native Development Foundations](modules/01-windows-foundations/README.md).
