# Module 00 Lab 01 - Lab Installation, Tooling, and Readiness Gate

---

> **Lab Objective**
>
> Build and validate the hands-on environment the rest of the course depends on: isolated Windows lab, installed tools, snapshots, repository workspace, evidence structure, and a benign build-run-inspect smoke test.

## Safety Boundary

| Field | Value |
|---|---|
| Allowed target | Learner-owned Windows analysis VM |
| Network | Isolated, host-only, or temporarily NAT only for updates |
| Code | Benign smoke-test program only |
| Snapshot | Required before and after tool installation |
| Cleanup | Required before entering Module 01 |

## Required Environment

- Windows x64 analysis VM
- temporary internet access only for updates and tool installation
- compiler and build tools
- editor
- debugger
- PE inspection tool
- process inspection tool
- telemetry or event inspection utility
- `maldev-lab/` workspace

## Setup Steps

1. Install or validate the Windows analysis VM.
2. Configure an isolated or host-only lab network.
3. Create the `Clean OS` snapshot.
4. Install required tools from [Tooling and VM Setup](../../../docs/tooling-and-vm-setup.md).
5. Create the `Tools Installed` snapshot.
6. Create the `maldev-lab/` workspace from [Lab Architecture](../../../docs/lab-architecture.md).
7. Create an evidence notebook for Module 00.

## Smoke-Test Steps

1. Copy [benign-smoke-test.c](../../../shared/lab-templates/benign-smoke-test.c) into `maldev-lab/source/module-00/smoke-test.c`.
2. Open a Developer Command Prompt.
3. Build it into `maldev-lab/builds/module-00/smoke-test.exe`.
4. Run it inside the Windows analysis VM.
5. Find the running process with the process inspection tool.
6. Open the built executable with the PE inspection tool.
7. Launch or attach with the debugger if available.
8. Capture evidence into `maldev-lab/evidence/module-00/`.
9. Stop the program and clean up temporary files.

Example build command:

```text
cl /nologo /W4 /Fe:maldev-lab\builds\module-00\smoke-test.exe maldev-lab\source\module-00\smoke-test.c
```

Example run command:

```text
maldev-lab\builds\module-00\smoke-test.exe
```

## Expected Observations

| Observation | Evidence |
|---|---|
| VM and network are identified | VM inventory and network note |
| Snapshots exist | snapshot names and timestamps |
| Tools launch successfully | version notes or screenshots |
| Program builds | build output |
| Program runs | PID and process view |
| Executable has PE structure | PE screenshot or section/import notes |
| Cleanup is complete | cleanup note |

## Direct Observation vs Inference

| Direct observation | Inference | Validation |
|---|---|---|
| Compiler produced an executable | Toolchain is ready for Module 01 | Rebuild after snapshot restore |
| Process tool showed the running program | Runtime inspection is available | Confirm PID in debugger or Task Manager |
| PE tool opened the executable | Static PE inspection is available | Compare with another PE utility later |

## Checkpoint Questions

1. Can you build, run, inspect, and clean up a benign Windows program?
2. Which snapshot is the baseline for Module 01?
3. Where will source code, builds, screenshots, tool output, and notebooks live?
4. What network mode is active when hands-on experiments run?
5. What will you do if a later lab leaves the VM in an unknown state?
