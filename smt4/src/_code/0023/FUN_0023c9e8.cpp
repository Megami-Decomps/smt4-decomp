/* NON_MATCHING: center fallback block placement, saved-register allocation and final coordinate additions differ. */
#include "battle/btlUI.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern BtlUiGlobals g_btlUi;
const SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 id);
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
    const SpriteInfo *sprite = asdTMTexTableEntryAt(0x15, spriteId);
    if (kind != 4) {
        FUN_00289fa8(ui, id, 0, (f32)(sprite->x + (x + 39)),
                      (f32)(y + 17 + sprite->y), 0.0f);
        return;
    }
    s16 anchorX = sprite->x;
    s16 anchorY = sprite->y;
    const SpriteInfo *reference = asdTMTexTableEntryAt(0x15, 0x416);
    s32 centerX, centerY;
    if (reference->size) {
        centerX = reference->x + reference->size[0] / 2;
        centerY = reference->y + reference->size[1] / 2;
    } else {
        centerX = reference->x + ((reference->bounds.width & 0x7fff) >> 1);
        centerY = reference->y + ((reference->bounds.height & 0x7fff) >> 1);
    }
    const SpriteInfo *origin = asdTMTexTableEntryAt(0x15, 0x71);
    FUN_00289fa8(ui, id, 0, (f32)((anchorX - centerX) + (origin->x + x)),
                  (f32)((anchorY - centerY) + (origin->y + y)), 0.0f);
}
}
