#ifndef TASK_H
#define TASK_H

#include <stdint.h>

#define MAX_TASKS 8
#define STACK_SIZE 256

typedef enum {
    TASK_READY,
    TASK_RUNNING,
    TASK_BLOCKED
} task_state_t;

typedef struct {
    uint32_t *sp;
    task_state_t state;
    uint32_t id;
} tcb_t;

extern tcb_t tasks[MAX_TASKS];

void task_create(void (*entry)(void), uint32_t id);

#endif
