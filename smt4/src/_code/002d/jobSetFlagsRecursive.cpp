#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
extern "C" {
extern AsdProcessState g_asdProcess;

static __inline AsdProcess *findProcess(u32 handle)
{
    u32 group = handle >> ASD_PROC_GROUP_SHIFT;
    AsdProcess *process = g_asdProcess.groups[group].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id)
            return process;
    }
    return NULL;
}

// Applies mutable flags to a process and recursively to every descendant.
void jobSetFlagsRecursive(s32 enabled, u32 handle, u32 flags)
{
    AsdProcess* process = findProcess(handle);
    if (enabled != 0) {
        process->flags |= flags & 0x0FFFFFF0;
    } else {
        process->flags &= ~(flags & 0x0FFFFFF0);
    }
    for (AsdProcess* child = process->firstChild; child != NULL; child = child->nextSibling) {
        jobSetFlagsRecursive(enabled, child->handle, flags);
    }
}
}
