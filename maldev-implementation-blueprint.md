# Malware Development and Implant Engineering - Implementation Blueprint

Last updated: 2026-05-08

---

## 1. Course Overview

This is a premium, open-source, self-paced course for beginners who want to understand malware development and implant engineering from first principles in a safe, controlled, research-oriented lab.

The course teaches how native Windows programs execute, how payloads are represented, how code reaches memory, how process interaction works, how defenders observe suspicious behavior, how stealth claims should be evaluated, and how implant architectures are designed as systems.

The course is not a catalog of tricks. It is a progressive learning system that repeatedly asks:

- What is happening internally?
- What is directly observable?
- What is inferred?
- What must be validated?
- What tradeoff does this design introduce?
- What should a defender, analyst, or engineer notice?

By the end, a learner should be able to read, build, inspect, diagram, and reason about controlled lab implants and malware-like behaviors without treating technique names as magic.

---

## 2. Layout Decision

The earlier blueprint split Modules 1-3 into A/B/C/D because those modules came from mature outlines with obvious internal blocks. That split was useful, but applying it only to Modules 1-3 was inconsistent.

The better course layout is:

- every module uses **named learning arcs**
- every module has a **core path**
- advanced or niche material moves into **deep dives**
- each module ends with a **checkpoint**

This keeps the course comprehensive without drowning beginners in detail. The required path teaches the correct order. Deep dives preserve the larger topic universe without forcing every learner through every branch before they are ready.

---

## 3. Working Assumptions

| Area | Assumption |
|---|---|
| Learner level | Beginner to malware development, comfortable with basic programming and command-line work |
| Primary platform | Windows x64 lab environment |
| Primary language | C first, with Rust discussed later as a systems-language bridge |
| Delivery model | GitHub-native Markdown with lessons, labs, references, diagrams, checkpoints, and deep dives |
| Lab model | Isolated, learner-owned, controlled research lab using benign test programs and toy targets |
| Safety posture | Educational, defensive, and research-oriented; no real-world deployment or unauthorized use |
| Assessment style | Module checkpoints, evidence notebooks, interpretation drills, and capstone architecture review |

---

## 4. Course Spine

| Phase | Modules | Learning arc |
|---|---|---|
| Safety and orientation | 00 | Scope, lab boundaries, evidence habits, course map |
| Systems foundation | 01 | C, Windows internals, PE files, loader behavior, debugging |
| Execution foundations | 02-03 | payloads, local execution, remote process interaction, loading families |
| Visibility and stealth foundations | 04-06 | static analysis, telemetry, EDR concepts, advanced execution-path tradeoffs |
| Implant-system design | 07-09 | C2, staging, persistence, launch chains, runtime memory-state behavior |
| Integration | 10 | capstone architecture, validation, evidence, design defense |

This order should be preserved. Advanced maldev concepts become unsafe and confusing when learners do not yet understand Windows memory, loader behavior, process state, telemetry, and lab boundaries.

---

## 5. Safety and Scope Boundaries

This course covers:

- Windows-native development foundations
- PE files, linking, loader behavior, and process memory
- payload forms, local execution concepts, and controlled loader design
- process and thread interaction concepts
- injection and loading family taxonomy
- static triage, obfuscation concepts, and anti-analysis reasoning
- telemetry, EDR visibility, ETW, AMSI, hooks, and memory inspection concepts
- advanced execution-path tradeoffs
- implant architecture, local-only C2 simulation, beacon design, staging, and profiles
- persistence and launch-chain reasoning in controlled labs
- runtime memory-state changes and sleep/idle-state concepts
- capstone architecture, validation, and self-review

This course does not cover:

- unauthorized deployment
- real-world targeting
- credential theft
- destructive payloads
- public infrastructure operations
- production-ready evasion recipes
- bypass validation against third-party products outside a controlled lab
- weaponized persistence outside learner-owned test systems

When a topic has obvious dual-use risk, the lesson should emphasize mechanics, constraints, observability, and defensive interpretation over operational recipe depth.

---

## 6. Repository Structure

