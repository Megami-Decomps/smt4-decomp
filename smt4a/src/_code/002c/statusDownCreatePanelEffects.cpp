/* NON_MATCHING: direct speed-field loads replace retail's subobject base additions, changing register allocation and alignment NOPs. */
#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 group, s32 category, u32 effect, u32 target, u32 flags, s32 layer);

// Build the status-down panel and its mode-specific accents.
void statusDownCreatePanelEffects(u32 target, u32 flags, s32 alternate)
{
    StatusDownStateA *status = g_statusDown;
    efctSetSpeed(status->panelEffectSpeed);
    for (s32 i = 0; i < 3; ++i)
        FUN_001835b4(2, 0x12, 0x56f + i, target, flags, 0xbf);
    efctSetSpeed(1.0f);
    FUN_001835b4(2, 0x12, 0x572, target, flags, 0xc0);
    u32 panel, firstAccent, secondAccent, finalAccent;
    if (alternate) {
        panel = 0x5b1;
        firstAccent = 0x5b2;
        secondAccent = 0x5b3;
        finalAccent = 0x5b4;
    } else {
        panel = 0x573;
        firstAccent = 0x574;
        secondAccent = 0x575;
        finalAccent = 0x59f;
    }
    FUN_001835b4(2, 0x12, panel, target, flags, 0xc1);
    FUN_001835b4(2, 0x12, firstAccent, target, flags, 0xc1);
    FUN_001835b4(2, 0x12, secondAccent, target, flags, 0xc2);
    efctSetSpeed(status->accentEffectSpeed);
    FUN_001835b4(2, 0x12, finalAccent, target, flags, 0xc4);
    efctSetSpeed(1.0f);
}
}
