/* NON_MATCHING: one store is scheduled differently: retail computes list->count - 1, sets up the
 * free call's argument, then stores the count; this stores it first. */
#include "sys/Task.h"

extern "C" {

void FUN_002c415c(void *block);

/* Runs a list for one frame: live tasks get their update callback; a task being killed counts
 * killDelay down and, when it reaches zero, gets its destroy callback and is unlinked and freed. */
void taskListUpdate(u8 listIndex)
{
    TaskList *list = taskGetList(listIndex);
    Task *task = list->head;
    Task *prev;
    Task *next;

    while (task != NULL) {
        if (task->killDelay != 0) {
            if (--task->killDelay == 0) {
                if (task->destroy != NULL) {
                    task->destroy(task->work);
                }
                prev = task->prev;
                next = task->next;
                if (prev != NULL) {
                    prev->next = next;
                } else {
                    list->head = next;
                }
                if (next != NULL) {
                    next->prev = prev;
                } else {
                    list->tail = prev;
                }
                list->count--;
                FUN_002c415c(task);
                task = next;
            } else {
                task = task->next;
            }
        } else {
            if (task->update != NULL) {
                task->update(task->work);
            }
            task = task->next;
        }
    }
}

} /* extern "C" */
