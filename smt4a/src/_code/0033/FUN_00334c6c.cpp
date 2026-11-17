/* NON_MATCHING: recovered animation speed getters; alternate flag, owner and sprite-ID saved registers remain permuted. */
#include "status/StatusDownA.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteState.h"

extern "C" {
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *animation);

// Draw the normal or alternate status panel with independent background and accent timing.
void FUN_00334c6c(s32 x, s32 y, s32 alternate)
{
    StatusDownStateA *work = g_statusDown;
    efctSetSpeed(vec2GetSpeed(&work->sprites[1]));
    for (s32 index = 0; index < 3; ++index)
        texDrawTableEntryAtStoredOrigin(2, 0x12, index + 0x57E, x, y, 0xBF);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x581, x, y, 0xC0);
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
    texDrawTableEntryAtStoredOrigin(2, 0x12, topLeft, x, y, 0xC1);
    texDrawTableEntryAtStoredOrigin(2, 0x12, topRight, x, y, 0xC1);
    texDrawTableEntryAtStoredOrigin(2, 0x12, middleLeft, x, y, 0xC2);
    texDrawTableEntryAtStoredOrigin(2, 0x12, middleRight, x, y, 0xC2);
    efctSetSpeed(vec2GetSpeed(&work->sprites[3]));
    texDrawTableEntryAtStoredOrigin(2, 0x12, bottomLeft, x, y, 0xC4);
    texDrawTableEntryAtStoredOrigin(2, 0x12, bottomRight, x, y, 0xC4);
    efctSetSpeed(1.0f);
}
}
