#include "ui/UnlockLog.h"
#include "ui/UiControl_Smt4a.h"

extern "C" {
s32 padQueryLogicalKey(u32 button, u32 mode);
void eventQueueAddUniqueIfValid(u32 event);
s32 resourceRunOperationIfUnblocked(void *cursor);
s32 scrollOwnerSetValue(void *cursor, s32 value);
s32 gridNavigationGetItemCount(void *cursor);
s32 flaggedEntryGetValueA(void *cursor);
void scrollListAdvancePage(UnlockLogWork *menu, u32 state);

/* Menu input: moves the list cursor with the up/down buttons, picks a button with the choice
 * buttons and starts the selection animation. */
void unlockLogHandleSelectionInput(UnlockLogWork *menu)
{
    uiSpriteAdvanceAnimation(&menu->titleSprite, 1.0f);
    scrollListAdvancePage(menu, 7);
    s32 up = padQueryLogicalKey(9, 0);
    if (up == 0 || resourceRunOperationIfUnblocked(menu->cursor) != 0) {
        if (up != 0) {
            eventQueueAddUniqueIfValid(0x100020d);
            menu->selected--;
            scrollOwnerSetValue(menu->cursor, menu->selected);
        }
        if (padQueryLogicalKey(10, 0) != 0 && gridNavigationGetItemCount(menu->cursor) >= 7) {
            if (resourceRunOperationIfUnblocked(menu->cursor) != gridNavigationGetItemCount(menu->cursor) - 7 &&
                (flaggedEntryGetValueA(menu->cursor) != 0 || gridNavigationGetItemCount(menu->cursor) >= 7)) {
                eventQueueAddUniqueIfValid(0x100020d);
                menu->selected++;
                scrollOwnerSetValue(menu->cursor, menu->selected);
            }
        }
    }
    if (menu->confirmed != 0) {
        if (padQueryLogicalKey(8, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            unlockLogPoseButton(menu, 3);
            menu->firstPressed = 1;
            dialogEnterState((Dialog *)menu, 6, 7);
        }
        if (padQueryLogicalKey(7, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            unlockLogPoseButton(menu, 2);
            menu->secondPressed = 1;
            dialogEnterState((Dialog *)menu, 6, 7);
        }
    }
    if (padQueryLogicalKey(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        uiSpriteSetKeyframe(&menu->backSprite, 2, 0);
        uiSpriteSetImageKeyframe(&menu->backSprite, 1, 0);
        uiSpriteSetKeyframe(&menu->listSprite, 1, 0);
        uiSpriteSetImageKeyframe(&menu->listSprite, 0, 0);
        if (menu->entry != 0) {
            dialogEnterState((Dialog *)menu, 5, 8);
            return;
        }
        dialogEnterState((Dialog *)menu, 5, 3);
    }
}

} /* extern "C" */
