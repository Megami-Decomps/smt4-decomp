/* NON_MATCHING: only registers differ: retail keeps the list in r6 and the next task in r5 (swapped here). */
#include "sys/Task.h"

extern "C" {

void asdMemFree(void *block);

/* Removes a task from its list. */
static inline void taskListUnlink(TaskList *list, Task *task)
{
    Task *prev = task->prev;
    Task *next = task->next;

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
}

/* Runs a list for one frame: live tasks get their update callback; a task being killed counts
 * killDelay down and, when it reaches zero, gets its destroy callback and is unlinked and freed. */
void taskListUpdate(u8 listIndex)
{
    TaskList *list = taskGetList(listIndex);
    Task *task = list->head;

    while (task != NULL) {
        if (task->killDelay != 0) {
            if (--task->killDelay == 0) {
                if (task->destroy != NULL) {
                    task->destroy(task->work);
                }
                Task *next = task->next;
                taskListUnlink(list, task);
                asdMemFree(task);
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
