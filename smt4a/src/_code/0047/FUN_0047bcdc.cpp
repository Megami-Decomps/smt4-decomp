/* NON_MATCHING: Retail ldr r0, [pc, #80] differs from recovered ldr r1, [pc, #84]. */
#include "common.h"

namespace {
struct LoadingWorkView {
    u32 unk00;                 // 0x0000
    u8 unk04[0x1790];          // 0x0004
    void* unk1794;             // 0x1794
    u8 unk1798[4];             // 0x1798
    u32 unk179C;               // 0x179C
};
}

extern "C" {
// These callback declarations identify symbols; their argument lists are unknown.
s32 cycleWorkStep(...);
s32 FUN_00478ac4(...);

void* asdProcessCreateSimple(const char* name, u32 priority, u32 option,
                             u32 flags, s32 (*callback)(...),
                             u32 callbackOption, void* work);
void taskCreateDraw(const char* name, u32 priority, u32 option,
                    u32 flags, s32 (*callback)(...),
                    u32 callbackOption, void* work, void* process);

// Store the request value and create the loading calculation and draw tasks once.
void FUN_0047bcdc(LoadingWorkView* work, u32 requestValue)
{
    work->unk179C = requestValue;
    if ((work->unk00 & 0x100) == 0) {
        work->unk00 |= 0x100;
        void* process = asdProcessCreateSimple("Aoc loading CALC", 4, 0, 0,
                                               cycleWorkStep, 0, work);
        work->unk1794 = process;
        taskCreateDraw("Aoc loading DOWN", 0xEC, 1, 0,
                       FUN_00478ac4, 0, work, process);
    }
}
}