```text
maldev/
├── README.md
├── maldev-implementation-blueprint.md
├── docs/
│   ├── course-map.md
│   ├── legal-and-safety-boundaries.md
│   ├── lab-architecture.md
│   ├── tooling-and-vm-setup.md
│   ├── evidence-notebook-template.md
│   ├── authoring-standards.md
│   ├── module-layout-deep-dive-and-revised-spine.md
│   └── maldev-course-gap-analysis-and-restructure-plan.md
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
├── shared/
│   ├── diagrams/
│   ├── terminology/
│   ├── telemetry-checklists/
│   ├── lab-templates/
│   └── worksheets/
└── assets/
    ├── images/
    ├── references/
    └── slide-diagrams/
```

Each module should use:

```text
modules/<nn-module-slug>/
├── README.md
├── lessons/
├── labs/
├── references/
├── deep-dives/
└── checkpoints/
```

---

## 7. Lab and Checkpoint System

Every lab must be:

- local-only or isolated
- reversible
- scoped to learner-owned systems
- built around benign test programs or toy services
- instrumented for observation
- explicit about cleanup
- explicit about what is directly observed vs inferred

Every checkpoint should ask the learner to produce:

- what they built or inspected
- what changed on disk
- what changed in memory
- what changed in process behavior
- what evidence supports the conclusion
- what is only inferred
- what would validate or disprove the inference
- what cleanup or reset was performed

---

## 8. Full Course Implementation Blueprint

## Module 00 - Orientation, Safety, Lab Architecture, and Course Map

**Purpose:** Establish legal boundaries, safe lab habits, course navigation, and the learner's evidence workflow before technical work begins.

**Why it appears here:** Malware development is high-risk subject matter. Learners need safety, scope, and lab discipline before code.

**What it prepares next:** Module 01 native Windows development and every later hands-on lab.

### Arc 00A - Course Frame and Safety

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 0.1 | What Malware Development Means in This Course | Define the course as controlled malware research and implant engineering education, not unauthorized operations | personal scope statement |
| 0.2 | Legal, Ethical, and Operational Safety Boundaries | Make responsible use and legal boundaries explicit before hands-on work | safety boundary checklist |

### Arc 00B - Lab and Learning Workflow

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 0.3 | Building the Malware Research Lab | Establish safe VM, network, snapshot, and artifact workflow | lab inventory and snapshot table |
| 0.4 | Developer Environment and Tooling Workflow | Orient learners to compilers, editors, debuggers, PE tools, and observation utilities | tool verification notes |
| 0.5 | Evidence Notebook and Observation Discipline | Teach direct observation, inference, validation, screenshots, and reset notes | evidence notebook template |

### Arc 00C - Roadmap and Readiness

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 0.6 | Foundational Concepts Before Module 1 | Give beginners enough vocabulary to enter Module 1 without feeling lost | terminology matching drill |
| 0.7 | Course Roadmap and How the Modules Fit Together | Show why the course is ordered the way it is | annotated dependency map |

**Checkpoint:** lab inventory, snapshot plan, safety boundary checklist, and evidence notebook template.

---

## Module 01 - Windows Internals and Native Development Foundations

**Purpose:** Build the native Windows, C, memory, PE, loader, debugging, and assembly foundations required for every later module.

**Why it appears here:** Advanced maldev topics are not understandable without process, memory, binary, and debugger literacy.

**What it prepares next:** Module 02 payload representation and local execution.

### Arc 01A - Native C and Memory Literacy

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 1.1 | Why Native Code Matters for Windows Internals | Explain why C and native Windows programming are the first learning lens | native vs managed comparison |
| 1.2 | Toolchain, Project Layout, and Your First Windows Program | Build a reliable edit-build-run-inspect loop and compile a minimal WinAPI program | compile and inspect a simple program |
| 1.3 | Types, Pointers, Buffers, and Addresses | Build raw-memory literacy without drowning in C minutiae | pointer/address inspection |
| 1.4 | Strings, Unicode, Structs, and Data Layout | Teach Windows data shapes learners will constantly see | string and struct layout inspection |
| 1.5 | Functions, Calling Conventions, Errors, and Heap Allocation | Teach function boundaries, return values, `GetLastError`, and allocation choices | trace success/failure and allocation behavior |

