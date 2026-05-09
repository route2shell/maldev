# Tooling and VM Setup

---

> **Setup Objective**
>
> Establish a Windows x64 lab where learners can compile benign programs, run them, inspect PE files, debug execution, observe process state, capture telemetry, and reset experiments safely.

## Core Tools

| Category | Examples | Used for |
|---|---|---|
| Compiler and build tools | Visual Studio Build Tools, MSVC, CMake | Native Windows programs |
| Editor | VS Code or Visual Studio | Source editing and project navigation |
| Debugger | x64dbg, WinDbg Preview | Registers, stack, modules, breakpoints |
| PE inspection | PE-bear, CFF Explorer, dumpbin | Headers, sections, imports, exports |
| Process inspection | Process Explorer, Process Hacker, VMMap | Processes, threads, handles, memory |
| Event and behavior tools | Procmon, Windows Event Viewer, Sysmon in optional labs | Files, registry, process, image load, events |

## Module 00 Installation Order

1. Install or validate the Windows analysis VM.
2. Configure the isolated or host-only network.
3. Create the `Clean OS` snapshot.
4. Install compiler, editor, debugger, PE tools, process tools, and telemetry utilities.
5. Create the `Tools Installed` snapshot.
6. Create the `maldev-lab/` workspace.
7. Build and run the benign smoke-test program.
8. Inspect the built executable and running process.
9. Save evidence under `maldev-lab/evidence/module-00/`.
10. Record cleanup and readiness sign-off.

## Verification Checklist

| Check | Evidence to save |
|---|---|
| Compiler can build a hello-world Windows program | build command and output |
| Debugger can launch and break on entry | screenshot or notes |
| PE tool can open the built executable | section/import notes |
| Process tool can identify the running program | PID, threads, modules |
| Snapshot exists before experiments | snapshot name and timestamp |

## Smoke-Test Program Requirements

The Module 00 smoke test should be benign. It should do only enough to prove the lab works:

- print a short message
- wait long enough to be found in a process tool
- exit cleanly
- create no persistence
- make no network connection
- touch no sensitive data

## Tooling Boundary

Do not install or run untrusted malware samples for this beginner course path. Use benign test programs and controlled toy artifacts only.
