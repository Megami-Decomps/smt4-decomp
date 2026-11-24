#include "shard/S1SelectMenu.h"
#include "shop/ShopScreen.h"
#include "shard/Shard0049.h"
#include "script/scrScriptProcess.h"
#include "classes/Obj55ca08.h"

extern "C" {
void buttonHelpSetText(u32, u32);
void messageTargetSetValue(u32, u32);
void shopDrawSelectedItem(SelectMenu *);
s32 inputConfirmPressed(void);
void FUN_002328b4(void);
void shopEnterQuantitySelection(SelectMenu *, s32); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 inputIsQuestMenuPressed(void);
void FUN_00230df0(u32);
void FUN_00232848(void);
void uiSceneApplySpritePreset(void *, u32);
void messageMainFinishWindow(void);
void ifTouchRegionClearAll(MenuView *);
void releaseEntriesA(Obj55ca08 *); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: argument of type "Obj55ca08 *" is incompatible with parameter of type "Obj *")
void ifTouchRegionRemove(void);
s32 inputIsQuestCancelPressed(void);
void shopMenuHandleCancel(SelectMenu *);

/* Updates the shop's buying list: waits for the page's script, then handles buying the selected item and the
 * menu and cancel buttons. */
void shopBuyListUpdate(SelectMenu *menu)
{
    if (menu->pageTransition.substep != 0) {
        if (menu->pageTransition.substep == 1 && scrRunOpcodesStub(menu->process) == 2) {
            buttonHelpSetText(0, 0x323232FF);
            menu->pageTransition.phase = 3;
            menu->pageTransition.substep = 0;
        }
        return;
    }
    scrRunOpcodesStub(menu->process);
    messageTargetSetValue(0, 0);
    u32 accepted = shopApplyEntryAndCheckReady(menu);
    shopDrawSelectedItem(menu);
    if (menu->slotInfo[menu->slot].range.count > 0 && inputConfirmPressed())
        accepted = 1;
    if (shopCanBuyItem(menu, shopSelectedItem(menu)) && accepted) {
        FUN_002328b4();
        shopEnterQuantitySelection(menu, 10);
        return;
    }
    if (inputIsQuestMenuPressed()) {
        menu->menuCursors[2] = 0;
        FUN_00230df0(0);
        FUN_00232848();
        uiSceneApplySpritePreset(&menu->animation, 1);
        messageMainFinishWindow();
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
