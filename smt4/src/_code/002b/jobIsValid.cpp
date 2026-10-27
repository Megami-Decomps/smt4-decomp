#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"


extern "C" {
extern AsdProcessState g_asdProcess;
u32 jobIsValid(u32 handle)
{
    u32 group = handle >> ASD_PROC_GROUP_SHIFT;
    AsdProcess *process = g_asdProcess.groups[group].head;
    while (process != NULL) {
        if (process->handle == handle) { return 1; }
        process = process->next;
    }
    return 0;
}
}
