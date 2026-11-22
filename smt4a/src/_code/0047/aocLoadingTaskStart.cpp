/* NON_MATCHING: as in the smt4 twin, the calculation callback literal is loaded before the flag store and uses r1 instead of r0; all other instructions agree. */
#include "addon/LoadingTask.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 cycleWorkStep(u32 job);
s32 aocLoadingTaskDraw(u32 job);

u32 taskCreateDraw(const s8* name, s32 group, u16 startDelay,
                   u16 endDelay, AsdProcUpdateFunc callback,
                   AsdProcFunc onEnd, u32 work, void* owner);

// Store the request and create the loading calculation and draw tasks once.
void aocLoadingTaskStart(AocLoadingTask *loading, u32 request)
{
    loading->request = request;
    if (!(loading->flags & 0x100)) {
        loading->flags |= 0x100;
        u32 process = asdProcessCreateSimple(reinterpret_cast<const s8*>("Aoc loading CALC"), 4, 0, 0, cycleWorkStep, NULL, reinterpret_cast<u32>(loading));
        loading->process = process;
        taskCreateDraw(reinterpret_cast<const s8*>("Aoc loading DOWN"), 0xEC, 1, 0,
                       aocLoadingTaskDraw, NULL, reinterpret_cast<u32>(loading),
                       reinterpret_cast<void*>(process));
    }
}
}
