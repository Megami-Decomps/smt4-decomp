#include "sys/Task.h"

extern "C" {

/* Calls one per-phase callback of every live task, list by list. Phase 2 has none. */
void taskRunPhase(int phase)
{
    int i;
    Task *task;

    for (i = 0; i < TASK_LIST_COUNT; i++) {
        task = taskGetList(i)->head;
        switch (phase) {
        case 0:
            for (; task != NULL; task = task->next) {
                if (task->killDelay == 0 && task->phase0 != NULL) {
                    task->phase0(task->work);
                }
            }
            break;
        case 1:
            for (; task != NULL; task = task->next) {
                if (task->killDelay == 0 && task->phase1 != NULL) {
                    task->phase1(task->work);
                }
            }
            break;
        case 2:
            break;
        case 3:
            for (; task != NULL; task = task->next) {
                if (task->killDelay == 0 && task->phase3 != NULL) {
                    task->phase3(task->work);
                }
            }
            break;
        }
    }
}

} /* extern "C" */
