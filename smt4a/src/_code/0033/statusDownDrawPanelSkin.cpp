/* NON_MATCHING: the middle-right and bottom-left sprite IDs swap saved registers. */
#include "status/StatusDownA.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void efctSetSpeed(f32 speed);

/* Draws the normal or alternate status panel with independent background and accent timing. */
void statusDownDrawPanelSkin(s32 x, s32 y, s32 alternate)
{
    StatusDownStateA *work = g_statusDown;
    efctSetSpeed(vec2GetSpeed(&work->sprites[1]));
    for (s32 index = 0; index < 3; ++index)
        texDrawTableEntryAtStoredOrigin(2, 0x12, index + 0x57E, x, y, 0xBF);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 0x12, 0x581, x, y, 0xC0);
    /* Each skin supplies a pair of sprites for the top, middle, and bottom rows. */
    s32 layers[3][2];
    if (alternate != 0) {
        layers[0][0] = 0x5B5;
        layers[0][1] = 0x5B6;
        layers[1][0] = 0x5B7;
        layers[1][1] = 0x5B8;
        layers[2][0] = 0x5B9;
        layers[2][1] = 0x5BA;
    } else {
        layers[0][0] = 0x582;
        layers[0][1] = 0x583;
        layers[1][0] = 0x584;
        layers[1][1] = 0x5A3;
        layers[2][0] = 0x5A0;
        layers[2][1] = 0x5A4;
    }
    texDrawTableEntryAtStoredOrigin(2, 0x12, layers[0][0], x, y, 0xC1);
    texDrawTableEntryAtStoredOrigin(2, 0x12, layers[0][1], x, y, 0xC1);
    texDrawTableEntryAtStoredOrigin(2, 0x12, layers[1][0], x, y, 0xC2);
    texDrawTableEntryAtStoredOrigin(2, 0x12, layers[1][1], x, y, 0xC2);
    efctSetSpeed(vec2GetSpeed(&work->sprites[3]));
    texDrawTableEntryAtStoredOrigin(2, 0x12, layers[2][0], x, y, 0xC4);
    texDrawTableEntryAtStoredOrigin(2, 0x12, layers[2][1], x, y, 0xC4);
    efctSetSpeed(1.0f);
}
} /* extern "C" */
