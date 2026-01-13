#include "rtos.h"
#include "scheduler.h"

void rtos_start() {
    scheduler_init();
    scheduler_start();
}
