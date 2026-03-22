# Malware Development & Implant Engineering Course

A self-paced, GitHub-hosted course for motivated learners who are new to the niche.

This course teaches how modern malware and implants work **under the hood**: how payloads execute, how code is loaded into memory, how process injection works, how stealth and anti-analysis mechanisms are engineered, how defenders observe these behaviors, and how full implant architectures are designed from loader to beacon to runtime concealment.

---

## What This Course Covers

This course is designed to build a strong, layered understanding of:

- Windows internals relevant to offensive tooling
- Native development and low-level execution flow
- PE files, memory layout, and loader behavior
- Shellcode and payload execution fundamentals
- Process injection and manual loading concepts
- Static stealth and anti-analysis techniques
- EDR visibility, telemetry, hooks, ETW, and AMSI
- Advanced execution-path concepts such as native APIs, syscall-mediated paths, unhooking, and patchless approaches
- Implant architecture, staging, configuration, and C2 design
- Persistence, sideloading, and launch chains
- Runtime stealth, sleep obfuscation, and in-memory survival
- Capstone-level integration of a modern reference implant architecture

The goal is not just to collect techniques. The goal is to understand **why** techniques exist, **how** they work internally, **what tradeoffs they introduce**, and **how defenders or analysts would reason about them**.

---

## Who This Course Is For

You do **not** need previous malware-development experience.

You **should** be comfortable with at least some of the following:

- general offensive-security concepts
- command line usage
- basic programming concepts
- basic Windows usage
- curiosity around how software behaves internally

---

## What Makes This Course Different

Many resources in this space are either:

- too shallow and tool-centric
- too fragmented and assumption-heavy
- too focused on isolated tricks with no architectural context
- too weak on defender visibility and telemetry reasoning

This course is different.

We treat implant engineering as a **systems problem**, not a collection of disconnected “bypasses.”  
Throughout the course, we repeatedly examine topics through multiple lenses:

- **operator viewpoint** — why a technique might be chosen
- **Windows internals viewpoint** — what is happening under the hood
- **defender viewpoint** — what telemetry or artifacts may be exposed
- **reverse engineering viewpoint** — how an analyst might identify or reason about it
- **software engineering viewpoint** — what complexity, maintenance burden, and fragility the design introduces

The result is a course that is both more technically rigorous and more transferable to real-world research, detection, and engineering work.

---

## Learning Philosophy

This course follows a **progressive, layered structure**.

We do not jump straight into advanced tradecraft without first building the mental models needed to understand it. Each module exists for a reason, and each one feeds the next.

The broad learning flow is:

1. build the Windows and native development foundation  
2. understand how payloads and loaders work  
3. understand how code reaches execution in remote processes  
4. understand static stealth and anti-analysis  
5. understand how defenders and security products observe behavior  
6. study more advanced execution-path and telemetry-aware techniques  
7. design implants as modular systems  
8. examine persistence and launch chains  
9. analyze runtime stealth and in-memory survival  
10. integrate everything into a capstone implant architecture

By the end of the course, you should be able to reason clearly about implant behavior from **first principles**, not just recognize names of techniques.

---

## Course Outcomes

By completing this course, you should be able to:

- explain the Windows internals that matter most to malware and implant behavior
- reason about memory protections, loader responsibilities, and execution flow
- distinguish between different payload forms and execution models
- compare multiple injection and loading families by tradeoff and detection surface
- explain how static stealth differs from runtime stealth
- understand the practical roles of AMSI, ETW, hooks, memory scanning, and telemetry pipelines
- evaluate advanced execution-path ideas without turning them into mythology
- design and diagram a modular implant architecture with clear boundaries
- reason about staging, profiles, beacon loops, configuration, and transport design
- compare persistence options by durability, visibility, and forensic residue
- explain how runtime concealment changes memory-state visibility over time
- defend architectural choices in a final capstone rather than merely assemble parts blindly

---

## How the Course Is Structured

The course is organized into **11 modules**:

