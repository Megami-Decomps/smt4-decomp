/* NON_MATCHING: the calculation callback literal is loaded before the flag store and uses r1 instead of r0; all other instructions agree. */
#include "addon/LoadingTask.h"

extern "C" {
s32 FUN_0038f8d0(u32 task);
s32 FUN_0038f924(u32 task);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 mode, s32 flags,
                           s32 (*callback)(u32), s32 work, void *argument);
void taskCreateDraw(const char *name, s32 priority, s32 mode, s32 flags,
                    s32 (*callback)(u32), s32 work, void *argument, u32 parent);

// Start the calculation and drawing tasks for the add-on loading indicator.
void FUN_00233db8(AocLoadingTask *loading, u32 request)
{
    loading->request = request;
    if (!(loading->flags & 0x100)) {
        loading->flags |= 0x100;
        u32 process = asdProcessCreateSimple("Aoc loading CALC", 2, 0, 0,
                                             FUN_0038f8d0, 0, loading);
        loading->process = process;
        taskCreateDraw("Aoc loading DOWN", 0xE8, 1, 0,
                       FUN_0038f924, 0, loading, process);
    }
}
}
