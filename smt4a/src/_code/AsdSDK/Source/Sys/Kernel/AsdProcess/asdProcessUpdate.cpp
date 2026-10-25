/* NON_MATCHING: control flow of the three passes differs from retail (shared tails, gotos). */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

s32 FUN_00142d8c(AsdProcTimer *timer, ...);
void asdGxCommandListDestroy(u32 cmdList);
void asdMemFree(void *block);
void FUN_001407cc(s32 locked);
void asdProcessEnd(AsdProcess *proc);
void asdGxCommandListBegin(u32 cmdList);
void asdGxCommandListEnd(u32 cmdList, s32 unk);

/* Tells a process to end: its children end with it, and a live process moves to the ending state. */
static __inline void procBeginEnd(AsdProcess *proc)
{
    AsdProcess *child;
    AsdProcess *next;

    for (child = proc->firstChild; child != NULL; child = next) {
        next = child->nextSibling;
        child->endDelay = proc->endDelay;
        asdProcessEnd(child);
    }
    switch (proc->state) {
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
        proc->state = ASD_PROC_ENDING;
        break;
    case ASD_PROC_ENDING:
    case ASD_PROC_END_DELAY:
        break;
    }
}

/* Runs the process's update callback, bracketed by its command list's begin/end when command lists are enabled. */
static __inline s32 procRunUpdate(AsdProcess *proc)
{
    s32 result;

    if (g_asdProcess.cmdListsEnabled != 0 && FUN_001696f4() == 1 && proc->unk64 == 0) {
        asdGxCommandListBegin(proc->cmdList);
    }
    result = proc->onUpdate(proc->handle);
    if (g_asdProcess.cmdListsEnabled != 0 && FUN_001696f4() == 1 && proc->unk64 == 0) {
        asdGxCommandListEnd(proc->cmdList, 0);
    }
    return result;
}

/* One scheduler tick. Unless `updateOnly`, it first advances every process's start state, then
 * runs the update callbacks of the running processes, then retires processes whose end delay is over. */
