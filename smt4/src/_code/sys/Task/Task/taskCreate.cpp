/* NON_MATCHING: retail reloads task->priority (ldrh) in the insertion compares instead of reusing the narrowed argument; insertion/work-result registers differ. */
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
#include <string.h>

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 tag, u32 mode, u32 size, u32 flags);
void rt_memclr(void *memory, u32 size);
}

static __inline void taskInsertBefore(Task *task, Task *following)
{
    task->prev = following->prev;
    task->next = following;
    if (task->prev != NULL) {
        task->prev->next = task;
    }
    if (task->next != NULL) {
        task->next->prev = task;
    }
}

static __inline void taskInsertAfter(Task *task, Task *previous)
{
    task->prev = previous;
    task->next = previous->next;
    if (task->prev != NULL) {
        task->prev->next = task;
    }
    if (task->next != NULL) {
        task->next->prev = task;
    }
}

/* Allocates callback-owned work and inserts its task after existing equal-priority tasks. */
extern "C" void *taskCreate(TaskFunc update, TaskFunc phase0, TaskFunc phase1, TaskFunc phase3,
    TaskFunc destroy, s32 workSize, s32 listIndex, u32 priority, s32 clearWork)
{
    TaskList *list = &g_taskLists[listIndex];
    u32 allocationSize = workSize + offsetof(Task, work);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\sys\\Task\\Task.c", 346);
    Task *task = (Task *)asdMemoryAlloc(0x100, 0x100, 0, allocationSize, 1);
    if (task == NULL) {
        return NULL;
    }
    task->list = listIndex;
    task->priority = priority;
    task->unk04 = 0;
    task->killDelay = 0;
    task->update = update;
    task->phase0 = phase0;
    task->phase1 = phase1;
    task->phase3 = phase3;
    task->destroy = destroy;
    Task *tail = list->tail;
    Task *head = list->head;
    task->prev = NULL;
    task->next = NULL;
    memset(task->unk24, 0, sizeof(task->unk24));
    if (list->count == 0) {
        list->head = task;
        list->tail = task;
    } else if (task->priority < head->priority) {
        taskInsertBefore(task, head);
        list->head = task;
    } else if (tail != NULL && task->priority >= tail->priority) {
        taskInsertAfter(task, tail);
        list->tail = task;
    } else {
        for (Task *following = list->head; following != NULL; following = following->next) {
            if (task->priority < following->priority) {
                taskInsertBefore(task, following);
                break;
            }
        }
    }
    ++list->count;
    void *work = task->work;
    if (clearWork != 0) {
        rt_memclr(work, workSize);
    }
    return work;
}
