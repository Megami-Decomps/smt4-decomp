#include <stdio.h>
#include "shop/ShopScreen.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "util/BitsAndBytes.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 flaggedEntryGetValueByState(ShopCategoryList *list);
void uiRectDrawAtBottomRight(void *header, u32 id, s32 dx, s32 dy, u32 flags);
void uiDrawSizedTextureAtRegionEnd(void *header, u32 id, s32 dx, s32 dy, u32 color, u32 flags);

/* Draws the quantity panel: its frame at the selected row, the stepper's active arrows and the quantity. */
void shopDrawQuantityPanel(ShopScreen *screen)
{
    char number[32];
    s32 depth = screen->listId + 6;
    s32 step = 2;
    s32 slot = screen->slot;
    ShopCategoryList *list = &screen->slotInfo[slot];

    if (slot == 7 || slot == 8) {
        step = 1;
    }
    const TextureTableEntryIV *frame = layoutFindTableEntry(&screen->panel.rect, flaggedEntryGetValueByState(list) + step + 0x4f);
    s32 frameX = frame->x;
    s32 frameY = frame->y;
    const TextureTableEntryIV *origin = layoutFindTableEntry(&screen->panel.rect, 200);
    s32 x = origin->x + frameX;
    s32 y = frameY + origin->y;
    if (screen->slot == 8) {
        uiRectDrawAtBottomRight(&screen->panel.rect, 9, x, y, depth);
    } else {
        uiRectDrawAtBottomRight(&screen->panel.rect, 8, x, y, depth);
    }
    uiDrawSizedTextureAtRegionEnd(&screen->panel.rect, 0xc2, x, y, depth, 1);
    uiDrawSizedTextureAtRegionEnd(&screen->panel.rect, 0xc3, x, y, depth, 1);
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    if (screen->quantity.incrementActive != 0) {
        uiDrawSizedTextureAtRegionEnd(&screen->panel.rect, 0xc4, x, y, depth + 1, 1);
    }
    if (screen->quantity.decrementActive != 0) {
        uiDrawSizedTextureAtRegionEnd(&screen->panel.rect, 0xc5, x, y, depth + 1, 1);
    }
    renderCtxPopCounted(g_titleScene, RENDER_STACK_B);
    s32 quantity = screen->quantity.value;
    const TextureTableEntryIV *numberPos = layoutFindTableEntry(&screen->panel.rect, 199);
    u32 color = 0xffffffff;
    if (screen->quantity.value == screen->quantity.maximum) {
        color = 0xf49800ff;
    }
    x += numberPos->x;
    y += numberPos->y;
    sprintf(number, "%2d", quantity);
    drawTextAtRelativePosition(&screen->panel.rect, 0, x, y, 0, 7, color, depth, number);
}

} /* extern "C" */
