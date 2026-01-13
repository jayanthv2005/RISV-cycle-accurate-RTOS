#include "rtos.h"
#include "task.h"

void task1() {
    while (1) {}
}

void task2() {
    while (1) {}
}

int main() {
    task_create(task1, 1);
    task_create(task2, 2);
    rtos_start();
    while (1) {}
}
