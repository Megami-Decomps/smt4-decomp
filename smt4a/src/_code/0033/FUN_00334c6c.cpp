/* NON_MATCHING: recovered animation speed getters; alternate flag, owner and sprite-ID saved registers remain permuted. */
#include "status/StatusDown.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteState.h"

struct StatusPanelAnimationsView {
    u8 prefix[0xB4];
    UiSpriteState background;
    UiSpriteState middle;
    UiSpriteState accent;
};
typedef char StatusPanelAnimationOffsets[
    offsetof(StatusPanelAnimationsView, background) == 0xB4 &&
    offsetof(StatusPanelAnimationsView, accent) == 0x1CC ? 1 : -1];

extern "C" {
extern StatusDownStateA *g_statusDown;
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *animation);

// Draw the normal or alternate status panel with independent background and accent timing.
void FUN_00334c6c(s32 x, s32 y, s32 alternate)
{
    StatusDownStateA *work = g_statusDown;
    StatusPanelAnimationsView *animations = reinterpret_cast<StatusPanelAnimationsView *>(work);
    efctSetSpeed(vec2GetSpeed(&animations->background));
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
    efctSetSpeed(vec2GetSpeed(&animations->accent));
    FUN_001835b4(2, 0x12, bottomLeft, x, y, 0xC4);
    FUN_001835b4(2, 0x12, bottomRight, x, y, 0xC4);
    efctSetSpeed(1.0f);
}
}
