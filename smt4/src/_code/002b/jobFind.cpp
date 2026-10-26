#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/RuntimeObjects_VariantA_AsdProcess.h"


extern "C" {
extern AsdProcGroup *g_asdProcess;
AsdProcess *jobFind(u32 handle)
{
    AsdProcess *process = g_asdProcess[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    while (process != NULL) {
        if (process->id == id) { return process; }
        process = process->next;
    }
    return NULL;
}
}
