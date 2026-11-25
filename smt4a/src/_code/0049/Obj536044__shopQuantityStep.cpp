/* NON_MATCHING: 44 lines, the same rows and pool as retail; three register schedules remain
 * (IV's shopQuantityStep is the same state and differs the same way):
 * - numericStepperSetup: retail keeps the starting value in r0 and stores the value/maximum pair before
 *   it loads the minimum, so the stores stay in field order; this build holds the value in r1 and
 *   stores minimum/row first. (Naming the starting value in a local before the call gives retail's
 *   code; a temporary with one use, so it is not written.)
 * - the selected item's id before screenShowMessage (substep 2) and in substep 10: retail loads the
 *   category into r1 and builds the two table addresses in r1-r3; this build uses r0-r2. */
#include "shop/ShopSelectedItem.h"
#include "sys/FlagWord.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "script/scrScriptProcess.h"
#include "shard/Shard004A.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/FlagValueIsPositive.h"
#include "addon/AocEntryKind.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code002a.h"
#include "code/Code0035.h"
#include "script/ScriptEntry.h"

extern "C" {

u32 entryDispatchUpdate(SpritePresetBank *sprites, s32 kind); // declcheck: local (the scene's own sprite set)
void uiSpriteBankApplyPreset(SpritePresetBank *sprites, u32 preset);
void rectangleInitializeSelection(EmptyRange *range, s32 x, s32 y, s32 selection);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
void sysPlaySe(u32 id);
void FUN_00493a7c(NumericStepper *stepper);
s32 shopGetEntryPrice(const EquipmentMenuItem *item); // declcheck: local (the scene's own item type)
s32 aocItemGetPrice(const EquipmentMenuItem *item); // declcheck: local (the scene's own item type)
void menuSynchronizeFlaggedSelection(void *selection, EquipmentMenuCursor *list);
void FUN_002c2c80(EquipmentMenuCursor *list);
void screenShowMessage(s32 id);
s32 inputConfirmPressed(void);
void obj04Finish(void);
void messageMainSetFlag(u8 value);
void sendEvent100020E(void);
void sendEvent100020F(void);
s32 inputIsQuestMenuPressed(void);
s32 FUN_0031d174(EquipmentMenuCursor *list); // declcheck: local (a forwarder: this caller uses the row it returns)
s32 shopAffordableCount(u32 id, s32 divisor); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 FUN_001ba3d0(u32 id); // declcheck: local (a forwarder: this caller passes the id and uses the count)
u32 playerSlotHoldsEntry(Obj536044 *scene, u32 id);
void FUN_00498ff0(Obj536044 *scene);
u8 messageMainIsIdle(void);
const char *itemGetNameOrFallback(u32 id, s32 payload);
void scrSetStringSlot(u32 index, const char *value); // declcheck: local (declared in the model header)
s32 tableGroupFindEntryIndex(u32 table, const char *name);
void messageMainSetTargetFlags(u8 value);
u8 gameRecordExists(void);
void FUN_003720e4(u8 value);
u32 messageGetChoiceResult(void); // declcheck: local (declared in the item description's header)
u32 panelSetMode3(u32 value, u8 flag);
u8 panelStateIs0(void);
void inventoryApplyTransaction(const EquipmentMenuItem *item, s32 count, s32 charge);
void shopScreenRebuildForSelection(Obj536044 *scene, u32 mode);
void setListWindow(EquipmentMenuCursor *list, u32 first, u32 row);
void FUN_003df7c4(PlayerDataA *player);
void gameGlobalsQueueValues(PlayerDataA *player, u32 second);
void FUN_00372100(PlayerDataA *player, s32 second);
u32 sysPlayVoice(u32 id); // declcheck: local (declared in the large map's header)
void statusCameraRestore(s32 usePreset);

} /* extern "C" */

inline s32 Obj536044::quantityPrice()
{
    EquipmentMenuItem *item = selectedItem();

    if (slot == 8) {
        return aocItemGetPrice(item) * quantity.value;
    } else {
        return shopGetEntryPrice(item) * quantity.value;
    }
}

inline void Obj536044::showPriceChange()
{
    s32 price = quantityPrice();

    if (slot == 8) {
        panelSetTarget(price, 0);
    } else {
        panelSetTarget(-price, 0);
    }
}

inline void Obj536044::startScript(const char *name)
{
    scrScriptProcessStartEntry(controller, tableGroupFindEntryIndex(tableGroup, name));
}

/* The shop's quantity state: slides the quantity panel in, lets the player pick how many of the
 * selected item to buy or sell while the list stays live, asks for confirmation through the shop
 * script, settles the money and the inventory, and offers to equip a bought piece of equipment.
 * Leaves for the category's list state (7, 8 or 9). IV's FUN_003a4a60 is the same state. */
