#include <stdio.h>
#include "classes/Obj536044.h"
#include "code/Code0031_Smt4a.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void uiDrawCompositeSpriteAtRectCorner(void *group, u32 sprite, s32 x, s32 y, s32 depth);
void uiDrawSizedTextureAtRegionEnd(void *group, u32 sprite, s32 x, s32 y, s32 depth, s32 enabled);
void drawTextAtRelativePosition(void *group, u32 font, s32 x, s32 y, s32 mode,
    s32 alignment, u32 color, s32 depth, const char *text);
static const char s_quantityFormat[] = "%2d";

/* Draws the quantity panel at the selected row, including its arrows and current value. */
void shopDrawQuantityPanel(Obj536044 *shop)
{
    enum { ITEMS_SLOT = 7, SELL_SLOT = 8 };
    char text[32];
    s32 depth = shop->depth + 6;
    s32 spriteOffset = 2;
    s32 slot = shop->slot;
    EquipmentMenuCursor *list = &shop->slotInfo[slot];
    if (slot == ITEMS_SLOT || slot == SELL_SLOT) {
        spriteOffset = 1;
    }
    const TextureTableEntryIV *position = layoutFindTableEntry(&shop->quantityPanel.rect, FUN_0031d174(list) + spriteOffset + 0x4F);
    s32 positionX = position->x;
    s32 positionY = position->y;
    const TextureTableEntryIV *origin = layoutFindTableEntry(&shop->quantityPanel.rect, 200);
    s32 x = origin->x + positionX;
    s32 y = positionY + origin->y;
    if (shop->slot == SELL_SLOT) {
        uiDrawCompositeSpriteAtRectCorner(&shop->quantityPanel.rect, 9, x, y, depth);
    } else {
        uiDrawCompositeSpriteAtRectCorner(&shop->quantityPanel.rect, 8, x, y, depth);
    }
    uiDrawSizedTextureAtRegionEnd(&shop->quantityPanel.rect, 0xC2, x, y, depth, 1);
    uiDrawSizedTextureAtRegionEnd(&shop->quantityPanel.rect, 0xC3, x, y, depth, 1);
    if (shop->quantity.incrementActive) {
        uiDrawSizedTextureAtRegionEnd(&shop->quantityPanel.rect, 0xC4, x, y, depth + 1, 1);
    }
    if (shop->quantity.decrementActive) {
        uiDrawSizedTextureAtRegionEnd(&shop->quantityPanel.rect, 0xC5, x, y, depth + 1, 1);
    }
    s32 quantity = shop->quantity.value;
    const TextureTableEntryIV *label = layoutFindTableEntry(&shop->quantityPanel.rect, 199);
    u32 color = 0xFFFFFFFF;
    if (shop->quantity.value == shop->quantity.maximum) {
        color = 0x57D8FFFF;
    }
    x += label->x;
    y += label->y;
    sprintf(text, s_quantityFormat, quantity);
    drawTextAtRelativePosition(&shop->quantityPanel.rect, 0, x, y, 0, 7, color, depth, text);
}
} /* extern "C" */
