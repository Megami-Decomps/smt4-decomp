#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "shard/TextureDrawCall.h"

extern "C" {
void efctSetSpeed(f32 speed);

void messageDrawPairedFrameSprites(u32 leftBase, u32 leftOverlay, u32 leftEdge,
    u32 rightBase, u32 rightOverlay, u32 rightEdge)
{
    MessageWindowA *panel = g_messageMain.banner;
    s32 leftX, leftY, rightX, rightY;
    if (panel->pairedFrameBusy != 0) {
        leftX = vec2GetXInt(&panel->sprites[37]);
        leftY = vec2GetYInt(&panel->sprites[37]);
        rightX = vec2GetXInt(&panel->sprites[38]);
        rightY = vec2GetYInt(&panel->sprites[38]);
        texDrawTableEntryAtStoredOrigin(2, 4, leftEdge, leftX, leftY, 0xf1);
        texDrawTableEntryAtStoredOrigin(2, 4, rightEdge, rightX, rightY, 0xf1);
    } else {
        leftX = -vec2GetXInt(&panel->sprites[39]);
        leftY = 0;
        rightX = vec2GetXInt(&panel->sprites[39]);
        rightY = 0;
        texDrawTableEntryAtStoredOrigin(2, 4, leftBase, leftX + 320, 0, 0xf1);
        texDrawTableEntryAtStoredOrigin(2, 4, rightOverlay, rightX - 320, 0, 0xf1);
    }
    texDrawTableEntryAtStoredOrigin(2, 4, leftBase, leftX, leftY, 0xf1);
    texDrawTableEntryAtStoredOrigin(2, 4, leftOverlay, leftX, leftY, 0xf1);
    texDrawTableEntryAtStoredOrigin(2, 4, rightBase, rightX, rightY, 0xf1);
    texDrawTableEntryAtStoredOrigin(2, 4, rightOverlay, rightX, rightY, 0xf1);
    efctSetSpeed(1.0f);
}
}
