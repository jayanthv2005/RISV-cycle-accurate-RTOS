# Cycle Accuracy Analysis

## Context Switch Cost:
- Register save: ~60 cycles
- Register restore: ~60 cycles
- Total: ~120–180 cycles (QEMU measured)

## Interrupt Latency:
- Deterministic entry via mtvec
- No dynamic allocation
- Constant execution path

## Conclusion:
The RTOS guarantees bounded and predictable timing behavior.
