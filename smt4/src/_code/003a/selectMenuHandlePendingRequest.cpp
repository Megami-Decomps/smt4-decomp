#include "shard/S1SelectMenu.h"

extern "C" {

void uiRectDrawAtBottomRight(void *cursor, s32 a, s32 b, s32 c, u32 listId);
s32 FUN_0029e924(MenuList *list);
s32 rangeLimitMin(MenuList *list);
s32 FUN_00240d5c(MenuList *list);
u32 flaggedValueHolderGetTotal(MenuList *list);
void FUN_003a21b8(SelectMenu *menu, s32 index, s32 marked, s32 value);
void FUN_002332e8(MenuView *view, s32 first, s32 selected);
void FUN_003a2960(SelectMenu *menu);
void FUN_003a1d04(SelectMenu *menu);
void FUN_003a1f00(SelectMenu *menu);
void FUN_003a0f88(SelectMenu *menu);

/* Handle the menu's pending request: refresh the list entries, or run the cancel, confirm or scroll
 * handler; then close the menu when asked to. */
void selectMenuHandlePendingRequest(SelectMenu *menu)
{
    if (menu->flags & MENU_REFRESH) {
        u32 listId = menu->listId;

        uiRectDrawAtBottomRight(menu->cursor, 10, 0, 0, listId);

        bool pickMode = false;
        if (menu->mode == 4) {
            pickMode = true;
        }
        MenuList *list = &menu->list;
        s32 first = FUN_0029e924(list);
        s32 count = rangeLimitMin(list);

        for (s32 i = 0; i < count; i++) {
            if (!pickMode || FUN_00240d5c(list) != i) {
                FUN_003a21b8(menu, i + 1, 0, first + i);
            }
        }
        if (pickMode && list->marked > 0) {
            u32 marked = flaggedValueHolderGetTotal(list);

            FUN_003a21b8(menu, FUN_00240d5c(list) + 1, 1, marked);
        }
        s32 selected = FUN_00240d5c(list);

        FUN_002332e8(menu->view, FUN_0029e924(list), selected);
        menu->view->vtbl->setList(menu->view, listId);
    } else if (menu->flags & MENU_CANCEL) {
        FUN_003a2960(menu);
    } else if (menu->flags & MENU_CONFIRM) {
        FUN_003a1d04(menu);
    } else if (menu->flags & MENU_SCROLL) {
        FUN_003a1f00(menu);
    }
    if (menu->flags & MENU_CLOSE) {
        FUN_003a0f88(menu);
    }
}

} /* extern "C" */
