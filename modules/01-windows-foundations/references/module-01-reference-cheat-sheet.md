# Module 01 Reference Cheat Sheet - Windows Internals and Native Development Foundations

---

## Module Role

Build native Windows, C, memory, PE, loader, debugging, and assembly foundations required for every later module.

## Lesson Quick Map

| Lesson | Topic | Practice artifact |
|---|---|---|
| 1.1 | Why Native Code Matters for Windows Internals | native vs managed comparison |
| 1.2 | Toolchain, Project Layout, and Your First Windows Program | compile and inspect a simple program |
| 1.3 | Types, Pointers, Buffers, and Addresses | pointer and address inspection |
| 1.4 | Strings, Unicode, Structs, and Data Layout | string and struct layout inspection |
| 1.5 | Functions, Calling Conventions, Errors, and Heap Allocation | trace success, failure, and allocation behavior |
| 1.6 | Processes, Threads, and Execution Context | process and thread views |
| 1.7 | User Mode, Kernel Mode, and API Layers | API layer map |
| 1.8 | Virtual Memory, Regions, and Page Protections | inspect memory regions and protections |
| 1.9 | Handles, Access Masks, Modules, PEB, and TEB | module, handle, and context notes |
| 1.10 | From Source to PE: Compiler, Linker, CRT, and Entry Points | inspect build artifacts |
| 1.11 | PE Headers, Sections, RVAs, Imports, and Exports | annotated PE layout |
| 1.12 | Relocations, ASLR, Disk Layout, and Image Layout | file offset to memory mapping |
| 1.13 | How the Windows Loader Maps and Initializes an Image | loader stage diagram |
| 1.14 | Debugging Essentials: x64dbg, Registers, Stack, and Assembly Patterns | step through a tiny program |
| 1.15 | Synthesis: Following a Program From Source to Runtime State | module synthesis lab |

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
