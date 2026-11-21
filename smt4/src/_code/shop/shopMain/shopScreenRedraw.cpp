/* NON_MATCHING: the addresses of the two local tab icon rows are formed and kept in different registers. */
#include "shop/ShopScreen.h"
#include "shop/ShopMenuData.h"

extern "C" {
extern const ShopIconIndices DAT_0044e020[];
void uiRectDrawAtBottomRight(void *header, u32 id, s32 dx, s32 dy, u32 flags);
void FUN_00231bcc(void *header, u32 id, s32 dx, s32 dy, u32 color, u32 flags);
void shopDrawListRow(ShopScreen *screen, s32 index, s32 flag, ShopSlot *slot);
s32 FUN_0029e924(ShopCategoryList *list);
s32 flaggedEntryGetValueByState(ShopCategoryList *list);
s32 rangeLimitMin(ShopCategoryList *list);
s32 flaggedValueHolderGetTotal(ShopCategoryList *list);

/* Redraws the shop screen's header icons and the visible slots of the current category. */
void shopScreenRedraw(ShopScreen *screen, u32 sprite)
{
    u32 headerColor = screen->listId;
    switch (screen->slot) {
    case 0:
        sprite = 0;
        break;
    case 1:
    case 2:
        sprite = 1;
        break;
    case 3:
    case 4:
    case 5:
        sprite = 2;
        break;
    case 6:
        sprite = 11;
        break;
    case 7:
        sprite = 3;
        break;
    case 8:
        sprite = 4;
        break;
    }
    uiRectDrawAtBottomRight(&screen->region, sprite, 0, 0, headerColor);
    u32 color = screen->listId;
    FUN_00231bcc(&screen->region, screen->tab + 0x61, 0, 0, color, 1);
    FUN_00231bcc(&screen->region, 0x65, 0, 0, color, 1);
    FUN_00231bcc(&screen->region, 0x66, 0, 0, color, 1);
    s32 firstIndex = DAT_0044e020[screen->tab].first;
    s32 secondIndex = DAT_0044e020[screen->tab].second;
    /* unit-local: a copy of the two tab icon groups for these draws */
    struct TabIconRows {
        ShopTabImageGroup first;
        ShopTabImageGroup second;
    } icons = {DAT_004074a4.firstTab, DAT_004074a4.secondTab};
    FUN_00231bcc(&screen->region, icons.first.icons[firstIndex], 0, 0, color, 1);
    FUN_00231bcc(&screen->region, icons.second.icons[secondIndex], 0, 0, color, 1);

    s32 mode = screen->pageTransition.phase;
    s32 compact = (mode == 5 || mode == 9) || (mode == 6 || mode == 10) || (mode == 7 || mode == 11) ||
                  (mode == 15 || mode == 16);
    ShopCategoryList *list = &screen->slotInfo[screen->slot];
    ShopSlot *slots = screen->lists[screen->slot].items;
    s32 first = FUN_0029e924(list);
    s32 count = rangeLimitMin(list);
    for (s32 i = 0; i < count; ++i) {
        if (!compact || flaggedEntryGetValueByState(list) != i)
            shopDrawListRow(screen, i + 1, 0, &slots[first + i]);
    }
    if (compact && list->range.count > 0)
        shopDrawListRow(screen, flaggedEntryGetValueByState(list) + 1, 1, &slots[flaggedValueHolderGetTotal(list)]);
    shopPanelSetScrollPosition(screen->view, FUN_0029e924(list), flaggedEntryGetValueByState(list));
    screen->view->refresh(color);
}

} /* extern "C" */
