/* NON_MATCHING: only the delay's sign extension differs: retail narrows it in place (sxth r1, r1) and keeps the state in r0, the
 * build extends into r0 and loads the state into r2. Switching on a single-use `u8 state = process->state;` local gives
 * IDENTICAL in both games, but that local exists only for the allocation, so it is not used. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/RuntimeObjects.h"

extern "C" void asdProcessEnd(AsdProcess *process);
extern "C" AsdProcessState g_asdProcess;

static __inline AsdProcess *findProcess(u32 handle)
{
    u32 group = handle >> ASD_PROC_GROUP_SHIFT;
    AsdProcess *process = g_asdProcess.groups[group].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id) {
            return process;
        }
    }
    return NULL;
}

/* asdProcessEnd's body: ends the children with the same delay, then moves an active process into its ending state. */
static __inline void endProcess(AsdProcess *process)
{
    AsdProcess *child = process->firstChild;
    while (child != NULL) {
        AsdProcess *next = child->nextSibling;
        child->endDelay = process->endDelay;
        asdProcessEnd(child);
        child = next;
    }
    switch (process->state) {
    case ASD_PROC_FREE:
    case ASD_PROC_ENDING:
        break;
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
        process->state = ASD_PROC_ENDING;
        break;
    default:
        break;
    }
}

extern "C" {

/* Ends a job and its children after the requested delay. */
u32 jobStop(u32 handle, u16 delay)
{
    if (handle == 0) {
        return 0;
    }
    AsdProcess *process = findProcess(handle);
    switch (process->state) {
    case ASD_PROC_FREE:
        return 0;
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
        process->endDelay = delay;
        endProcess(process);
        break;
    case ASD_PROC_ENDING:
    case ASD_PROC_END_DELAY:
        process->endDelay = delay;
        endProcess(process);
        break;
    default:
        return 0;
    }
    return 1;
}
}
