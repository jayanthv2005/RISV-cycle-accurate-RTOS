# Cycle-Accurate Preemptive RTOS Kernel for RISC-V (RV32I)

A minimal, cycle-accurate, preemptive Real-Time Operating System (RTOS) kernel built
from first principles for the RISC-V RV32I architecture.

This project focuses on deterministic scheduling, **measurable context-switch
latency**, and **machine-mode timer-driven preemption**, making it suitable for
academic research, interviews, and embedded systems learning.

## Key Features
- RV32I Machine-mode RTOS
- Preemptive round-robin scheduler
- Full RISC-V context save/restore in assembly
- CLINT-based timer interrupts
- Deterministic context switch latency
- QEMU virt platform support
- Clean, silicon-grade repository structure

  
## Architecture Overview
Machine Timer Interrupt
↓
Scheduler (O(1))
↓
Assembly Context Switch
↓
Next Task

This project focuses on **mechanisms, not APIs** — how an RTOS actually works at the hardware boundary.
