# Lab Architecture

---

> **Lab Objective**
>
> Build a controlled Windows malware research lab that supports the full course loop: write benign code, build it, run it, debug it, inspect file and process state, capture telemetry, clean up, and reset.

## Baseline Machines

| Machine | Role | Network |
|---|---|---|
| Windows Analysis VM | Primary hands-on workstation: compiler, editor, debugger, PE tools, process tools, telemetry utilities | Isolated or host-only |
| Optional Windows Target VM | Toy process target for later cross-process observation labs | Same isolated network |
| Host System | Stable storage for notes, repository, exports, and screenshots | No untrusted execution |

Internet access should be temporary and disabled before running hands-on malware-like behavior exercises.

---

## Course Lab Loop

Every hands-on lesson should use some version of this loop:

```text
read the concept -> build a benign artifact -> run it -> inspect it -> record evidence -> clean up -> reset if needed
```

| Step | Learner action | Evidence |
|---|---|---|
| Build | Compile or prepare a benign toy program, DLL, config, or worksheet artifact | build command, output path, hash if useful |
| Run | Execute only inside the isolated lab | timestamp, PID, command line, screenshot if useful |
| Inspect | Use debugger, PE tool, process tool, log, or memory view | direct observation table |
| Interpret | Separate what was seen from what is inferred | observation/inference/validation note |
| Clean up | Stop programs, remove temporary files, revert snapshot when needed | cleanup checklist |

## Required Workspace

Create this structure during Module 00 and reuse it throughout the course:

```text
maldev-lab/
├── source/
│   ├── module-01/
│   ├── module-02/
│   └── module-10/
├── builds/
├── evidence/
│   ├── module-00/
│   ├── module-01/
│   ├── screenshots/
│   ├── tool-output/
│   └── notebooks/
├── scratch/
└── cleanup-notes/
```

## Snapshot Model

| Snapshot | When to create | What it means |
|---|---|---|
| Clean OS | After installation and updates | Recovery point before tools |
| Tools Installed | After compiler, debugger, and analysis utilities | Baseline for Module 01 |
| Pre-Lab | Immediately before a lab | Reset point for the current exercise |
| Post-Lab Evidence | Optional, after evidence capture | Archive state for later review |

## Network Model

Use an isolated or host-only network for hands-on labs. Do not bridge experimental VMs onto production networks. If internet access is needed for updates, enable it temporarily, update, then return to the isolated configuration.

## Module 00 Readiness Gate

Before Module 01, the learner must prove:

- the VM boots and is isolated
- baseline snapshots exist
- compiler and debugger are installed
- PE and process inspection tools open correctly
- a benign program can be built and run
- the built executable can be inspected as a PE file
- the running process can be found by PID
- evidence is saved in the course workspace
- cleanup is documented

## Evidence Storage

Store evidence outside disposable VM state when possible:

```text
evidence/
├── module-00/
├── module-01/
├── screenshots/
├── command-output/
└── notes/
```
