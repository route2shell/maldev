# Observation, Inference, and Validation Checklist

---

| Question | Notes |
|---|---|
| What did I directly observe? | |
| Which tool produced the observation? | |
| What artifact path proves it? | |
| What am I inferring from the observation? | |
| What other explanations might fit? | |
| What would validate the inference? | |
| What would disprove it? | |
| What cleanup did I perform? | |

## Signal Families

| Surface | Examples |
|---|---|
| Process | creation, parent/child relationship, command line, integrity, session |
| Thread | start address, state, stack, context changes |
| Memory | regions, protections, private vs image-backed, entropy, strings |
| Module | image loads, exports, imports, unusual path or identity |
| File | created, modified, deleted, renamed, mapped |
| Registry | value creation, autorun-like configuration, cleanup residue |
| Network | loopback traffic, timing, cadence, headers, destination |
| Events | ETW, Sysmon, event logs, tool-specific traces |
