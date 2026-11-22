#include "classes/Obj536044.h"
#include "shop/ShopSelectedItem.h"
#include "script/scrScriptProcess.h"
#include "ui/UiControl.h"
#include "code/Code0049_Smt4a.h"
#include "code/Code004d_Smt4a.h"
#include "gamedata/GameDataAccess.h"

struct CountAt5A;

extern "C" {

extern const ShopSlotStep g_shopItemTabNeighbors[]; /* the tab reached from each tab of the item list */

void messageMainSetFlag(u8 value);
s32 inputConfirmPressed(void);
u32 FUN_00498408(Obj536044 *scene, u32 id);
s32 FUN_001ba3d0(u32 id); // declcheck: local (a forwarder: this caller passes the id and uses the count)
s32 FUN_0047fe44(u32 id);
void sendEvent100020E(void);
void sendEvent100020F(void);
void sendEvent1000210(void);
s32 inputIsQuestRepeatRight(void);
s32 FUN_004d0494(void);
void shopScreenRebuildForSelection(Obj536044 *scene, u32 mode);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
void FUN_0038b010(u8 value);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);
void obj04Finish(void);
void releaseEntriesB(CountAt5A *entries);
void menuOpenCommandList(Obj536044 *shop);
void buttonHelpSetText(const s8 *text, u32 color);

} /* extern "C" */

/* Tests whether the item can be traded: every item off the selling list (slot 8); on it, an item that
 * FUN_00498408 clears or of which more than one is held, unless FUN_0047fe44 refuses it. */
inline bool Obj536044::canSellItem(const EquipmentMenuItem *entry)
{
    u16 item = entry->id;
    return slot != 8 || ((FUN_00498408(this, item) == 0 || FUN_001ba3d0(item) > 1) && FUN_0047fe44(item) == 0);
}

/* Updates the shop item list: waits for the intro script, then handles buying the selected item, moving
 * between tabs, opening the menu or the command list, and the confirmation sounds. */
void Obj536044::FUN_00499fdc()
{
    if (substate != 0) {
        if (substate == 1 && scrRunOpcodesStub(controller) == 2) {
            changeState(5);
            buttonHelpSetText(NULL, 0xF4F4F4FF);
            messageMainSetFlag(1);
        }
        return;
    }
    messageMainSetFlag(0);
    scrRunOpcodesStub(controller);
    panelSetTarget(0, 0);
    u32 confirmed = FUN_004954e8((SubmenuWork *)this);

    shopDrawSelectedItem(this);
    if (slotInfo[slot].range.count > 0 && inputConfirmPressed() != 0) {
        confirmed = 1;
    }
    if (canSellItem(selectedItem()) && confirmed != 0) {
        sendEvent100020E();
        shopEnterQuantitySelection(this, 13);
        return;
    }
    if (inputIsQuestRepeatRight() != 0 || recordGetModeForId(nextItem) == 6) {
        tab = g_shopItemTabNeighbors[tab].next;
        shopScreenRebuildForSelection(this, 1);
        sendEvent1000210();
        return;
    }
    if (FUN_004d0494() != 0 || recordGetModeForId(previousItem) == 6) {
        tab = g_shopItemTabNeighbors[tab].previous;
        shopScreenRebuildForSelection(this, 1);
        sendEvent1000210();
        return;
    }
    if (inputIsQuestMenuPressed() != 0) {
        FUN_0038b010(0);
        sendEvent100020F();
        uiSpriteBankApplyPreset(&animation, 1);
        obj04Finish();
        if (restricted == 1) {
            menuCursors[2] = 1;
        } else {
            menuCursors[2] = 2;
        }
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
        return;
    }
    if (inputConfirmPressed() != 0) {
        sendEvent100020F();
    }
}
