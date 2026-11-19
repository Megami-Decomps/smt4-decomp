#include "ui/UiSpriteApi.h"
#include "shard/S1ListPanel.h"

struct ListLabelWork {
    u8 prefix[0xC8];
    UiSpriteState sprite;
};
extern "C" {
SpriteInfo *layoutFindTableEntry(UiSpriteState *, u32); // declcheck: local (the shared declaration in AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h does not compile here: a value of type "TextureTableEntryIV *" cannot be assigned to an entity of type "SpriteInfo *")
const char *demonGetRaceLabel(u16, u32);
s32 textMeasureOnLayer(const char *, u32);
void drawTextAtSnappedRectangle(UiSpriteState *, f32, f32, u32, u32, const char *, f32, f32, f32);
}

extern "C" void FUN_0022db94(ListLabelWork *work, u32 id, s32 row, s32 highlighted, s32 depth)
{
    f32 z = f32(256 - depth) * 0.00390625f;
    SpriteInfo *rowSprite;
    u32 background;
    u32 font;
    u32 color;
    if (!highlighted) {
        rowSprite = layoutFindTableEntry(&work->sprite, row + 0x40E);
        background = 0x48A;
        font = 2;
        color = 0x7A4C00FF;
    } else {
        rowSprite = layoutFindTableEntry(&work->sprite, row + 0x42F);
        background = 0x498;
        font = 3;
        color = 0xFFFFFFFF;
    }
    s16 rowX = rowSprite->x;
    s16 rowY = rowSprite->y;
    const char *text = demonGetRaceLabel(id, 0);
    s32 width = textMeasureOnLayer(text, 2);
    SpriteInfo *frame = layoutFindTableEntry(&work->sprite, background);
    s32 x = rowX + frame->size[0] / 2 + frame->x - width / 2;
    s32 y = frame->y + rowY;
    drawTextAtSnappedRectangle(&work->sprite, f32(x), f32(y), font, color, text, z, 0.0f, 1.0f);
}
