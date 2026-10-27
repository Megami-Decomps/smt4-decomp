/* NON_MATCHING: the process lookup now matches (inline find returning NULL); retail saves the arguments in parameter order and loads the g_asdProcess literal into r0 where the build uses r2 (prologue scheduling only). */
/* NON_MATCHING: Process lookup condition merging and recursive-call scheduling differ. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
extern "C" {
extern AsdProcessState g_asdProcess;

static __inline AsdProcess *findProcess(u32 handle)
{
    AsdProcess *process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id)
            return process;
    }
    return NULL;
}

// Applies mutable flags to a process and recursively to every descendant.
void FUN_003452f8(s32 enabled, u32 handle, u32 flags)
{
    AsdProcess* process = findProcess(handle);
    if (enabled != 0) {
        process->flags |= flags & 0x0FFFFFF0;
    } else {
        process->flags &= ~(flags & 0x0FFFFFF0);
    }
    for (AsdProcess* child = process->firstChild; child != NULL; child = child->nextSibling) {
        FUN_003452f8(enabled, child->handle, flags);
    }
}
}