### Arc 01B - Windows Process and Memory Model

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 1.6 | Processes, Threads, and Execution Context | Explain how Windows represents running programs | process and thread views |
| 1.7 | User Mode, Kernel Mode, and API Layers | Clarify WinAPI, NTAPI, DLL boundaries, and syscall transitions | API layer map |
| 1.8 | Virtual Memory, Regions, and Page Protections | Teach address-space reasoning and memory permissions | inspect memory regions and protections |
| 1.9 | Handles, Access Masks, Modules, PEB, and TEB | Explain object access gates and process self-knowledge | module, handle, and context notes |

### Arc 01C - PE Files, Loader Behavior, and Debugging

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 1.10 | From Source to PE: Compiler, Linker, CRT, and Entry Points | Walk from source file to executable image | inspect build artifacts |
| 1.11 | PE Headers, Sections, RVAs, Imports, and Exports | Build the core PE map | annotated PE layout |
| 1.12 | Relocations, ASLR, Disk Layout, and Image Layout | Compare file representation with mapped memory | file offset to memory mapping |
| 1.13 | How the Windows Loader Maps and Initializes an Image | Teach mapping, imports, relocations, TLS, and transfer of control | loader stage diagram |
| 1.14 | Debugging Essentials: x64dbg, Registers, Stack, and Assembly Patterns | Teach minimum debugger and x64 literacy required later | step through a tiny program |
| 1.15 | Synthesis: Following a Program From Source to Runtime State | Integrate code, PE layout, loader behavior, memory, and debugger observations | module synthesis lab |

**Checkpoint:** source-to-runtime evidence pack showing source code, build artifacts, PE structure, loaded image, memory regions, and debugger observations.

**Deep dives:** WinDbg essentials, PE resources/manifests/signing, deeper x64 assembly, Rust comparison, CMake/Ninja multi-target projects.

---

## Module 02 - PE Loading, Shellcode, and Payload Execution Fundamentals

**Purpose:** Teach how executable logic is represented, stored, transformed, prepared, and executed in a controlled local lab.

**Why it appears here:** Learners now understand PE files, memory, and debugging. They are ready to reason about payload forms and local execution.

**What it prepares next:** Module 03 remote process interaction and injection families.

### Arc 02A - Payload Forms and Constraints

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 2.1 | What Is a Payload? Roles, Forms, and Execution Goals | Define payloads as executable logic with a mission | classify payload examples |
| 2.2 | EXE vs DLL vs Shellcode | Compare startup assumptions and constraints | startup model comparison |
| 2.3 | Position-Independent Code and Runtime API Resolution | Explain why shellcode cannot assume normal PE loader support | PIC and API-resolution map |

### Arc 02B - Local Execution Lifecycle

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 2.4 | From Bytes to Executable Memory | Establish allocation, writing, protection, and control-transfer sequence | prepare-transfer-observe flow |
| 2.5 | Direct Invocation, Thread-Based Execution, and Cleanup | Compare direct calls with thread start-routine semantics | controlled benign execution lab |
| 2.6 | Standard DLL Loading as the Baseline | Use normal loader-mediated DLL loading as the reference model | DLL loading inspection |

### Arc 02C - Staging, Storage, and Transformation

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 2.7 | Where Payload Bytes Live Before Execution | Separate storage surface from execution | storage-surface map |
| 2.8 | Stagers, Stages, Delivery, and the Fileless Misconception | Define loader, stager, stage, memory-only, and fileless precisely | taxonomy worksheet |
| 2.9 | Encoding, Encryption, Obfuscation, and Packing | Build a precise transformation taxonomy | classify transformations |
| 2.10 | Payload Configuration and Key Material | Separate config storage from payload bytes | config schema sketch |

### Arc 02D - Observation and Safety

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 2.11 | Observing Local Execution: Memory, Crashes, and Artifacts | Teach debugging and observation habits for payload experiments | crash triage and evidence notes |
| 2.12 | Payload Safety, Sandboxing, and Module Synthesis | Close with safe workflow, snapshots, and the full local lifecycle | module checkpoint lab |

**Checkpoint:** payload lifecycle diagram and evidence notes explaining storage, transformation, memory preparation, control transfer, observations, and cleanup.

**Deep dives:** XOR decode stubs, Base64/BaseN representation, conceptual stream-cipher protection, resource-backed payload storage, reflective DLL concepts preview.

---

