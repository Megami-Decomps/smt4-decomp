#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdProcGroup *g_asdProcess;

static __inline AsdProcess *findProcess(u32 handle)
{
    AsdProcess *process = g_asdProcess[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    while (process != NULL) {
        if (process->id == id) {
            return process;
        }
        process = process->next;
    }
    return NULL;
}

// Set the callback invoked by the scheduler's auxiliary process pass.
void asdProcessSetAuxiliaryCallback(u32 handle, AsdProcFunc callback)
{
    findProcess(handle)->onAuxiliary = callback;
}
}
