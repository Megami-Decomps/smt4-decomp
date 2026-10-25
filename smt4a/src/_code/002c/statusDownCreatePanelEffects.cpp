/* NON_MATCHING: animated-position speed getter calls match; effect IDs and alternate mode retain different saved-register roles. */
#include "status/StatusDown.h"
#include "shard/TextureDrawCall.h"
#include <stddef.h>

// The effect speeds belong to animated-position subobjects in the status work.
struct StatusDownEffectPositionView {
    u8 prefix[0xB4];
    u8 panelPosition[0x24];
    u8 betweenPositions[0xF4];
    u8 accentPosition[0x24];
};
typedef char StatusDownEffectPositionOffsets[
    offsetof(StatusDownEffectPositionView, panelPosition) == 0xB4 &&
    offsetof(StatusDownEffectPositionView, accentPosition) == 0x1CC ? 1 : -1];

extern "C" {
extern StatusDownStateA *g_statusDown;
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *position);

// Build the status-down panel and its mode-specific accents.
void statusDownCreatePanelEffects(u32 target, u32 flags, s32 alternate)
{
    StatusDownEffectPositionView *status =
        reinterpret_cast<StatusDownEffectPositionView *>(g_statusDown);
    efctSetSpeed(vec2GetSpeed(status->panelPosition));
    for (s32 i = 0; i < 3; ++i)
        FUN_001835b4(2, 0x12, 0x56f + i, target, flags, 0xbf);
    efctSetSpeed(1.0f);
    FUN_001835b4(2, 0x12, 0x572, target, flags, 0xc0);
    s32 panel, firstAccent, secondAccent, finalAccent;
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
    efctSetSpeed(vec2GetSpeed(status->accentPosition));
    FUN_001835b4(2, 0x12, finalAccent, target, flags, 0xc4);
    efctSetSpeed(1.0f);
}
}
