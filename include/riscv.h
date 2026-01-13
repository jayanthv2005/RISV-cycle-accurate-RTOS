#ifndef RISCV_H
#define RISCV_H

static inline void clear_mtimer_interrupt() {
    volatile uint32_t *mtimecmp = (uint32_t*)0x02004000;
    *mtimecmp += 100000;
}

#endif
