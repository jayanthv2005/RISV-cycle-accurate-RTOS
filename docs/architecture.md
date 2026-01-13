# RTOS Architecture

The RTOS operates entirely in **Machine Mode** on RV32I.

## Components:
- Task Control Blocks (TCB)
- Round-robin scheduler
- Machine timer interrupt handler
- Assembly-level context switch routine

## Execution Flow:
1. Timer interrupt fires
2. Trap handler executes
3. Scheduler selects next task
4. Context switch saves/restores registers
5. New task resumes execution
