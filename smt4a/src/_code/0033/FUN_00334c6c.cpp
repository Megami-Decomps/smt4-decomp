/* NON_MATCHING: status panel sprite layers and effect speeds restored; animation field bases and corresponding saved-register allocation differ. */
#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, s32 group, s32 sprite, s32 x, s32 y, s32 flags);

// Draw the normal or alternate status panel with independent background and accent timing.
void FUN_00334c6c(s32 x, s32 y, s32 alternate)
{
    StatusDownStateA *work = g_statusDown;
    efctSetSpeed(work->panelEffectSpeed);
    for (s32 index = 0; index < 3; ++index)
        FUN_001835b4(2, 0x12, index + 0x57E, x, y, 0xBF);
    efctSetSpeed(1.0f);
    FUN_001835b4(2, 0x12, 0x581, x, y, 0xC0);
    s32 topLeft, topRight, middleLeft, middleRight, bottomLeft, bottomRight;
    if (alternate != 0) {
        topLeft = 0x5B5;
        topRight = 0x5B6;
        middleLeft = 0x5B7;
        middleRight = 0x5B8;
        bottomLeft = 0x5B9;
        bottomRight = 0x5BA;
    } else {
        topLeft = 0x582;
        topRight = 0x583;
        middleLeft = 0x584;
        middleRight = 0x5A3;
        bottomLeft = 0x5A0;
        bottomRight = 0x5A4;
    }
    FUN_001835b4(2, 0x12, topLeft, x, y, 0xC1);
    FUN_001835b4(2, 0x12, topRight, x, y, 0xC1);
    FUN_001835b4(2, 0x12, middleLeft, x, y, 0xC2);
    FUN_001835b4(2, 0x12, middleRight, x, y, 0xC2);
    efctSetSpeed(work->accentEffectSpeed);
    FUN_001835b4(2, 0x12, bottomLeft, x, y, 0xC4);
    FUN_001835b4(2, 0x12, bottomRight, x, y, 0xC4);
    efctSetSpeed(1.0f);
}
}