## Module 03 - Code Injection, Remote Execution, and Manual Loading

**Purpose:** Teach remote-process interaction and injection/loading families as controlled mechanics with prerequisites, tradeoffs, and observable side effects.

**Why it appears here:** Learners now understand local payload execution and Windows process/memory foundations.

**What it prepares next:** Module 04 static stealth and Module 05 telemetry mapping.

### Arc 03A - Remote Process Readiness

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 3.1 | Remote Execution on Windows: Targets, Boundaries, and Access | Define cross-process interaction boundaries | boundary and rights map |
| 3.2 | Process and Thread Enumeration Fundamentals | Treat target discovery as data collection | process/thread inventory |
| 3.3 | Choosing a Stable Target and Requesting the Right Access | Teach target selection, architecture, session, integrity, and handle rights | target selection worksheet |
| 3.4 | Reading Remote State Before Changing Anything | Validate assumptions about modules, memory, and context | remote-state checklist |

### Arc 03B - Remote Memory Lifecycle

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 3.5 | Remote Memory as a Lifecycle | Establish reserve, write, protect, verify, cleanup | lifecycle diagram |
| 3.6 | Allocation, Writing, Protection, and Verification | Teach remote memory operations as one pipeline | protection transition table |
| 3.7 | Section Objects and Shared Mapping Concepts | Introduce section-backed memory as a distinct model | private vs section-backed map |

### Arc 03C - Injection and Loading Families

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 3.8 | Injection Families: A Comparative Mental Model | Organize families by memory model and execution trigger | family taxonomy |
| 3.9 | Remote Thread and DLL Path Injection Baselines | Teach clean baseline chains before variants | baseline chain diagram |
| 3.10 | APC, Thread Hijacking, and Context Redirection | Explain context-dependent execution mechanisms | execution context comparison |
| 3.11 | Section-Based, Manual Mapping, Reflective Loading, and sRDI Concepts | Connect module loading variants to loader responsibilities | responsibility map |

### Arc 03D - Startup Manipulation and Strategy

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 3.12 | Hollowing, Startup Timing, and Image Replacement Families | Group suspended-process and image-replacement concepts | variant comparison |
| 3.13 | Masquerading, Lineage, Module Stomping, and Artifact Reduction | Explain identity and representation manipulation without conflating it with execution | identity surface table |
| 3.14 | Synthesis: Selecting the Right Remote Execution Strategy | Build decision framework across prerequisites, stability, and observability | strategy checkpoint |

**Checkpoint:** compare remote execution families by prerequisites, execution trigger, memory model, stability, artifacts, and validation method.

**Deep dives:** Early Bird variants, process doppelganging/herpaderping/ghosting concepts, header stomping, deeper thread-context restoration, remote PEB walking.

---

## Module 04 - Static Stealth, Import Obfuscation, and Anti-Analysis Fundamentals

**Purpose:** Teach how binaries change their static shape, how analysts triage them, and why static stealth is limited.

**Why it appears here:** Learners understand payloads and loading. They can now reason about what binaries reveal before and during early execution.

**What it prepares next:** Module 05 telemetry and detection surfaces.

### Arc 04A - Static Triage Baseline

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 4.1 | What a Binary Reveals Before It Runs | Establish strings, imports, sections, entropy, metadata, resources, and signatures as triage signals | static triage worksheet |
| 4.2 | Static vs Dynamic Detection Boundaries | Explain what static inspection can and cannot prove | observation vs inference table |

### Arc 04B - Representation and Resolution Changes

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 4.3 | String Obfuscation as Representation Change | Teach string hiding as transformation with runtime recovery | before/after string inspection |
| 4.4 | Import Evasion, Delayed Resolution, and API Hashing | Explain import minimization and hashed lookup patterns without mysticism | import visibility comparison |
| 4.5 | Custom Import Resolution and API Set Awareness | Connect runtime resolution to PEB, modules, exports, and API set redirection | resolution responsibility map |

