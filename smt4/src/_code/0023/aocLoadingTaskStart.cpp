#include "addon/LoadingTask.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "util/BitsAndBytes.h"

extern "C" {
s32 cycleWorkStep(u32 task);
s32 aocLoadingTaskDraw(u32 task);
void taskCreateDraw(const char *name, s32 priority, s32 mode, s32 flags,
                    s32 (*callback)(u32), s32 work, void *argument, u32 parent);

/* Stores the request and starts the add-on loading indicator's calculation and drawing tasks once. */
void aocLoadingTaskStart(AocLoadingTask *loading, u32 request)
{
    loading->request = request;
    if (!(loading->flags & 0x100)) {
        flagsSetBits(&loading->flags, 0x100);
        u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("Aoc loading CALC"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(cycleWorkStep), 0, reinterpret_cast<u32>(loading));
        loading->process = process;
        taskCreateDraw("Aoc loading DOWN", 0xE8, 1, 0,
                       aocLoadingTaskDraw, 0, loading, process);
    }
}
}
