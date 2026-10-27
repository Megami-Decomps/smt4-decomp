/* NON_MATCHING: same control flow; armcc orders the per-mode blocks and allocates registers differently (retail hoists the group pointer, id and a zero into registers). */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

extern AsdProcessState g_asdProcess;

extern void jobSetFlagsRecursive(s32 set, u32 handle, u32 mask);

/* The flag bits a mask can address. */
#define ASD_PROC_FLAG_MASK 0xffffff0

/* Process flag update modes. */
#define ASD_PROC_FLAGS_ONE 0          /* only the process `handle` names */
#define ASD_PROC_FLAGS_OTHERS 1       /* every process but `handle` */
#define ASD_PROC_FLAGS_WITH_CHILDREN 2 /* `handle` and its children */
#define ASD_PROC_FLAGS_ALL 3          /* every process */

/* The process with `id` in a group's list (NULL when it is gone). */
static __inline AsdProcess *asdProcessFind(u32 handle)
{
    AsdProcess *process;

    for (process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head; process != NULL; process = process->next) {
        if (process->id == (handle & ASD_PROC_ID_MASK)) {
            return process;
        }
    }
    return NULL;
}

/* Sets (set != 0) or clears the flags in `mask` on the processes `handle` and `mode` select. */
void FUN_002a2d28(s32 set, u32 handle, u32 mask, u32 mode)
{
    u32 flags = mask & ASD_PROC_FLAG_MASK;
    AsdProcess *process;

    switch (mode) {
    case ASD_PROC_FLAGS_OTHERS:
    case ASD_PROC_FLAGS_ALL: {
        s32 group;

        for (group = 0; group < g_asdProcess.groupCount; group++) {
            for (process = g_asdProcess.groups[group].head; process != NULL; process = process->next) {
                if ((process->handle != handle && mode == ASD_PROC_FLAGS_OTHERS) || mode == ASD_PROC_FLAGS_ALL) {
                    process->flags = set ? process->flags | flags : process->flags & ~flags;
                }
            }
        }
        break;
    }
    case ASD_PROC_FLAGS_ONE:
        process = asdProcessFind(handle);
        process->flags = set ? process->flags | flags : process->flags & ~flags;
        break;
    case ASD_PROC_FLAGS_WITH_CHILDREN:
        process = asdProcessFind(handle);
        process->flags = set ? process->flags | flags : process->flags & ~flags;
        for (process = process->firstChild; process != NULL; process = process->nextSibling) {
            jobSetFlagsRecursive(set, process->handle, mask);
        }
        break;
    }
}

} /* extern "C" */