### Arc 04C - Anti-Analysis and Analyst Reconstruction

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 4.6 | Metadata, Resources, Entropy, and Packing Concepts | Explain binary identity and packed-shape tradeoffs | entropy and metadata comparison |
| 4.7 | Anti-Debugging, Anti-VM, and Anti-Sandbox Signals | Teach environment checks as assumptions with false-positive risk | environment-signal worksheet |
| 4.8 | Static Stealth Failure Modes | Explain why changed static shape does not equal invisibility | failure-mode matrix |
| 4.9 | Analyst View: Reconstructing Meaning From a Transformed Binary | Teach reverse perspective and evidence-driven interpretation | analyst note exercise |
| 4.10 | Synthesis: Static Stealth Tradeoff Review | Consolidate signals, transformations, and limits | module checkpoint |

**Checkpoint:** before/after static triage report explaining what changed, what did not change, what an analyst can still infer, and what requires runtime validation.

**Deep dives:** compile-time string encryption patterns, hash collision handling, API set parser internals, packer anatomy, deeper resource/signing triage.

---

## Module 05 - Security Telemetry and Detection Surfaces

**Purpose:** Teach what defenders, analysts, and endpoint security products observe so learners understand detection surfaces before advanced evasion claims.

**Why it appears here:** Learners have seen payloads, injection, and static stealth. They now need a defender visibility model.

**What it prepares next:** Module 06 advanced execution-path and patchless concepts.

### Arc 05A - Endpoint Visibility Model

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 5.1 | What EDR Actually Tries to Observe | Build high-level endpoint visibility mental model | visibility map |
| 5.2 | Events, Correlation, and Behavioral Analytics | Explain events vs behavior chains | event-chain worksheet |
| 5.3 | User-Mode Hooks, Kernel Callbacks, and Monitoring Boundaries | Teach where monitoring happens and why kernel bypasses are out of core scope | hook/callback map |

### Arc 05B - Major Telemetry Surfaces

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 5.4 | ETW in Context | Explain ETW as observability infrastructure | provider/signal map |
| 5.5 | AMSI in Context | Explain AMSI role and boundaries | AMSI data-flow diagram |
| 5.6 | Memory Scanning and Runtime Inspection | Teach memory-state visibility | memory-scan concept map |
| 5.7 | Process, Thread, Module, Handle, File, and Registry Signals | Map core OS artifacts to detection surfaces | artifact matrix |
| 5.8 | Network, Beacon, and Timing Signals | Preview communication visibility before C2 architecture | timing profile worksheet |

### Arc 05C - Evidence and Validation

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 5.9 | Technique-to-Telemetry Mapping | Connect earlier modules to observable signals | technique telemetry matrix |
| 5.10 | Why One Bypass Does Not Equal Invisibility | Correct common evasion mythology | layered visibility exercise |
| 5.11 | Building an Analyst-Quality Evidence Note | Standardize evidence writing and validation | evidence note lab |

**Checkpoint:** telemetry matrix for representative behaviors from Modules 02-04, separating direct observations, inferences, and validation steps.

**Deep dives:** Sysmon-oriented lab profile, event log collection, memory scanner concepts, cloud EDR pipeline concepts, Sigma/YARA rule reading.

---

## Module 06 - Advanced Execution Paths, Syscalls, Unhooking, Patchless Concepts, and Threadless Patterns

**Purpose:** Teach advanced execution-path ideas as engineering tradeoffs, with emphasis on assumptions, fragility, portability, and observable side effects.

**Why it appears here:** Learners first need telemetry foundations before claims about evasion can make sense.

**What it prepares next:** Module 07 implant architecture and C2 design.

### Arc 06A - API Layers and Hook-Aware Reasoning

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 6.1 | Advanced Execution Paths: What Problem Are We Solving? | Frame advanced techniques as tradeoff decisions | problem-definition worksheet |
| 6.2 | WinAPI, NTAPI, Syscalls, and Versioning Risk | Reconnect API layers to portability and stability | API layer map |
| 6.3 | NTDLL Hooking, Unhooking, and API Repair Concepts | Explain hook removal goals, assumptions, and observability limits | hook-state diagram |

### Arc 06B - Patchless and Alternative Dispatch Concepts

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 6.4 | Hardware Breakpoints and Debug Registers | Introduce DR0-DR7 and breakpoint semantics | register concept map |
| 6.5 | Patchless Concepts and HWBP-Assisted Reasoning | Explain no-patch reasoning and constraints | patchless tradeoff table |
| 6.6 | VEH, Exceptions, Callbacks, Timers, and Threadpool Dispatch | Compare alternate dispatch mechanisms | dispatch surface map |
| 6.7 | Threadless Execution and Context Manipulation Claims | Explain threadless claims and validation boundaries | claim validation worksheet |

