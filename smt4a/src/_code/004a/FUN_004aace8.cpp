/* NON_MATCHING: center-dimension fallback is laid out before the widget query instead of out of line; coordinate registers and normal-slot float tail differ. */
#include "battle/btlUI.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
SpriteInfo *asdTMTexTableEntryAt(s32 group, s32 sprite);
s32 FUN_0035fa18(BtlUiObjCA *widget);
void FUN_004aa0b0(BtlUiA *ui, u32 alternate, u32 mode, f32 x, f32 y, f32 depth);

void FUN_004aace8(u32 unused, s32 slot, u32 alternate, s32 x, s32 y)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 sprite = 0;
    if (slot == 0)
        sprite = 0x3FA;
    else if (slot == 1)
        sprite = 0x403;
    else if (slot == 2)
        sprite = 0x40C;
    else if (slot == 3)
        sprite = 0x415;
    else if (slot == 4)
        sprite = 0x1CC;
    const SpriteInfo *layout = asdTMTexTableEntryAt(13, sprite);
    if (slot != 4) {
        FUN_004aa0b0(ui, alternate, 0, static_cast<f32>(layout->x + (x + 39)),
                     static_cast<f32>((y + 17) + layout->y) + (alternate ? 0.0f : -2.0f), 0.0f);
        return;
    }
    s32 anchorX = layout->x;
    s32 anchorY = layout->y;
    layout = asdTMTexTableEntryAt(13, 0x416);
    s32 centerOffsetX, centerOffsetY;
    if (layout->size) {
        centerOffsetX = -(layout->x + layout->size[0] / 2);
        centerOffsetY = -(layout->y + layout->size[1] / 2);
    } else {
        centerOffsetX = -(layout->x + ((layout->bounds.width & 0x7FFF) >> 1));
        centerOffsetY = -(layout->y + ((layout->bounds.height & 0x7FFF) >> 1));
    }
    if (FUN_0035fa18(&ui->objC))
        layout = asdTMTexTableEntryAt(13, 0x71);
    else
        layout = asdTMTexTableEntryAt(13, 0x70);
    FUN_004aa0b0(ui, alternate, 0,
                 static_cast<f32>((layout->x + x) + (anchorX + centerOffsetX)),
                 static_cast<f32>((layout->y + y) + (anchorY + centerOffsetY)), 0.0f);
}
}
