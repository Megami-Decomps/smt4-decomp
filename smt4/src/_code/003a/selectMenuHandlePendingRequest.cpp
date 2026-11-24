#include "shard/S1SelectMenu.h"

extern "C" {

void uiRectDrawAtBottomRight(void *cursor, s32 a, s32 b, s32 c, u32 listId);
s32 FUN_0029e924(MenuList *list);
s32 rangeLimitMin(MenuList *list);
s32 flaggedEntryGetValueByState(MenuList *list);
u32 flaggedValueHolderGetTotal(MenuList *list);
void shopDrawAppraisalRow(SelectMenu *menu, s32 index, s32 marked, s32 value);
void shopDrawEquippedItemPage(SelectMenu *menu);
void FUN_003a1d04(SelectMenu *menu);
void shopScreenRedraw(SelectMenu *menu);
void shopDrawQuantityPanel(SelectMenu *menu); // declcheck: local (IV's select menu view; classes/Obj536044.h declares Apocalypse's twin on Obj536044)

/* Handle the menu's pending request: refresh the list entries, or run the cancel, confirm or scroll
 * handler; then close the menu when asked to. */
void selectMenuHandlePendingRequest(SelectMenu *menu)
{
    if (menu->flags & MENU_REFRESH) {
        u32 listId = menu->listId;

        uiRectDrawAtBottomRight(&menu->region, 10, 0, 0, listId);

        bool pickMode = false;
        if (menu->pageTransition.substep == 4) {
            pickMode = true;
        }
        MenuList *list = &menu->list;
        s32 first = FUN_0029e924(list);
        s32 count = rangeLimitMin(list);

        for (s32 i = 0; i < count; i++) {
            if (!pickMode || flaggedEntryGetValueByState(list) != i) {
                shopDrawAppraisalRow(menu, i + 1, 0, first + i);
            }
        }
        if (pickMode && list->range.count > 0) {
            u32 marked = flaggedValueHolderGetTotal(list);

            shopDrawAppraisalRow(menu, flaggedEntryGetValueByState(list) + 1, 1, marked);
        }
        s32 selected = flaggedEntryGetValueByState(list);

        shopPanelSetScrollPosition(menu->view, FUN_0029e924(list), selected);
        menu->view->refresh(listId);
    } else if (menu->flags & MENU_CANCEL) {
        shopDrawEquippedItemPage(menu);
    } else if (menu->flags & MENU_CONFIRM) {
        FUN_003a1d04(menu);
    } else if (menu->flags & MENU_SCROLL) {
        shopScreenRedraw(menu);
    }
    if (menu->flags & MENU_CLOSE) {
        shopDrawQuantityPanel(menu);
    }
}

} /* extern "C" */
