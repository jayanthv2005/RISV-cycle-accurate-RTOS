#include "task.h"

tcb_t tasks[MAX_TASKS];
static uint32_t stacks[MAX_TASKS][STACK_SIZE];
static int task_count = 0;

void task_create(void (*entry)(void), uint32_t id) {
    tcb_t *t = &tasks[task_count];
    uint32_t *sp = &stacks[task_count][STACK_SIZE - 1];

    *(--sp) = (uint32_t)entry;

    t->sp = sp;
    t->state = TASK_READY;
    t->id = id;

    task_count++;
}
