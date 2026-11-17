/* NON_MATCHING: center fallback block placement, saved-register allocation and final coordinate additions differ. */
#include "battle/btlUI.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern BtlUiGlobals g_btlUi;
void FUN_00289fa8(BtlUi *ui, u32 id, u32 mode, f32 x, f32 y, f32 z);

void FUN_0023c9e8(u32, s32 kind, u32 id, s32 x, s32 y)
{
    BtlUi *ui = g_btlUi.ui;
    u32 spriteId = 0;
    if (kind == 0) {
        spriteId = 0x3fa;
    } else if (kind == 1) {
        spriteId = 0x403;
    } else if (kind == 2) {
        spriteId = 0x40c;
    } else if (kind == 3) {
        spriteId = 0x415;
    } else if (kind == 4) {
        spriteId = 0x1cc;
    }
    const TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x15, spriteId);
    if (kind != 4) {
        FUN_00289fa8(ui, id, 0, (f32)(sprite->x + (x + 39)),
                      (f32)(y + 17 + sprite->y), 0.0f);
        return;
    }
    s16 anchorX = sprite->x;
    s16 anchorY = sprite->y;
    const TextureTableEntryIV *reference = asdTMTexTableEntryAt(0x15, 0x416);
    s32 centerX, centerY;
    if (!reference->placement) {
        centerX = reference->x + ((reference->width & 0x7fff) >> 1);
        centerY = reference->y + ((reference->height & 0x7fff) >> 1);
    } else {
        centerX = reference->x + reference->placement->width / 2;
        centerY = reference->y + reference->placement->height / 2;
    }
    const TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x15, 0x71);
    FUN_00289fa8(ui, id, 0, (f32)((anchorX - centerX) + (origin->x + x)),
                  (f32)((anchorY - centerY) + (origin->y + y)), 0.0f);
}
}
