/* NON_MATCHING: control flow, the hoisted flag bits and the shared NULL now match; retail allocates two more callee-saved registers (group r4, id r8, NULL r9) where armcc packs them into r5-r7. */
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

/* Sets (set != 0) or clears the flags in `mask` on `process` and, recursively, on its children. */
static __inline void asdProcessChangeTree(AsdProcess *process, s32 set, u32 mask)
{
    u32 flags = mask & ASD_PROC_FLAG_MASK;

    process->flags = set ? process->flags | flags : process->flags & ~flags;
    for (process = process->firstChild; process != NULL; process = process->nextSibling) {
        jobSetFlagsRecursive(set, process->handle, mask);
    }
}

/* Sets (set != 0) or clears the flags in `mask` on the processes `handle` and `mode` select. */
void jobSetFlagsByMode(s32 set, u32 handle, u32 mask, u32 mode)
{
    AsdProcGroup *group = &g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT];
    u32 id = handle & ASD_PROC_ID_MASK;
    u32 flags = mask & ASD_PROC_FLAG_MASK;
    AsdProcess *target = NULL;
    AsdProcess *process;

    switch (mode) {
    case ASD_PROC_FLAGS_ONE:
        for (process = group->head; process != NULL; process = process->next) {
            if (process->id == id) {
                target = process;
                break;
            }
        }
        target->flags = set ? target->flags | flags : target->flags & ~flags;
        break;
    case ASD_PROC_FLAGS_OTHERS:
    case ASD_PROC_FLAGS_ALL:
        for (s32 i = 0; i < g_asdProcess.groupCount; i++) {
            for (process = g_asdProcess.groups[i].head; process != NULL; process = process->next) {
                if ((process->handle != handle && mode == ASD_PROC_FLAGS_OTHERS) || mode == ASD_PROC_FLAGS_ALL) {
                    process->flags = set ? process->flags | flags : process->flags & ~flags;
                }
            }
        }
        break;
    case ASD_PROC_FLAGS_WITH_CHILDREN:
        for (process = group->head; process != NULL; process = process->next) {
            if (process->id == id) {
                target = process;
                break;
            }
        }
        asdProcessChangeTree(target, set, mask);
        break;
    }
}

} /* extern "C" */
