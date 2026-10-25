/* NON_MATCHING: Retail ldr r0, [pc, #80] differs from recovered ldr r1, [pc, #84]. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

namespace {
struct LoadingWorkView {
    u32 unk00;                 // 0x0000
    u8 unk04[0x1790];          // 0x0004
    u32 unk1794;               // 0x1794
    u8 unk1798[4];             // 0x1798
    u32 unk179C;               // 0x179C
};
}

extern "C" {
s32 cycleWorkStep(u32 job);
s32 FUN_00478ac4(u32 job);

u32 taskCreateDraw(const s8* name, s32 group, u16 startDelay,
                   u16 endDelay, AsdProcUpdateFunc callback,
                   AsdProcFunc onEnd, u32 work, void* owner);

// Store the request value and create the loading calculation and draw tasks once.
void FUN_0047bcdc(LoadingWorkView* work, u32 requestValue)
{
    work->unk179C = requestValue;
    if ((work->unk00 & 0x100) == 0) {
        work->unk00 |= 0x100;
        u32 process = asdProcessCreateSimple(reinterpret_cast<const s8*>("Aoc loading CALC"), 4, 0, 0, cycleWorkStep, NULL, reinterpret_cast<u32>(work));
        work->unk1794 = process;
        taskCreateDraw(reinterpret_cast<const s8*>("Aoc loading DOWN"), 0xEC, 1, 0,
                       FUN_00478ac4, NULL, reinterpret_cast<u32>(work),
                       reinterpret_cast<void*>(process));
    }
}
}