- **Module 0** — Orientation, Lab Architecture, and Course Map
- **Module 1** — Windows Internals and Native Development Foundations
- **Module 2** — PE Loading, Shellcode, and Payload Execution Fundamentals
- **Module 3** — Code Injection, Remote Execution, and Manual Loading
- **Module 4** — Static Stealth, Import Obfuscation, and Anti-Analysis Fundamentals
- **Module 5** — Security Telemetry and Detection Surfaces
- **Module 6** — Advanced Execution Paths: Native APIs, Syscalls, Unhooking, Patchless Concepts, and Threadless Patterns
- **Module 7** — Implant Architecture, Staging, Profiles, and C2 Design
- **Module 8** — Persistence, Sideloading, and Launch Chains
- **Module 9** — Runtime Stealth, Sleep Obfuscation, and In-Memory Survival
- **Module 10** — Full Implant Architecture and Capstone

Each module is intended to include some combination of:

- lesson notes
- slide outlines
- diagrams and concept visuals
- guided demos
- lab ideas or lab handouts
- knowledge checks
- instructor or author notes
- analyst-view and defender-view reflections

---

## Module Overview

## Module 0 — Orientation, Lab Architecture, and Course Map

This opening module establishes the course scope, expected learner profile, lab model, tooling assumptions, and the overall dependency chain across the curriculum.

Topics include:

- what “malware development” and “implant engineering” mean in this course
- how the course is framed and why it is structured progressively
- lab topology and safe research workflow
- tooling overview: compiler, debugger, disassembler, VM workflow
- how the capstone fits into the learning journey

This module exists to make the rest of the course coherent from day one.

---

## Module 1 — Windows Internals and Native Development Foundations

This module builds the technical base the rest of the course depends on.

Topics include:

- processes, threads, handles, modules, and execution context
- virtual memory, protections, and address-space reasoning
- PE format anatomy and loader behavior
- stacks, registers, calling conventions, and execution flow
- Win32 API, Native API, and syscall boundary concepts
- debugging and reversing small native programs

If students do not internalize this module, the advanced material later will feel like memorization instead of understanding.

---

## Module 2 — PE Loading, Shellcode, and Payload Execution Fundamentals

This module teaches how executable logic is represented and how it reaches execution in memory.

Topics include:

- shellcode and position-independent code concepts
- payload forms: raw buffers, PE-based payloads, reflective concepts
- allocation, writing, protection changes, and control transfer
- local execution models
- encoding, encryption, hashing, and concealment basics
- loader anatomy and why custom loaders exist

This is where the student begins to understand the “shape” of malicious execution.

---

## Module 3 — Code Injection, Remote Execution, and Manual Loading

This module examines how code is introduced into other processes and how execution is transferred there.

Topics include:

- injection family taxonomy
- remote memory manipulation concepts
- new-thread, reused-thread, APC, and context-based execution concepts
- hollowing-style and replacement-style models
- module stomping and related ideas
- manual mapping and reflective loading relationships
- technique tradeoffs and artifact patterns

The goal is not to memorize names. The goal is to understand the families, the mechanics, and the observable consequences.

---

## Module 4 — Static Stealth, Import Obfuscation, and Anti-Analysis Fundamentals

This module focuses on how binaries change their visible shape and how they frustrate analysts before or during early execution.

Topics include:

- static triage signals such as strings, imports, and metadata
- delayed resolution and custom import logic
- API hashing and string concealment concepts
- anti-debugging
- anti-VM and anti-sandbox logic
- packers, entropy, metadata manipulation, and static stealth tradeoffs

This module teaches the first real layer of stealth while also showing where stealth commonly fails.

---

## Module 5 — Security Telemetry and Detection Surfaces

This module explains what defenders and endpoint security products actually observe.

Topics include:

- practical EDR architecture and telemetry pipelines
- event sources, correlation, and behavioral analytics
- ETW and AMSI in context
- user-mode hooks and their role
- memory scanning and inspection concepts
- technique-to-telemetry mapping
- why bypassing one visibility layer does not equal invisibility