### Arc 06C - Judgement and Defender View

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 6.8 | LOLBins, Trusted Utilities, and Control-Flow Boundary Topics | Treat trusted-tool use and advanced control flow as detection and trust-boundary problems | trust-boundary worksheet |
| 6.9 | Advanced Execution Failure Modes | Explain crashes, instability, portability issues, and maintenance cost | failure-mode matrix |
| 6.10 | Synthesis: Choosing Advanced Paths Responsibly | Consolidate tradeoffs, defender view, and boundaries | module checkpoint |

**Checkpoint:** advanced execution tradeoff review explaining what each path changes, what it does not change, what can still be observed, and why complexity may not be justified.

**Deep dives:** detailed syscall resolution strategies, single-step handlers, deeper VEH dispatch, return-path manipulation concepts, BYOVD/driver material as non-core boundary topic.

---

## Module 07 - Implant Architecture, Staging, Profiles, and C2 Design

**Purpose:** Shift learners from isolated mechanisms to implant-system design using local-only, controlled architecture exercises.

**Why it appears here:** Learners now understand execution, loading, static visibility, telemetry, and advanced path tradeoffs.

**What it prepares next:** Module 08 persistence and launch-chain reasoning.

### Arc 07A - Implant Architecture

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 7.1 | From Payload to Implant: Why Architecture Changes Everything | Define implant as a system with lifecycle and state | component boundary sketch |
| 7.2 | Loader, Stager, Stage, Implant, and Capability Boundaries | Separate roles that learners often conflate | role taxonomy |
| 7.3 | Reference Implant Architecture Blueprint | Introduce safe reference architecture | architecture diagram |

### Arc 07B - Local-Only Beacon Core

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 7.4 | Configuration Design and Runtime Settings | Teach config as controlled state | config schema worksheet |
| 7.5 | Beacon Loop Anatomy | Explain tasking loop, sleep, retry, and state | loop diagram |
| 7.6 | Tasking Model and Command Boundaries | Define benign task structure and constraints | local task schema |
| 7.7 | Transport Abstraction and Local-Only Communication | Separate transport interface from behavior | loopback transport lab |

### Arc 07C - Profiles, Timing, and OPSEC

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 7.8 | Communication Profiles and Traffic Shape | Teach headers, cadence, and behavior profiles conceptually | profile comparison |
| 7.9 | Transport Families and Tradeoffs | Discuss HTTP-style, DNS-style, and alternate transports as architecture choices | transport matrix |
| 7.10 | Sleep, Jitter, Retry, Failure Handling, and Safe Test Modes | Explain timing as reliability and visibility factor | timing profile diagram |
| 7.11 | OPSEC as Engineering Constraint | Teach what not to collect, transmit, or preserve | OPSEC checklist |
| 7.12 | Synthesis: Local-Only Beacon Simulation Design | Build a safe architecture plan and analyst view | module checkpoint |

**Checkpoint:** local-only beacon simulation architecture with component boundaries, task schema, config model, timing model, and observability review.

**Deep dives:** redirector concepts, TLS fingerprinting concepts, DNS/DoH tradeoffs, profile design case studies, encrypted staging design review.

---

## Module 08 - Persistence, Sideloading, and Launch Chains

**Purpose:** Teach re-execution, launch chains, and trusted-loading concepts as architectural choices with residue, cleanup, and safety costs.

**Why it appears here:** Persistence makes sense after learners understand what an implant lifecycle is preserving.

**What it prepares next:** Module 09 runtime stealth and in-memory survival.

### Arc 08A - Persistence as Lifecycle Design

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 8.1 | Persistence as Re-Execution, Not Magic Survival | Define persistence precisely | persistence taxonomy |
| 8.2 | Launch Persistence vs Runtime Stealth | Separate startup survival from memory concealment | comparison table |
| 8.3 | Common Persistence Surfaces and Reversibility | Teach registry, task, service, WMI, and startup concepts safely | host-state map and cleanup plan |

