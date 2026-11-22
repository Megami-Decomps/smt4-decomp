/* NON_MATCHING: two differences in the update pass. For a process in a disabled group retail sets the "advance" flag
 * (moveq r0, #1) and branches to the flag test at the end of the loop body; the build branches straight to the
 * step to the next process. And the frame counter's increment goes through r2 in retail (add r2, r1, #1) and
 * through r1 here. Everything else, the other two passes included, is retail's code. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

s32 asdProcTimersPassed(AsdProcTimer *timers, s32 updateCount); /* whether the timer conditions have all passed */
void asdGxCommandListDestroy(u32 cmdList);
void asdMemFree(void *block);
void FUN_001407cc(s32 locked);
void asdProcessEnd(AsdProcess *proc);
void asdGxCommandListBegin(u32 cmdList);
void asdGxCommandListEnd(u32 cmdList, s32 unk);

/* Finds the process a handle names in its group's list, or NULL (the lookup jobFind, jobGetWork, jobStop and
 * jobSetParent inline too). */
static __inline AsdProcess *findProcess(u32 handle)
{
    AsdProcess *process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id) {
            return process;
        }
    }
    return NULL;
}

/* Takes a process out of its parent's child list (jobSetParent inlines the same body). */
static __inline void detachProcess(u32 handle)
{
    AsdProcess *process = findProcess(handle);
    AsdProcess *parent = process->parent;
    if (parent != NULL) {
        AsdProcess *previous = parent->firstChild;
        if (previous == process) {
            parent->firstChild = process->nextSibling;
        } else {
            for (AsdProcess *next = previous->nextSibling; next != process; next = next->nextSibling) {
                previous = next;
            }
            previous->nextSibling = process->nextSibling;
        }
        process->parent = NULL;
        process->nextSibling = NULL;
    }
}

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

/* Runs the process's update callback, bracketed by its command list's begin/end when command lists are
 * recorded (stereoscopic 3D on, and the process has no auxiliary callback to draw the second eye itself). */
static __inline s32 procRunUpdate(AsdProcess *proc)
{
    s32 result;

    if (g_asdProcess.cmdListsEnabled != 0 && gxIsStereoscopic3dEnabled() == 1 && proc->onAuxiliary == NULL) {
        asdGxCommandListBegin(proc->cmdList);
    }
    result = proc->onUpdate(proc->handle);
    if (g_asdProcess.cmdListsEnabled != 0 && gxIsStereoscopic3dEnabled() == 1 && proc->onAuxiliary == NULL) {
        asdGxCommandListEnd(proc->cmdList, 0);
    }
    return result;
}

/* Updates one process: ends it when asked to, otherwise runs its update callback and counts the frame.
 * Returns whether the scheduler moves on to the next process (0: this one ended itself and is visited again).
 * Retail keeps that result in r0 and tests it at the end of the loop body where it could have branched, which
 * armcc does only for the value of a function it inlined late: written in place, every arm branches directly. */
static s32 procUpdate(AsdProcess *proc, u32 flags)
{
    s32 result;
    s32 advance;

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
    return advance;
}

/* One scheduler tick. Unless `updateOnly`, it first advances every process's start state, then
 * runs the update callbacks of the running processes, then retires processes whose end delay is over. */
s32 asdProcessUpdate(s32 updateOnly)
{
    AsdProcess *proc;
    AsdProcess *next;
    AsdProcess *prev;
    AsdProcGroup *list;
    s32 group;
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
                        if (asdProcTimersPassed(&proc->startTimer, proc->lastUpdateCount) == 0) {
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
                if ((flags & ASD_PROC_FLAG_SKIP) != 0) {
                    proc = proc->next;
                    continue;
                }
                g_asdProcess.current = proc;
                if ((flags & ASD_PROC_FLAG_PAUSED) != 0) {
                    proc = proc->next;
                    continue;
                }
                advance = procUpdate(proc, flags);
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
                    if (asdProcTimersPassed(&proc->endTimer, proc->lastUpdateCount) == 0) {
                        break;
                    }
                    proc->state = ASD_PROC_END_DELAY;
                    /* fall through */
                case ASD_PROC_END_DELAY:
                    if (proc->endDelay <= 0) {
                        if (proc->onEnd != NULL) {
                            proc->onEnd(proc->handle);
                        }
                        proc->state = ASD_PROC_FREE;

                        detachProcess(proc->handle);

                        /* Unlink it from its group's list. */
                        list = &g_asdProcess.groups[proc->group];
                        prev = proc->prev;
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
