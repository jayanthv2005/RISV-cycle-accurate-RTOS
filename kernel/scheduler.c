#include "scheduler.h"

static int current_idx = 0;
static tcb_t *current_task;

void scheduler_init() {
    current_idx = 0;
    current_task = &tasks[0];
}

tcb_t* scheduler_next() {
    current_idx = (current_idx + 1) % MAX_TASKS;
    return &tasks[current_idx];
}

void scheduler_start() {
    current_task->state = TASK_RUNNING;
    asm volatile ("mv sp, %0" :: "r"(current_task->sp));
    asm volatile ("ret");
}
