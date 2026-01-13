#!/bin/bash
qemu-system-riscv32 \
    -machine virt \
    -nographic \
    -kernel rtos.elf
