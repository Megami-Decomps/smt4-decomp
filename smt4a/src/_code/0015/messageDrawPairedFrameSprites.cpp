#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);
void FUN_001835b4(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags);
void efctSetSpeed(f32 speed);

void messageDrawPairedFrameSprites(u32 leftBase, u32 leftOverlay, u32 leftEdge,
    u32 rightBase, u32 rightOverlay, u32 rightEdge)
{
    MessagePanelA *panel = g_messageMain.panel;
    s32 leftX, leftY, rightX, rightY;
    if (panel->unk19FA != 0) {
        leftX = vec2GetXInt(panel->spritesCA4[17]);
        leftY = vec2GetYInt(panel->spritesCA4[17]);
        rightX = vec2GetXInt(panel->spritesCA4[18]);
        rightY = vec2GetYInt(panel->spritesCA4[18]);
        FUN_001835b4(2, 4, leftEdge, leftX, leftY, 0xf1);
        FUN_001835b4(2, 4, rightEdge, rightX, rightY, 0xf1);
    } else {
        leftX = -vec2GetXInt(panel->spritesCA4[19]);
        leftY = 0;
        rightX = vec2GetXInt(panel->spritesCA4[19]);
        rightY = 0;
        FUN_001835b4(2, 4, leftBase, leftX + 320, 0, 0xf1);
        FUN_001835b4(2, 4, rightOverlay, rightX - 320, 0, 0xf1);
    }
    FUN_001835b4(2, 4, leftBase, leftX, leftY, 0xf1);
    FUN_001835b4(2, 4, leftOverlay, leftX, leftY, 0xf1);
    FUN_001835b4(2, 4, rightBase, rightX, rightY, 0xf1);
    FUN_001835b4(2, 4, rightOverlay, rightX, rightY, 0xf1);
    efctSetSpeed(1.0f);
}
}
