/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the process allocation. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdProcessState g_asdProcess;

void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 asdGxCommandListCreate(void);
void FUN_002c425c(void *owner, u32 handle);

/* Creates a process named `name` in `group`, linked at the end of the group's list. It starts
 * after `startDelay` frames, runs `onUpdate` each frame and ends `endDelay` frames after it is told
 * to. `owner`, if given, is told the new process's handle. Returns the handle (0 if out of memory). */
u32 asdProcessCreate(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcFunc onStart,
                 AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 unk48, void *owner)
{
    AsdProcess *proc;
    AsdProcess *other;
    AsdProcGroup *list;
    s32 i;
    u32 id;

    proc = (AsdProcess *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdProcess), 1);
    if (proc == NULL) {
        return 0;
    }

    proc->nameSum = 0;
    for (i = 0; (proc->name[i] = name[i]) != '\0' && i < ASD_PROC_NAME_LEN; i++) {
        proc->nameSum += name[i];
    }
    proc->group = group;
    proc->name[ASD_PROC_NAME_LEN - 1] = '\0';
    proc->state = ASD_PROC_WAIT_START;

    /* Pick an id no live process uses. */
retry:
    g_asdProcess.nextId++;
    if (g_asdProcess.nextId >= ASD_PROC_ID_MASK) {
        g_asdProcess.nextId = 1;
    }
    id = g_asdProcess.nextId;
    for (i = 0; i < g_asdProcess.groupCount; i++) {
        for (other = g_asdProcess.groups[i].head; other != NULL; other = other->next) {
            if (other->id == id) {
                goto retry;
            }
        }
    }

    proc->id = id;
    proc->handle = (id & ASD_PROC_ID_MASK) | (group << ASD_PROC_GROUP_SHIFT);
    proc->startDelay = startDelay;
    proc->endDelay = endDelay;
    proc->onStart = onStart;
    proc->onUpdate = onUpdate;
    proc->onEnd = onEnd;
    proc->unk48 = unk48;
    proc->cmdList = asdGxCommandListCreate();
    proc->startTimer.active = 1;
    proc->timer74.active = 1;
    proc->endTimer.active = 1;
    proc->timer84.active = 1;
    proc->flags |= ASD_PROC_FLAG_DEFAULT;

    list = &g_asdProcess.groups[proc->group];
    switch (proc->state) {
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
    case ASD_PROC_ENDING:
    case ASD_PROC_END_DELAY:
        if (list->head != NULL) {
            list->tail->next = proc;
            proc->prev = list->tail;
            list->tail = proc;
        } else {
            list->head = proc;
            list->tail = proc;
            proc->prev = NULL;
        }
        proc->next = NULL;
        g_asdProcess.count++;
    }

    if (owner != NULL) {
        FUN_002c425c(owner, proc->handle);
    }
    return proc->handle;
}

} /* extern "C" */