s32 asdProcessUpdate(s32 updateOnly)
{
    AsdProcess *proc;
    AsdProcess *next;
    AsdProcess *self;
    AsdProcess *parent;
    AsdProcess *prev;
    AsdProcess *sibling;
    AsdProcGroup *list;
    s32 group;
    s32 result;
    s32 advance;
    u32 flags;

    if (updateOnly == 0) {
        /* Pass 1: terminate requests, then the start timers and start delays. */
        for (group = 0; group < g_asdProcess.groupCount; group++) {
            for (proc = g_asdProcess.groups[group].head; proc != NULL; proc = proc->next) {
                if ((proc->flags & ASD_PROC_FLAG_TERMINATE) != 0) {
                    procBeginEnd(proc);
                } else if ((proc->flags & ASD_PROC_FLAG_PAUSED) == 0) {
                    proc->lastUpdateCount = proc->updateCount;
                    proc->updateCount++;
                    switch (proc->state) {
                    case ASD_PROC_WAIT_START:
                        if (FUN_00142d8c(&proc->startTimer) == 0) {
                            break;
                        }
                        proc->state = ASD_PROC_START_DELAY;
                        /* fall through */
                    case ASD_PROC_START_DELAY:
                        if (proc->startDelay > 0) {
                            proc->startDelay--;
                        } else {
                            proc->unk2c = 0;
                            proc->frames = 0;
                            if (proc->onStart != NULL) {
                                proc->onStart(proc->handle);
                            }
                            proc->state = ASD_PROC_RUNNING;
                        }
                    }
                }
            }
        }
    }

    /* Pass 2: run the update callbacks. */
    for (group = 0; group < g_asdProcess.groupCount; group++) {
        proc = g_asdProcess.groups[group].head;
        while (proc != NULL) {
            if (proc->startDelay > 0) {
                proc = proc->next;
                continue;
            }
            if (proc->group < 0x200 && g_asdProcessGroupEnabled[proc->group] == 0) {
                advance = 1;
            } else {
                flags = proc->flags;
                if ((flags & ASD_PROC_FLAG_SKIP) != 0 || (g_asdProcess.current = proc, (flags & ASD_PROC_FLAG_PAUSED) != 0)) {
                    proc = proc->next;
                    continue;
                }
                if ((flags & ASD_PROC_FLAG_TERMINATE) != 0) {
                    proc->updateResult = -1;
                    procBeginEnd(proc);
                    advance = 1;
                    g_asdProcess.current = NULL;
                } else {
                    if (proc->state == ASD_PROC_RUNNING) {
                        if ((flags & ASD_PROC_FLAG_LOCKED) != 0) {
                            FUN_001407cc(1);
                        }
                        result = procRunUpdate(proc);
                        FUN_001407cc(0);
                        proc->updateResult = result;
                        if (result != -1) {
                            if (result != 0) {
                                proc->onUpdate = (AsdProcUpdateFunc)result;
                                proc->updateResult = 0;
                            }
                            advance = 1;
                            proc->frames++;
                        } else {
                            procBeginEnd(proc);
                            advance = 0;
                        }
                    } else {
                        advance = 1;
                        proc->frames++;
                    }
                    g_asdProcess.current = NULL;
                }
            }
            if (advance) {
                proc = proc->next;
            }
        }
    }

    if (updateOnly == 0) {
        /* Pass 3: the end timers and end delays; a process whose delay is over is unlinked and freed. */
        for (group = 0; group < g_asdProcess.groupCount; group++) {
            for (proc = g_asdProcess.groups[group].head; proc != NULL; proc = next) {
                next = proc->next;
                switch (proc->state) {
                case ASD_PROC_ENDING:
                    if (FUN_00142d8c(&proc->endTimer, proc->lastUpdateCount) == 0) {
                        break;
                    }
                    proc->state = ASD_PROC_END_DELAY;
                    /* fall through */
                case ASD_PROC_END_DELAY:
                    if (proc->endDelay < 1) {
                        if (proc->onEnd != NULL) {
                            proc->onEnd(proc->handle);
                        }
                        proc->state = ASD_PROC_FREE;

                        /* Detach it from its parent's child list. */
                        list = g_asdProcess.groups;
                        for (self = list[proc->handle >> ASD_PROC_GROUP_SHIFT].head; self != NULL; self = self->next) {
                            if (self->id == (proc->handle & ASD_PROC_ID_MASK)) {
                                break;
                            }
                        }
                        parent = self->parent;
                        if (parent != NULL) {
                            prev = parent->firstChild;
                            if (prev == self) {
                                parent->firstChild = self->nextSibling;
                            } else {
                                for (sibling = prev->nextSibling; sibling != self; sibling = sibling->nextSibling) {
                                    prev = sibling;
                                }
                                prev->nextSibling = self->nextSibling;
                            }
                            self->parent = NULL;
                            self->nextSibling = NULL;
                        }

                        /* Unlink it from its group. */
                        prev = proc->prev;
                        list = &list[proc->group];
                        if (prev != NULL) {
                            prev->next = proc->next;
                        } else {
                            list->head = proc->next;
                        }
                        if (proc->next != NULL) {
                            proc->next->prev = proc->prev;
                        } else {
                            list->tail = proc->prev;
                        }
                        proc->next = NULL;
                        proc->prev = NULL;
                        g_asdProcess.count--;
                        asdGxCommandListDestroy(proc->cmdList);
                        asdMemFree(proc);
                    } else {
                        proc->endDelay--;
                        if (proc->updateResult != -1) {
                            if ((proc->flags & ASD_PROC_FLAG_LOCKED) != 0) {
                                FUN_001407cc(1);
                            }
                            procRunUpdate(proc);
                            FUN_001407cc(0);
                        }
                    }
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
