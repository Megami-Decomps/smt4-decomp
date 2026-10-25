#include "result/ResultInput.h"

extern "C" {
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *position);
void FUN_00164b5c(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
void FUN_001835b4(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);

void resultDrawRewardDetails(ResultInputWork* work, s32 x, s32 y, s32 alternate)
{
    efctSetSpeed(vec2GetSpeed(&work->rewardPosition));
    FUN_00164b5c(2, 0x1D, 10, x, y, 0xBF);
    efctSetSpeed(1.0f);
    FUN_001835b4(2, 0x1D, 0xF7, x, y, 0xC4);
    if (alternate) {
        FUN_001835b4(2, 0x1D, 0x184, x, y, 0xC4);
        FUN_001835b4(2, 0x1D, 0x185, x, y, 0xC4);
        FUN_001835b4(2, 0x1D, 0x186, x, y, 0xC6);
        efctSetSpeed(vec2GetSpeed(&work->detailPosition));
        FUN_001835b4(2, 0x1D, 0x187, x, y, 0xC9);
        efctSetSpeed(1.0f);
        return;
    }
    FUN_001835b4(2, 0x1D, 0xF8, x, y, 0xC4);
    FUN_001835b4(2, 0x1D, 0xF9, x, y, 0xC4);
    FUN_001835b4(2, 0x1D, 0xFA, x, y, 0xC6);
    efctSetSpeed(vec2GetSpeed(&work->detailPosition));
    FUN_001835b4(2, 0x1D, 0x17F, x, y, 0xC9);
    efctSetSpeed(1.0f);
}
}