This module is essential because advanced evasion only makes sense when students understand what they are trying to alter, reduce, or avoid.

---

## Module 6 — Advanced Execution Paths: Native APIs, Syscalls, Unhooking, Patchless Concepts, and Threadless Patterns

This module explores more advanced execution-path tradecraft and the engineering tradeoffs involved.

Topics include:

- Native API usage patterns
- syscall-mediated execution concepts
- unhooking goals and limitations
- patchless approaches at a conceptual level
- callback and alternative control-transfer patterns
- threadless execution concepts
- why advanced techniques often introduce brittleness, maintenance cost, and debugging pain

This module is about disciplined reasoning, not technique worship.

---

## Module 7 — Implant Architecture, Staging, Profiles, and C2 Design

This module is where the course shifts from isolated technique study to coherent implant-system design.

Topics include:

- loader vs stager vs stage vs implant
- modular architecture and component boundaries
- encrypted configuration concepts
- tasking loops and beacon logic
- transport abstraction and communication profile design
- sleep, jitter, cadence, and OPSEC tradeoffs
- interface design, recoverability, and architecture clarity

This is where students begin thinking like implant engineers instead of just students of execution tricks.

---

## Module 8 — Persistence, Sideloading, and Launch Chains

This module examines how an implant regains execution or survives restart conditions.

Topics include:

- persistence taxonomy
- launch persistence vs runtime stealth
- sideloading and search-order hijacking concepts
- load-chain reasoning
- registry, task, service, and WMI-style foothold concepts
- durability vs noise vs forensic residue
- when persistence is worth the cost and when it is not

This module treats persistence as an architectural and operational choice, not a checkbox.

---

## Module 9 — Runtime Stealth, Sleep Obfuscation, and In-Memory Survival

This module focuses on what happens while an implant is already running in memory, especially during idle periods.

Topics include:

- runtime visibility and dwell-time exposure
- active-state vs idle-state reasoning
- sleep obfuscation families at a conceptual level
- region, code, and data concealment concepts
- memory-state transitions over time
- behavioral camouflage
- what defenders and analysts still observe despite concealment

This module helps students reason about implants as living systems rather than one-shot payloads.

---

## Module 10 — Full Implant Architecture and Capstone

The final module integrates the full course into one coherent design and evaluation process.

Topics include:

- reference implant architecture
- milestone planning and phased integration
- architectural tradeoff defense
- functional validation and observability review
- analyst-side review of your own design
- optional branches such as persistence or more advanced runtime behavior
- capstone synthesis across all prior modules

The capstone is intended to demonstrate understanding, not just assembly.

---

## Teaching Approach

Across the course, each major topic should repeatedly answer questions like:

- What is happening internally?
- Why would an operator choose this?
- What would a defender or analyst observe?
- What complexity or fragility does this introduce?
- Where does this fit in a larger implant architecture?

That repeated framing is intentional. It helps students develop durable understanding instead of shallow familiarity.

---

## Expected Repository Contents

This repository is intended to function as a structured self-study course and reference system.

Typical contents may include:

- module overviews
- lesson markdown files
- diagram source files
- lab handouts
- screenshots and visuals
- capstone planning docs
- shared glossary and terminology notes
- course map and dependency documentation

A typical layout may look something like:

```text
.
├── README.md
├── docs/
│   ├── course-map.md
│   ├── prerequisites.md
│   ├── lab-architecture.md
│   ├── tooling-setup.md
│   └── glossary.md
├── modules/
│   ├── 00-orientation/
│   ├── 01-windows-foundations/
│   ├── 02-payload-execution/
│   ├── 03-injection-loading/
│   ├── 04-static-stealth-anti-analysis/
│   ├── 05-telemetry-detection-surfaces/
│   ├── 06-advanced-execution-evasion/
│   ├── 07-implant-architecture-c2/
│   ├── 08-persistence-launch-chains/
│   ├── 09-runtime-stealth/
│   └── 10-capstone/
└── shared/
    ├── diagrams/
    ├── terminology/
    ├── worksheets/
    └── analyst-viewpoints/