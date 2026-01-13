# Cycle-Accurate Preemptive RTOS Kernel for RISC-V (RV32I)

A **from-scratch, machine-mode RTOS kernel** for RISC-V RV32I focused on **cycle-accurate preemption**, **deterministic scheduling**, and **assembly-level context switching**.

This project is intentionally minimal and mechanism-driven, built to show **how a real RTOS works at the hardware boundary**, not just how to use one.

## Key Capabilities:
- Preemptive round-robin scheduler (O(1))
- Machine-timer (CLINT) driven preemption
- Full RV32I assembly context save/restore
- Deterministic, bounded interrupt latency
- No heap, no dynamic allocation
- Bare-metal execution on QEMU `virt`

---

## Architecture:
Machine Timer Interrupt
↓
Scheduler (O(1))
↓
Assembly Context Switch
↓
Next Task

This project focuses on **mechanisms, not APIs** — how an RTOS actually works at the hardware boundary.
