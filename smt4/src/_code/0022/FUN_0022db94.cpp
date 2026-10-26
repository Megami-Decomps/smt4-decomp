/* NON_MATCHING: layout, uxth of the u32 id, x-before-y order and the (0.0f, 1.0f) scale constants match retail; the sum for y is allocated to r1 instead of retail's ip (a single register difference). */
#include "ui/UiSpriteState.h"
#include "shard/S1ListPanel.h"

struct ListLabelWork {
    u8 prefix[0xC8];
    UiSpriteState sprite;
};
extern "C" {
SpriteInfo *FUN_002bf4f0(UiSpriteState *, u32);
const char *demonGetRaceLabel(u16, u32);
s32 curveEvaluateStandard(const char *, u32);
void FUN_002be56c(UiSpriteState *, u32, u32, const char *, f32, f32, f32, f32, f32);
}

extern "C" void FUN_0022db94(ListLabelWork *work, u32 id, s32 row, s32 highlighted, s32 depth)
{
    f32 z = f32(256 - depth) * 0.00390625f;
    SpriteInfo *rowSprite;
    u32 background;
    u32 font;
    u32 color;
    if (!highlighted) {
        rowSprite = FUN_002bf4f0(&work->sprite, row + 0x40E);
        background = 0x48A;
        font = 2;
        color = 0x7A4C00FF;
    } else {
        rowSprite = FUN_002bf4f0(&work->sprite, row + 0x42F);
        background = 0x498;
        font = 3;
        color = 0xFFFFFFFF;
    }
    s16 rowX = rowSprite->x;
    s16 rowY = rowSprite->y;
    const char *text = demonGetRaceLabel(id, 0);
    s32 width = curveEvaluateStandard(text, 2);
    SpriteInfo *frame = FUN_002bf4f0(&work->sprite, background);
    s32 x = rowX + frame->size[0] / 2 + frame->x - width / 2;
    s32 y = frame->y + rowY;
    FUN_002be56c(&work->sprite, font, color, text, f32(x), f32(y), z, 0.0f, 1.0f);
}
