#include "classes/Obj536044.h"
#include "shop/ShopSelectedItem.h"
#include "shop/ShopBuyItem.h"
#include "script/scrScriptProcess.h"
#include "ui/UiControl.h"
#include "code/Code0049_Smt4a.h"
#include "code/Code004d_Smt4a.h"

struct CountAt5A;

extern "C" {

void buttonHelpSetText(const s8 *text, u32 color);
void messageChoiceShowCurrent(Obj536044 *shop);
s32 inputConfirmPressed(void);
void sendEvent100020E(void);
void sendEvent100020F(void);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
void FUN_0038b010(u8 value);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);
void obj04Finish(void);
void releaseEntriesB(CountAt5A *entries);
void menuOpenCommandList(Obj536044 *shop);

} /* extern "C" */

/* Updates the item list: waits for the closing script, then handles buying the selected item and the
 * menu/cancel buttons. */
void Obj536044::itemMenuHandleSelectionInput()
{
    if (substate != 0) {
        if (substate == 1 && scrRunOpcodesStub(controller) == 2) {
            buttonHelpSetText(NULL, 0xF4F4F4FF);
            changeState(5);
        }
        return;
    }
    scrRunOpcodesStub(controller);
    panelSetTarget(0, 0);
    u32 confirmed = FUN_004954e8((SubmenuWork *)this);
    messageChoiceShowCurrent(this);
    if (slotInfo[slot].range.count > 0 && inputConfirmPressed() != 0) {
        confirmed = 1;
    }
    if (canBuyItem(selectedItem()) && confirmed != 0) {
        sendEvent100020E();
        shopEnterQuantitySelection(this, 12);
        return;
    }
    if (inputIsQuestMenuPressed() != 0) {
        menuCursors[2] = 0;
        FUN_0038b010(0);
        sendEvent100020F();
        uiSpriteBankApplyPreset(&animation, 1);
        obj04Finish();
        releaseEntriesB((CountAt5A *)view);
        releaseEntriesA((CountAt30 *)touchSelection);
        for (s32 i = 0; i < touchRegionCount; i++) {
            ifTouchRegionRemove();
        }
        substate = 1;
        return;
    }
    if (inputIsQuestCancelPressed() != 0) {
        sendEvent100020E();
        menuOpenCommandList(this);
    }
}
