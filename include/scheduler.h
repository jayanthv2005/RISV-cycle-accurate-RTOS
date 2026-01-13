#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "task.h"

void scheduler_init(void);
void scheduler_start(void);
tcb_t* scheduler_next(void);

#endif