void Obj536044::shopQuantityStep()
{
    bool previewPending = false;

    entryDispatchUpdate(&animation, 2);
    entryDispatchUpdate(&animation, 12);
    switch (substate) {
    case 0:
        flagWordSet(&flags, 0x1000);
        uiSpriteBankApplyPreset(&animation, 6);
        uiSpriteBankApplyPreset(&animation, 7);
        rectangleInitializeSelection(&quantityPanel.rect, 320, 0, 32);
        substate = 1;
        sysPlaySe(0x87);
        quantityIndex = -1;
        quantityIndex = flaggedValueHolderGetTotal(&slotInfo[slot].holder);
        break;
    case 1: {
        UiSpriteState *slide = &animation.sprites[6];

        entryDispatchUpdate(&animation, 6);
        pointConvertToFloat((FloatPoint *)&quantityPanel.rect, vec2GetXInt(slide), vec2GetYInt(slide));
        if (uiSpriteGetCompletionState(slide) != 0) {
            FUN_00493a7c(&quantity);
            substate = 2;
            showPriceChange();
        }
        break;
    }
    case 2: {
        numericStepperHandleInput(&quantity);

        EquipmentMenuCursor *list = &slotInfo[slot];
        s32 index = flaggedValueHolderGetTotal(&list->holder);
        s32 before = index;

        menuSynchronizeFlaggedSelection(touchSelection, list);
        view->update(list);
        entryDispatchUpdate(&animation, 2);
        entryDispatchUpdate(&animation, 12);

        index = flaggedValueHolderGetTotal(&list->holder);
        if (before == index) {
            FUN_002c2c80(list);
        }
        screenShowMessage(selectedItem()->id);
        showPriceChange();
        if (inputConfirmPressed() != 0 && quantityIndex == index) {
            if (quantity.value > 0) {
                if (slot == 7 || slot == 8) {
                    obj04Finish();
                    if (state == 13) {
                        messageMainSetFlag(1);
                    }
                    ifTouchRegionRemove();
                    ifTouchRegionRemove();
                    substate = 4;
                } else {
                    ifTouchRegionRemove();
                    ifTouchRegionRemove();
                    substate = 5;
                }
                sendEvent100020E();
            } else {
                ifTouchRegionRemove();
                ifTouchRegionRemove();
                substate = 3;
            }
        }
        if (inputIsQuestMenuPressed() != 0) {
            ifTouchRegionRemove();
            ifTouchRegionRemove();
            sendEvent100020F();
            substate = 3;
        } else if (quantityIndex != index) {
            quantityIndex = index;
            quantity.value = 0;
            ifTouchRegionRemove();
            ifTouchRegionRemove();

            s32 row = FUN_0031d174(&slotInfo[slot]);

            if (slot == 7 || slot == 8) {
                row += 1;
            } else {
                row += 2;
            }

            EquipmentMenuItem *item = selectedItem();
            s32 maximum;

            if (slot == 8) {
                s32 held = FUN_001ba3d0(item->id);

                if (held < 0) {
                    held = 0;
                } else if (held > 99) {
                    held = 99;
                }
                maximum = held;
                if (playerSlotHoldsEntry(this, item->id) != 0) {
                    maximum--;
                }
            } else {
                maximum = shopAffordableCount(item->id, shopGetEntryPrice(item));
            }
            numericStepperSetup(&quantity, maximum, 0, row);
            FUN_00493a7c(&quantity);
        }
        if (((slot == 0 || slot == 1) || (slot == 2 || slot == 3)) || ((slot == 4 || slot == 5) || slot == 6)) {
            shopTrackSelectedItemPreview(this);
            if (previewReady == 0) {
                previewPending = true;
            }
        }
        break;
    }
    case 3:
        if ((flags & 0x1000) != 0) {
            UiSpriteState *slide = &animation.sprites[7];

            entryDispatchUpdate(&animation, 7);
            pointConvertToFloat((FloatPoint *)&quantityPanel.rect, vec2GetXInt(slide), vec2GetYInt(slide));
            if (uiSpriteGetCompletionState(slide) == 0) {
                break;
            }
        }
        quantityIndex = -1;
        FUN_00498ff0(this);
        if (state == 13) {
            messageMainSetFlag(0);
        }
        flagWordClear(&flags, 0x1000);
        if (slot == 8) {
            changeState(9);
        } else if (slot == 7) {
            changeState(8);
        } else {
            changeState(7);
        }
        break;
    case 4:
        if (messageMainIsIdle() != 0) {
            substate = 5;
        }
        break;
    case 5: {
        u16 id = selectedItem()->id;
        s32 price = quantityPrice();

        scrSetStringSlot(0, itemGetNameOrFallback(id, 1));
        entryTableResetAndInit(0x18, quantity.value, (u32)-1, 0);
        entryTableResetAndInit(0x19, price, (u32)-1, 0);
        if (slot == 8) {
            startScript("shop_SellConfirm");
        } else {
            startScript("shop_BuyConfirm");
        }
        messageMainSetTargetFlags(1);
        if (gameRecordExists() != 0) {
            FUN_003720e4(1);
        }
        substate = 6;
        break;
    }
    case 6:
        if (scrRunOpcodesStub(controller) != 2) {
            break;
        }
        if (messageGetChoiceResult() == 0) {
            substate = 7;
            sysPlaySe(0x78);
        } else {
            if (gameRecordExists() != 0) {
                FUN_003720e4(0);
            }
            FUN_00493a7c(&quantity);
            substate = 2;
            sysPlaySe(0x87);
            if (slot == 8) {
                messageMainSetFlag(0);
                startScript("shop_selloff");
            } else if (slot == 7) {
                startScript("shop_itembuy");
            } else {
                break;
            }
            scrRunOpcodesStub(controller);
        }
        break;
    case 7: {
        s32 change = -quantityPrice();

        if (slot == 8) {
            change = -change;
        }
        panelSetMode3(change, 0);
        substate = 8;
        startScript("shop_Decide");
        scrRunOpcodesStub(controller);
        timer = 0;
        break;
    }
    case 8:
        timer++;
        scrRunOpcodesStub(controller);
        if ((flags & 0x1000) != 0) {
            UiSpriteState *slide = &animation.sprites[7];

            entryDispatchUpdate(&animation, 7);
            pointConvertToFloat((FloatPoint *)&quantityPanel.rect, vec2GetXInt(slide), vec2GetYInt(slide));
            if (uiSpriteGetCompletionState(slide) != 0) {
                flagWordClear(&flags, 0x1000);
            }
        }
        if (panelStateIs0() == 1 && timer >= 30) {
            EquipmentMenuItem *item = selectedItem();
            s32 count = quantity.value;

            if (slot == 8) {
                count = -count;
            }
            inventoryApplyTransaction(item, count, 1);
            substate = 9;
            if (slot == 8 && flagValueIsPositiveForward(item->id) == 0) {
                EquipmentMenuCursor *list = &slotInfo[slot];
                s32 row = FUN_0031d174(list);
                s32 first = resourceDispatchTaggedOperation(list);

                shopScreenRebuildForSelection(this, 0);
                if (first > 0) {
                    first--;
                } else if (row != 0 && list->range.count <= row + first) {
                    row--;
                }
                setListWindow(list, first, row);
            }
        }
        break;
    case 9:
        if (scrRunOpcodesStub(controller) != 2) {
            break;
        }
        if (slot != 7 && slot != 8 && playerSlotHoldsEntry(this, selectedItem()->id) == 0) {
            startScript("shop_IsEquip");
            messageMainSetTargetFlags(1);
            substate = 10;
        } else {
            substate = 3;
            if (slot == 8) {
                startScript("shop_selloff");
            } else if (slot == 7) {
                startScript("shop_itembuy");
            } else {
                break;
            }
            scrRunOpcodesStub(controller);
        }
        break;
    case 10:
        if (scrRunOpcodesStub(controller) != 2) {
            break;
        }
        if (messageGetChoiceResult() == 0) {
            u16 id = selectedItem()->id;
            PlayerDataA *player = gameGetPlayerData();

            switch (aocEntryGetKindForward(id)) {
            case 2:
                player->equipment[0] = id;
                break;
            case 3:
                player->equipment[1] = id;
                break;
            case 4:
                player->equipment[3] = id;
                break;
            case 5:
                player->equipment[4] = id;
                break;
            case 6:
                player->equipment[5] = id;
                break;
            case 7:
                player->equipment[6] = id;
                break;
            case 8:
                player->equipment[2] = id;
                break;
            }
            FUN_003df7c4(NULL);
            gameGlobalsQueueValues(player, 0);
            FUN_00372100(player, 0);
            sysPlayVoice(0x10000cc);
        }
        if (gameRecordExists() != 0) {
            FUN_003720e4(0);
        }
        substate = 3;
        break;
    }
    if (gameRecordExists() != 0 && objBStateAllowsAction() != 0 && previewReady == 0 && !previewPending) {
        statusCameraRestore(1);
        previewReady = 1;
    }
}
