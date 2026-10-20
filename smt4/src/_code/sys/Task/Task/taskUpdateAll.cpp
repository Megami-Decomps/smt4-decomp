#include "sys/Task.h"

extern "C" {

void FUN_0028ec84(Task *task);
void taskListUpdate(u8 list);

/* Visits every task of every list, then runs each list's update. */
void taskUpdateAll(void)
{
    int i;
    Task *task;

    for (i = 0; i < TASK_LIST_COUNT; i++) {
        for (task = taskGetList(i)->head; task != NULL; task = task->next) {
            FUN_0028ec84(task);
        }
    }
    for (i = 0; i < TASK_LIST_COUNT; i++) {
        taskListUpdate(i);
    }
}

} /* extern "C" */
