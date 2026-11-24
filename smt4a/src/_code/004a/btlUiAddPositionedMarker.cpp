/* NON_MATCHING: eight lines. Only the texture center fallback differs: retail uses r2 for the masked height and overwrites r0 with the y origin. */
#include "battle/BtlUiGlobal.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 FUN_0035fa18(BtlUiObjCA *widget);
void btlUiPositionRequestAdd(BtlUiA *ui, u32 alternate, u32 mode, f32 x, f32 y, f32 depth);

void btlUiAddPositionedMarker(u32 unused, s32 slot, u32 alternate, s32 x, s32 y)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 sprite = 0;
    if (slot == 0) {
        sprite = 0x3FA;
    } else if (slot == 1) {
        sprite = 0x403;
    } else if (slot == 2) {
        sprite = 0x40C;
    } else if (slot == 3) {
        sprite = 0x415;
    } else if (slot == 4) {
        sprite = 0x1CC;
    }
    const TextureTableEntryIV *layout = asdTMTexTableEntryAt(13, sprite);
    if (slot != 4) {
        f32 yOffset = 0.0f;
        if (alternate == 0) {
            yOffset = -2.0f;
        }
        btlUiPositionRequestAdd(ui, alternate, 0, (f32)(layout->x + (x + 39)),
                     (f32)((y + 17) + layout->y) + yOffset, 0.0f);
        return;
    }
    s32 anchorX = layout->x;
    s32 anchorY = layout->y;
    s32 centerX;
    s32 centerY;
    asdTMTexTableEntryCenter(13, 0x416, &centerX, &centerY);
    centerX = -centerX;
    centerY = -centerY;
    if (FUN_0035fa18(&ui->objC)) {
        layout = asdTMTexTableEntryAt(13, 0x71);
    } else {
        layout = asdTMTexTableEntryAt(13, 0x70);
    }
    btlUiPositionRequestAdd(ui, alternate, 0,
                 (f32)((layout->x + x) + (anchorX + centerX)),
                 (f32)((layout->y + y) + (anchorY + centerY)), 0.0f);
}
} /* extern "C" */
