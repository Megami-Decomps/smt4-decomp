/* NON_MATCHING: process-ending state switch layout has not matched retail. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdProcessState g_asdProcess;
void asdProcessEnd(AsdProcess *process);

/* End a process and all children, preserving the requested end delay. */
u32 jobStop(u32 handle, u32 delay)
{
    if (handle == 0)
        return 0;
    AsdProcess *process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    for (; process != NULL; process = process->next) {
        if (process->id == (handle & ASD_PROC_ID_MASK))
            break;
    }
    switch (process->state) {
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
        process->endDelay = static_cast<s16>(delay);
        for (AsdProcess *child = process->firstChild; child != NULL;) {
            AsdProcess *next = child->nextSibling;
            child->endDelay = process->endDelay;
            asdProcessEnd(child);
            child = next;
        }
        switch (process->state) {
        case ASD_PROC_WAIT_START:
        case ASD_PROC_START_DELAY:
        case ASD_PROC_RUNNING:
            process->state = ASD_PROC_ENDING;
            break;
        default:
            return 1;
        }
        return 1;
    case ASD_PROC_ENDING:
    case ASD_PROC_END_DELAY:
        process->endDelay = static_cast<s16>(delay);
        for (AsdProcess *child = process->firstChild; child != NULL;) {
            AsdProcess *next = child->nextSibling;
            child->endDelay = process->endDelay;
            asdProcessEnd(child);
            child = next;
        }
        switch (process->state) {
        case ASD_PROC_WAIT_START:
        case ASD_PROC_START_DELAY:
        case ASD_PROC_RUNNING:
            process->state = ASD_PROC_ENDING;
            break;
        default:
            return 1;
        }
        return 1;
    default:
        return 0;
    }
}
}
