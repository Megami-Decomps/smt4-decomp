#include "shard/JobWork.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/JobWork.h"

extern "C" AsdProcessState g_asdProcess;

static __inline AsdProcess* findProcess(u32 handle)
{
    AsdProcess* process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id)
            return process;
    }
    return NULL;
}

// Return a live job's work address, or zero when its handle is absent.
extern "C" JobWork* jobGetWork(u32 handle)
{
    AsdProcess* process = findProcess(handle);
    return process != NULL ? (JobWork*)process->unk48 : NULL;
}
