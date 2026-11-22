/* NON_MATCHING: register allocation only (117 vs 117 rows, 20 diff lines): slot != 4 path and out-of-line center fallback match retail; anchor/center register permutation (r4/r8/r9/sl) and r2/ip in the fallback differ. */
#include "battle/BtlUiGlobal.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 FUN_0035fa18(BtlUiObjCA *widget);
void FUN_004aa0b0(BtlUiA *ui, u32 alternate, u32 mode, f32 x, f32 y, f32 depth);

/* Computes the center of a TMX sprite table entry (same logic as uiStoreTextureEntryCenter). */
static __inline void texEntryGetCenter(u32 file, s32 index, s32 *outX, s32 *outY)
{
    const TextureTableEntryIV *entry = asdTMTexTableEntryAt(file, index);
    if (entry->placement == NULL) {
        u16 w = entry->width & 0x7FFF;
        u16 h = entry->height & 0x7FFF;
        *outX = entry->x + (w >> 1);
        *outY = entry->y + (h >> 1);
    } else {
        *outX = entry->x + entry->placement->width / 2;
        *outY = entry->y + entry->placement->height / 2;
    }
}

void FUN_004aace8(u32 unused, s32 slot, u32 alternate, s32 x, s32 y)
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
        FUN_004aa0b0(ui, alternate, 0, (f32)(layout->x + (x + 39)),
                     (f32)((y + 17) + layout->y) + yOffset, 0.0f);
        return;
    }
    s32 anchorX = layout->x;
    s32 anchorY = layout->y;
    s32 centerX;
    s32 centerY;
    texEntryGetCenter(13, 0x416, &centerX, &centerY);
    s32 centerOffsetX = -centerX;
    s32 centerOffsetY = -centerY;
    if (FUN_0035fa18(&ui->objC)) {
        layout = asdTMTexTableEntryAt(13, 0x71);
    } else {
        layout = asdTMTexTableEntryAt(13, 0x70);
    }
    FUN_004aa0b0(ui, alternate, 0,
                 (f32)((layout->x + x) + (anchorX + centerOffsetX)),
                 (f32)((layout->y + y) + (anchorY + centerOffsetY)), 0.0f);
}
} /* extern "C" */
