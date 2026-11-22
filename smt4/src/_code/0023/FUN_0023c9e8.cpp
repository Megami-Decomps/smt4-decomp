/* NON_MATCHING: written as the Apocalypse twin FUN_004aace8; the kind-4 path's final additions and the centre fallback's temporaries differ in registers. */
#include "battle/BtlUiGlobal.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00289fa8(BtlUi *ui, u32 id, u32 mode, f32 x, f32 y, f32 z);

/* Places battle-UI element `id` at (x, y) offset by the layout sprite of `kind`; kind 4 is placed
 * relative to the centre of its reference sprite. */
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
    s32 anchorX = sprite->x;
    s32 anchorY = sprite->y;
    s32 centerX;
    s32 centerY;
    asdTMTexTableEntryCenter(0x15, 0x416, &centerX, &centerY);
    s32 centerOffsetX = -centerX;
    s32 centerOffsetY = -centerY;
    const TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x15, 0x71);
    FUN_00289fa8(ui, id, 0,
                 (f32)((origin->x + x) + (anchorX + centerOffsetX)),
                 (f32)((origin->y + y) + (anchorY + centerOffsetY)), 0.0f);
}
}
