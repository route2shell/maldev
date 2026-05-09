# Legal and Safety Boundaries

---

> **Required Boundary**
>
> This course is for controlled research on learner-owned systems and isolated lab machines. Do not use course material against systems you do not own or do not have explicit authorization to test.

## Allowed

| Activity | Boundary |
|---|---|
| Local Windows internals experiments | Learner-owned VM or workstation lab only |
| Benign payload representation exercises | Toy programs and inert test bytes only |
| Loader and process observation | Local lab processes created for the exercise |
| Telemetry and detection reasoning | Local logs, local tools, and simulated evidence |
| Capstone architecture | Local-only design and evidence pack |

## Not Allowed

- unauthorized deployment
- real-world targeting
- credential theft
- destructive behavior
- public infrastructure operations
- bypass testing against third-party products outside a controlled lab
- persistence on non-lab systems
- production-ready evasion recipe collection

---

## Dual-Use Handling

When a topic can be misused, the course keeps the exercise focused on mechanics, constraints, observability, and defensive interpretation. The learner should be able to describe how a behavior works and how it is seen, not deploy it in uncontrolled environments.

## Lab Rule

If a lab cannot be reset with a snapshot, explained with evidence, and cleaned up locally, it does not belong in the core path.