### Arc 08B - Sideloading and Launch Chains

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 8.4 | DLL Search Order and Sideloading Fundamentals | Explain search-path reasoning | search-order diagram |
| 8.5 | Trusted Execution Hijacking and Load-Chain Reasoning | Discuss trust assumptions and staged launch behavior | trust-boundary map |
| 8.6 | Packers, Loaders, and PE Manipulation in Launch Chains | Place packing/loading in lifecycle context without duplicating Module 04 | lifecycle placement table |

### Arc 08C - Residue, Restraint, and Review

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 8.7 | Persistence Telemetry and Forensic Residue | Map persistence to defender observations | telemetry table |
| 8.8 | When Persistence Is Not Worth the Cost | Teach restraint and design judgement | decision exercise |
| 8.9 | Synthesis: Launch Chain and Persistence Design Review | Consolidate safe, reversible reasoning | module checkpoint |

**Checkpoint:** persistence and launch-chain design review including purpose, mechanism family, residue, cleanup, telemetry, and justification.

**Deep dives:** transacted/ghosted/herpaderped loading concepts, KnownDLL poisoning as historical/boundary topic, driver/BYOVD concepts as non-core advanced reading.

---

## Module 09 - Runtime Stealth, Sleep Obfuscation, and In-Memory Survival

**Purpose:** Teach how runtime behavior and memory state change over time, especially during idle periods.

**Why it appears here:** Learners understand execution, telemetry, implant architecture, and lifecycle controls.

**What it prepares next:** Module 10 capstone integration.

### Arc 09A - Runtime Threat Model

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 9.1 | Runtime Threat Model and Dwell-Time Exposure | Define what runtime stealth is trying to reduce | threat model worksheet |
| 9.2 | Active State vs Idle State | Separate behavior while working from behavior while sleeping | state transition diagram |
| 9.3 | Memory Regions, Protections, and Runtime Visibility | Reconnect memory model to live process inspection | memory visibility map |

### Arc 09B - Sleep and Memory-State Transitions

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 9.4 | Sleep Behavior, Timing Profiles, and Cadence | Teach sleep, jitter, and timing as visibility factors | timing profile comparison |
| 9.5 | Sleep Obfuscation Families at a Conceptual Level | Compare families without recipe focus | family matrix |
| 9.6 | Code, Region, Stack, and Context Visibility During Idle States | Explain memory and call-stack transformations | active/idle before-after table |
| 9.7 | Timers, Threadpool, Callback, and VEH-Assisted Runtime Patterns | Discuss alternate scheduling and control-flow surfaces | scheduling map |

### Arc 09C - Limits and Analyst Reconstruction

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 9.8 | Behavioral Camouflage and Runtime Stealth Failure Modes | Explain mimicry, crashes, missed cleanup, and residual signals | failure-mode matrix |
| 9.9 | Synthesis: Reconstructing Runtime State Over Time | Teach timeline reconstruction and validation limits | module checkpoint |

**Checkpoint:** active/idle runtime state timeline with memory observations, timing behavior, residual signals, and validation limits.

**Deep dives:** named sleep-obfuscation families, code caves, memory reallocation patterns, working-hours logic, deeper VEH-assisted flows.

---

## Module 10 - Full Implant Architecture and Capstone Project

**Purpose:** Integrate all prior modules into a controlled, local-only reference architecture and evaluate the learner's reasoning, not real-world deployability.

**Why it appears here:** Learners now have the foundations, execution models, telemetry reasoning, architecture concepts, persistence tradeoffs, and runtime-state models needed for synthesis.

**What it prepares next:** Independent research, detection engineering, reverse engineering, or responsible red-team tooling study.

### Arc 10A - Capstone Design

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 10.1 | Capstone Scope, Safety Boundary, and Success Criteria | Define what the capstone is and is not | capstone charter |
| 10.2 | Final Implant Architecture Blueprint | Create component design and boundaries | architecture diagram |
| 10.3 | Loader, Stager, Beacon, Config, and Lifecycle Milestone Plan | Plan integration safely | milestone plan |

