#include "gamedata/EquipmentSortPower.h"
#include "shard/S1SelectMenu.h"
#include "shop/ShopScreen.h"
#include "shop/ShopSlotNeighbors.h"
#include "shard/Shard0049.h"
#include "script/scrScriptProcess.h"
#include "classes/Obj55ca08.h"

extern "C" {
void buttonHelpSetText(u32, u32);
void messageTargetSetValue(u32, u32);
void messageMainSetEnabled(s32);
void shopDrawSelectedItem(SelectMenu *);
s32 inputConfirmPressed(void);
s32 playerSlotHoldsEntry(SelectMenu *, u16);
void FUN_002328b4(void);
void shopEnterQuantitySelection(SelectMenu *, s32); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 inputIsQuestRepeatRight(void);
s32 inputIsQuestRepeatLeft(void);
s32 ifTouchGetSelectionModeForRegion(s32);
void shopScreenRebuildForSelection(SelectMenu *, s32);
void shopPlaySelectionChangeSound(void);
s32 inputIsQuestMenuPressed(void);
void FUN_00230df0(u32);
void FUN_00232848(void);
void uiSceneApplySpritePreset(void *, u32);
void messageMainFinishWindow(void);
void ifTouchRegionClearAll(MenuView *);
void releaseEntriesA(Obj55ca08 *); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "playerSlotHoldsEntry" has "C" linkage)
void ifTouchRegionRemove(void);
s32 inputIsQuestCancelPressed(void);
void shopMenuHandleCancel(SelectMenu *);

extern ShopSlotStep g_shopItemTabNeighbors[]; /* the item tabs' neighbours (Apocalypse: g_shopItemTabNeighbors) */

/* Tests whether the item can be sold: every item off the selling list (slot 8); on it, one the player does not
 * hold equipped or of which more than one is held (Apocalypse: Obj536044::canSellItem). */
static __inline bool shopCanSellItem(Scene3a *scene, const EquipmentMenuItem *entry)
{
    u16 item = entry->id;
    return scene->slot != 8 || playerSlotHoldsEntry(scene, item) == 0 || itemGetOwnedCount(item) > 1;
}

/* Updates the shop's selling list: waits for the page's script, then handles selling the selected item, tab
 * switching and the menu and cancel buttons. */
void shopSellListUpdate(SelectMenu *menu)
{
    if (menu->pageTransition.substep != 0) {
        if (menu->pageTransition.substep == 1 && scrRunOpcodesStub(menu->process) == 2) {
            menu->pageTransition.phase = 3;
            menu->pageTransition.substep = 0;
            buttonHelpSetText(0, 0x323232FF);
            messageMainSetEnabled(1);
        }
        return;
    }
    messageMainSetEnabled(0);
    scrRunOpcodesStub(menu->process);
    messageTargetSetValue(0, 0);
    u32 accepted = shopApplyEntryAndCheckReady(menu);
    shopDrawSelectedItem(menu);
    if (menu->slotInfo[menu->slot].range.count > 0 && inputConfirmPressed())
        accepted = 1;
    if (shopCanSellItem(menu, shopSelectedItem(menu)) && accepted) {
        FUN_002328b4();
        shopEnterQuantitySelection(menu, 11);
        return;
    }
    if (inputIsQuestRepeatRight() || ifTouchGetSelectionModeForRegion(menu->nextRegion) == 6) {
        menu->tab = g_shopItemTabNeighbors[menu->tab].next;
        shopScreenRebuildForSelection(menu, 1);
        shopPlaySelectionChangeSound();
        return;
    }
    if (inputIsQuestRepeatLeft() || ifTouchGetSelectionModeForRegion(menu->previousRegion) == 6) {
        menu->tab = g_shopItemTabNeighbors[menu->tab].previous;
        shopScreenRebuildForSelection(menu, 1);
        shopPlaySelectionChangeSound();
        return;
    }
    if (inputIsQuestMenuPressed()) {
        FUN_00230df0(0);
        FUN_00232848();
        uiSceneApplySpritePreset(&menu->animation, 1);
        messageMainFinishWindow();
        if (menu->help.forceOverride == 1) {
            menu->menuCursors[2] = 1;
        } else {
            menu->menuCursors[2] = 2;
        }
        ifTouchRegionClearAll(menu->view);
        releaseEntriesA(reinterpret_cast<Obj55ca08 *>(menu->touchSelection));
        for (s32 i = 0; i < menu->touchRegionCount; ++i)
            ifTouchRegionRemove();
        menu->pageTransition.substep = 1;
        return;
    }
    if (inputIsQuestCancelPressed()) {
        FUN_002328b4();
        shopMenuHandleCancel(menu);
    }
}
}
