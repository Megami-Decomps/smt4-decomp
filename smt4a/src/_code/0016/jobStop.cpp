/* NON_MATCHING: handle lookup scheduling and ending-state jump-table formation differ from retail. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/RuntimeObjects.h"

extern "C" void asdProcessEnd(AsdProcess *process);
extern "C" AsdProcessState g_asdProcess;

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

static __inline void stopChildren(AsdProcess *process)
{
    for (AsdProcess *child = process->firstChild; child != NULL;) {
        AsdProcess *next = child->nextSibling;
        child->endDelay = process->endDelay;
        asdProcessEnd(child);
        child = next;
    }
}

extern "C" {

/* End a job and its children after the requested delay. */
u32 jobStop(u32 handle, u16 delay)
{
    if (handle == 0) {
        return 0;
    }
    AsdProcess *process = findProcess(handle);
    switch (process->state) {
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
        process->endDelay = delay;
        stopChildren(process);
        switch (process->state) {
        case ASD_PROC_WAIT_START:
        case ASD_PROC_START_DELAY:
        case ASD_PROC_RUNNING:
            process->state = ASD_PROC_ENDING;
            break;
        default:
            break;
        }
        return 1;
    case ASD_PROC_ENDING:
    case ASD_PROC_END_DELAY:
        process->endDelay = delay;
        stopChildren(process);
        switch (process->state) {
        case ASD_PROC_WAIT_START:
        case ASD_PROC_START_DELAY:
        case ASD_PROC_RUNNING:
            process->state = ASD_PROC_ENDING;
            break;
        default:
            break;
        }
        return 1;
    default:
        return 0;
    }
}
}
