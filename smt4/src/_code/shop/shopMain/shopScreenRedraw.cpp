/* NON_MATCHING: only register allocation/pool order differs (retail loads the icon-table pointer first and uses r1/r2/r3 for the two icon copies; the icon tables are also read from the image's constant data at DAT_004074a4+0xe4 where this build emits its own copy). */
#include "shop/ShopScreen.h"

/* The two sprite choices each tab makes (indices into the icon table). */
struct ShopTabIcons {
    s32 first;
    s32 second;
};

extern "C" {
extern ShopTabIcons DAT_0044e020[];
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
    u32 firstIcons[4] = {0x6F, 0x6E, 0x71, 0x70};
    u32 secondIcons[4] = {0x7A, 0x79, 0x7C, 0x7B};
    FUN_00231bcc(&screen->region, firstIcons[firstIndex], 0, 0, color, 1);
    FUN_00231bcc(&screen->region, secondIcons[secondIndex], 0, 0, color, 1);

    s32 mode = screen->phase;
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