### Arc 10B - Controlled Build Milestones

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 10.4 | Milestone 1: Skeleton, Interfaces, and Safe Test Mode | Validate component boundaries | skeleton review |
| 10.5 | Milestone 2: Local-Only Tasking Loop and Transport | Validate benign local tasking | local loop evidence |
| 10.6 | Milestone 3: Config, Timing, and Lifecycle Controls | Validate config and cadence | timing evidence |
| 10.7 | Milestone 4: Static and Runtime Visibility Review | Apply prior modules as controlled observations | visibility evidence |

### Arc 10C - Review, Defense, and Next Steps

| Lesson | Title | Purpose | Practice |
|---|---|---|---|
| 10.8 | Telemetry and Analyst Review of the Capstone | Reverse-analyze the learner's own design | analyst evidence note |
| 10.9 | Operational Safety, OPSEC, and Final Architecture Defense | Review safe testing, reset, limitations, and tradeoffs | written defense |
| 10.10 | Responsible Research Paths After the Course | Point learners toward safe specialization paths | learning plan |

**Checkpoint:** final evidence pack with architecture diagram, component map, lab notes, telemetry matrix, safety review, analyst review, and design defense.

**Deep dives:** optional persistence branch, optional runtime branch, optional profile branch, optional Rust rewrite branch, optional detection-engineering branch.

---

## 9. Supporting Artifact Strategy

Each module should have:

- `README.md`
- all core lesson files
- at least one lab guide
- one module checkpoint
- one module reference cheat sheet
- optional deep-dive files
- optional glossary additions
- optional diagrams

Required course-level artifacts:

| Artifact | Path | Purpose |
|---|---|---|
| Course map | `docs/course-map.md` | show module dependencies and progress gates |
| Safety boundaries | `docs/legal-and-safety-boundaries.md` | define allowed/prohibited behavior |
| Lab architecture | `docs/lab-architecture.md` | define VMs, snapshots, networks, reset workflow |
| Tooling setup | `docs/tooling-and-vm-setup.md` | centralize setup steps |
| Evidence notebook template | `docs/evidence-notebook-template.md` | standardize observation notes |
| Authoring standards | `docs/authoring-standards.md` | preserve lesson/module/lab quality |
| Glossary | `shared/terminology/glossary.md` | centralize terms |
| Observation checklist | `shared/telemetry-checklists/observation-inference-validation.md` | standardize evidence reasoning |

---

## 10. Module-to-Module Dependency Flow

| From | To | Dependency carried forward |
|---|---|---|
| 00 | 01 | lab safety, evidence workflow, tooling readiness |
| 01 | 02 | C, memory, PE, loader, API, debugger foundations |
| 02 | 03 | payload forms, local execution lifecycle, memory protections |
| 03 | 04 | injection/loading mechanics and artifact surfaces |
| 04 | 05 | static signal changes and analyst interpretation |
| 05 | 06 | telemetry model needed for advanced evasion reasoning |
| 06 | 07 | execution-path tradeoffs and engineering constraints |
| 07 | 08 | implant lifecycle that persistence supports |
| 08 | 09 | lifecycle controls and host-state residue before runtime concealment |
| 09 | 10 | runtime state model for final integration |

---

## 11. Recommended Build Order

Implementation should proceed in this order:

1. Create Module 00 completely.
2. Create course-level docs: safety, lab architecture, course map, tooling setup, evidence notebook.
3. Add README scaffolds for every module.
4. Migrate existing Module 01 lessons into the revised core path.
5. Complete Module 01 core lessons before moving deeper.
6. Add Module 01 lab guides, checkpoint, and cheat sheet.
7. Implement Module 02 from this blueprint.
8. Implement Module 03 from this blueprint.
9. Implement Modules 04 through 06 as visibility and evasion-reasoning modules.
10. Implement Modules 07 through 09 as implant-system design modules.
11. Implement Module 10 capstone last.
12. Add deep dives only after their parent module's core path works.

Do not write advanced modules before Module 00 and the lab architecture exist.

---

## 12. Quality Bar

Every finished module should answer:

- Why does this module exist here?
- What does it assume?
- What does it prepare next?
- What should the learner build or inspect?
- What evidence should the learner preserve?
- What is directly observed?
- What is only inferred?
- What does a defender or analyst see?
- What tradeoff or fragility does the technique introduce?
- What must remain out of scope for safety and progression?

The ultimate course should teach learners not just how things are named, but how they behave, how they are observed, and how to reason about them responsibly.
