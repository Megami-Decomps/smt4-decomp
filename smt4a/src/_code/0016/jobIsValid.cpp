/* NON_MATCHING: compiler allocates and schedules the scheduler-global load differently. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"


extern "C" {
extern AsdProcessState g_asdProcess;
u32 jobIsValid(u32 handle)
{
    AsdProcess *process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    for (; process != NULL; process = process->next) {
        if (process->handle == handle) {
            return 1;
        }
    }
    return 0;
}
}
