#include "scheduler.h"
#include "riscv.h"

extern void context_switch(uint32_t*, uint32_t*);
extern tcb_t *current_task;

void machine_timer_interrupt() {
    clear_mtimer_interrupt();
    tcb_t *next = scheduler_next();
    context_switch(current_task->sp, next->sp);
    current_task = next;
}
