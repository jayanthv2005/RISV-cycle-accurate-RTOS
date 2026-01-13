# Context Switching

Context switching is implemented in pure RISC-V assembly.

## Saved Registers
- ra
- s0–s11
- stack pointer

## Design Goals
- Minimal cycles
- No compiler-generated overhead
- ABI-compliant register preservation
