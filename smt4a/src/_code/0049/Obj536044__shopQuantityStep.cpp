/* NON_MATCHING: about 70 lines once branch targets are set aside; the flow, the blocks, the frame and the
 * pool match except for the points below
 * (IV's FUN_003a4a60 is the same state and differs the same way):
 * - numericStepperSetup's stores (written in field order) are scheduled differently: retail stores
 *   the value/maximum pair first and then minimum/row with one stm;
 * - the two idle lines are written in substeps 6 and 9: retail keeps "shop_itembuy" in substep 6 and
 *   substep 9 jumps to it; this build keeps the copy of substep 9;
 * - schedules: the sign flip against panelSetTarget's second argument, and the category load
 *   in r1 before screenShowMessage and in substep 10. */
#include "classes/Obj536044.h"
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
s32 FUN_004d0584(void);
void obj04Finish(void);
void messageMainSetFlag(u8 value);
void sendEvent100020E(void);
void sendEvent100020F(void);
s32 inputIsQuestMenuPressed(void);
s32 FUN_0031d174(EquipmentMenuCursor *list); // declcheck: local (a forwarder: this caller uses the row it returns)
s32 btlRollClamped(u32 id, s32 divisor);
s32 FUN_001ba3d0(u32 id); // declcheck: local (a forwarder: this caller passes the id and uses the count)
u32 FUN_00498408(Obj536044 *scene, u32 id);
void FUN_00498de0(Obj536044 *scene);
void FUN_00498ff0(Obj536044 *scene);
u8 messageMainIsIdle(void);
const char *itemGetNameOrFallback(u32 id, s32 payload);
void scrSetStringSlot(u32 index, const char *value); // declcheck: local (declared in the model header)
s32 tableGroupFindEntryIndex(u32 table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void messageMainSetTargetFlags(u8 value);
u8 gameRecordExists(void);
void FUN_003720e4(u8 value);
u32 messageGetChoiceResult(void); // declcheck: local (declared in the item description's header)
u32 panelSetMode3(u32 value, u8 flag);
u8 panelStateIs0(void);
void FUN_0049cd18(const EquipmentMenuItem *item, s32 count, s32 charge);
void FUN_00496a0c(Obj536044 *scene, u32 mode);
void setListWindow(EquipmentMenuCursor *list, u32 first, u32 row);
void FUN_003df7c4(PlayerDataA *player);
void gameGlobalsQueueValues(PlayerDataA *player, u32 second);
void FUN_00372100(PlayerDataA *player, s32 second);
u32 sysPlayVoice(u32 id); // declcheck: local (declared in the large map's header)
void FUN_002f0384(s32 usePreset);

} /* extern "C" */

inline EquipmentMenuItem *Obj536044::selectedItem()
{
    EquipmentMenuCursor *list = &slotInfo[slot];
    EquipmentMenuItem *items = lists[slot].items;

    return &items[flaggedValueHolderGetTotal(&list->holder)];
}

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

    if (slot != 8) {
        price = -price;
    }
    panelSetTarget(price, 0);
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
        rectangleInitializeSelection(&panelRect, 320, 0, 32);
        substate = 1;
        sysPlaySe(0x87);
        quantityIndex = -1;
        quantityIndex = flaggedValueHolderGetTotal(&slotInfo[slot].holder);
        break;
    case 1: {
        UiSpriteState *slide = &animation.sprites[6];

        entryDispatchUpdate(&animation, 6);
        pointConvertToFloat((FloatPoint *)&panelRect, vec2GetXInt(slide), vec2GetYInt(slide));
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
        if (FUN_004d0584() != 0 && quantityIndex == index) {
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
                if (FUN_00498408(this, item->id) != 0) {
                    maximum--;
                }
            } else {
                maximum = btlRollClamped(item->id, shopGetEntryPrice(item));
            }
            numericStepperSetup(&quantity, maximum, 0, row);
            FUN_00493a7c(&quantity);
        }
        if (((slot == 0 || slot == 1) || (slot == 2 || slot == 3)) || ((slot == 4 || slot == 5) || slot == 6)) {
            FUN_00498de0(this);
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
            pointConvertToFloat((FloatPoint *)&panelRect, vec2GetXInt(slide), vec2GetYInt(slide));
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
        FUN_00359974(0x18, quantity.value, (u32)-1, 0);
        FUN_00359974(0x19, price, (u32)-1, 0);
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
                scrRunOpcodesStub(controller);
            } else if (slot == 7) {
                startScript("shop_itembuy");
                scrRunOpcodesStub(controller);
            }
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
            pointConvertToFloat((FloatPoint *)&panelRect, vec2GetXInt(slide), vec2GetYInt(slide));
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
            FUN_0049cd18(item, count, 1);
            substate = 9;
            if (slot == 8 && flagValueIsPositiveForward(item->id) == 0) {
                EquipmentMenuCursor *list = &slotInfo[slot];
                s32 row = FUN_0031d174(list);
                s32 first = FUN_002a482c(list);

                FUN_00496a0c(this, 0);
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
        if (slot != 7 && slot != 8 && FUN_00498408(this, selectedItem()->id) == 0) {
            startScript("shop_IsEquip");
            messageMainSetTargetFlags(1);
            substate = 10;
        } else {
            substate = 3;
            if (slot == 8) {
                startScript("shop_selloff");
                scrRunOpcodesStub(controller);
            } else if (slot == 7) {
                startScript("shop_itembuy");
                scrRunOpcodesStub(controller);
            }
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
        FUN_002f0384(1);
        previewReady = 1;
    }
}
