#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct BattleAutoWork {
    /* 0x00 */ void* owner;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ u32 process;
};

extern "C" {
u32 taskCreateDraw(const s8* name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void* owner);
s32 FUN_0024b718(u32 handle);
void FUN_002dec74(u32 handle);

// Start the battle auto-calculation worker owned by this work block.
void btlAutoStartCalculation(BattleAutoWork* work)
{
    work->process = taskCreateDraw((const s8*)"btlAuto Calc", 4, 0, 0,
                                   FUN_0024b718, FUN_002dec74, (u32)work, work->owner);
}
}
