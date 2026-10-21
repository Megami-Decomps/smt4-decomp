/* NON_MATCHING: handle extraction and group-table load use different registers and instruction order. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" AsdProcessState g_asdProcess;

static __inline AsdProcess* findProcess(u32 handle)
{
    u32 id = handle & ASD_PROC_ID_MASK;
    for (AsdProcess* process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
         process != NULL; process = process->next) {
        if (process->id == id)
            return process;
    }
    return NULL;
}

// Read the update-frame count of a live process handle.
extern "C" s32 asdProcessGetFrames(u32 handle)
{
    return findProcess(handle)->frames;
}
