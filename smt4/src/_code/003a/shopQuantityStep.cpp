/* NON_MATCHING: 44 lines, the same rows and pool as retail; three register schedules remain
 * (Apocalypse's Obj536044::shopQuantityStep is the same state and differs the same way):
 * - numericStepperSetup: retail keeps the starting value in r0 and stores the value/maximum pair before
 *   it loads the minimum, so the stores stay in field order; this build holds the value in r1 and
 *   stores minimum/row first. (Naming the starting value in a local before the call gives retail's
 *   code; a temporary with one use, so it is not written.)
 * - the selected item's id before FUN_0029212c (substep 2) and in substep 10: retail loads the
 *   category into r1 and builds the two table addresses in r1-r3; this build uses r0-r2. */
#include "shop/ShopScreen.h"
#include "shop/shopMain.h"
#include "sys/FlagWord.h"
#include "classes/Obj55ca08.h"
#include "shard/Shard004A.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "script/scrScriptProcess.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/EquipmentSortPower.h"
#include "quest_center/qcMain.h"
#include "code/Code0023.h"
#include "code/Code0029.h"
#include "code/Code0029_Smt4.h"

extern "C" {

s32 uiAnimationAdvanceChannel(Scene3aSprites *sprites, s32 index);
void FUN_00233240(Scene3aSprites *sprites, u32 index);
void rectangleInitializeSelection(EmptyRange *range, s32 x, s32 y, s32 selection);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
void FUN_0022e538(NumericStepper *stepper);
s32 shopSlotGetPrice(const ShopSlot *item);
s32 aocItemGetPrice(const ShopSlot *item);
u32 messageTargetSetValue(u32 value, u8 flag);
void FUN_002937c8(ShopCategoryList *list);
void FUN_0029212c(int id);
s32 FUN_0027ee9c(void);
void messageMainFinishWindow(void);
void messageMainSetEnabled(u8 value);
s32 inputIsQuestMenuPressed(void);
s32 flaggedEntryGetValueByState(ShopCategoryList *list);
s32 btlRollClamped(u32 id, s32 divisor);
u32 playerSlotHoldsEntry(ShopScreen *screen, u32 id);
void equipmentPreviewUpdateSelection(ShopScreen *screen);
u8 sys43e188GetState(void);
const char *itemGetNameOrFallback(u32 id, s32 payload);
void textEncodeFontSlot(s32 slot, const u8 *text); // declcheck: local (declared in the sound system's header)
void FUN_0029ede8(s32 index, u32 first, u32 second, u32 third); // declcheck: local (declared in the compendium's header)
s32 tableGroupFindEntryIndex(void *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void messageMainSetTargetFlags(u8 value);
u8 gameGlobalsDataExists(void);
u32 messageMainGetChoiceResult(void);
u8 messageMainTargetIsClear(void);
void FUN_002306f8(const ShopSlot *item, s32 quantity, s32 settleMoney);
int FUN_0028e9d0(unsigned id); // declcheck: local (declared in the BGM channel's header)
void FUN_0022fcb8(ShopScreen *screen, u32 mode);
void panelSetScrollPosition(ShopCategoryList *list, u32 first, u32 row);
void playerRecalcStatsFromEquipment(PlayerDataIV *player);
void FUN_0029a0e8(PlayerDataIV *player);
void FUN_0029a0cc(PlayerDataIV *player);
void soundPlaySeUnpanned(unsigned int id);
void FUN_002996d8(s32 usePreset);

/* The item under the current category's cursor. */
static __inline ShopSlot *shopSelectedItem(ShopScreen *screen)
{
    ShopCategoryList *list = &screen->slotInfo[screen->slot];
    ShopSlot *slots = screen->lists[screen->slot].items;

    return &slots[flaggedValueHolderGetTotal(&list->holder)];
}

/* What the chosen quantity of the selected item costs (category 8, selling: what it pays). */
static __inline s32 shopQuantityPrice(ShopScreen *screen)
{
    ShopSlot *item = shopSelectedItem(screen);

    if (screen->slot == 8) {
        return aocItemGetPrice(item) * screen->quantity.value;
    } else {
        return shopSlotGetPrice(item) * screen->quantity.value;
    }
}

/* Shows the price as a change of the player's macca: negative when buying. */
static __inline void shopShowPriceChange(ShopScreen *screen)
{
    s32 price = shopQuantityPrice(screen);

    if (screen->slot == 8) {
        messageTargetSetValue(price, 0);
    } else {
        messageTargetSetValue(-price, 0);
    }
}

/* Starts entry `name` of the shop script. */
static __inline void shopStartScript(ShopScreen *screen, const char *name)
{
    scrScriptProcessStartEntry(screen->process, tableGroupFindEntryIndex(screen->scriptTable, name));
}

/* The shop's quantity state (phases 9-11): slides the quantity panel in, lets the player pick how
 * many of the selected item to buy or sell while the list stays live, asks for confirmation through
 * the shop script, settles the money and the inventory, and offers to equip a bought piece of
 * equipment. Leaves for the category's list phase (5, 6 or 7). */
void shopQuantityStep(ShopScreen *screen)
{
    bool previewPending = false;

    uiAnimationAdvanceChannel(&screen->animation, 2);
    uiAnimationAdvanceChannel(&screen->animation, 3);
    switch (screen->substep) {
    case 0:
        flagWordSet(&screen->flags, 0x1000);
        FUN_00233240(&screen->animation, 6);
        FUN_00233240(&screen->animation, 7);
        rectangleInitializeSelection(&screen->panel.rect, 320, 0, 43);
        screen->substep = 1;
        buttonHelpSetPreset(0x85);
        screen->quantityIndex = -1;
        screen->quantityIndex = flaggedValueHolderGetTotal(&screen->slotInfo[screen->slot].holder);
        break;
    case 1: {
        UiSpriteState *slide = &screen->animation.sprites[6];

        uiAnimationAdvanceChannel(&screen->animation, 6);
        pointConvertToFloat((FloatPoint *)&screen->panel.rect, vec2GetXInt(slide), vec2GetYInt(slide));
        if (uiSpriteGetCompletionState(slide) != 0) {
            FUN_0022e538(&screen->quantity);
            screen->substep = 2;
            shopShowPriceChange(screen);
        }
        break;
    }
    case 2: {
        numericStepperHandleInput(&screen->quantity);

        ShopCategoryList *list = &screen->slotInfo[screen->slot];
        s32 index = flaggedValueHolderGetTotal(&list->holder);
        s32 before = index;

        ((Obj55ca08 *)screen->touchSelection)->Obj55ca08::synchronize(list->data);
        screen->view->update(list);
        uiAnimationAdvanceChannel(&screen->animation, 2);
        uiAnimationAdvanceChannel(&screen->animation, 3);

        index = flaggedValueHolderGetTotal(&list->holder);
        if (before == index) {
            FUN_002937c8(list);
        }
        FUN_0029212c(shopSelectedItem(screen)->id);
        shopShowPriceChange(screen);
        if (FUN_0027ee9c() != 0 && screen->quantityIndex == index) {
            if (screen->quantity.value > 0) {
                if (screen->slot == 7 || screen->slot == 8) {
                    messageMainFinishWindow();
                    if (screen->phase == 11) {
                        messageMainSetEnabled(1);
                    }
                    ifTouchRegionRemove();
                    ifTouchRegionRemove();
                    screen->substep = 4;
                } else {
                    ifTouchRegionRemove();
                    ifTouchRegionRemove();
                    screen->substep = 5;
                }
                FUN_002328b4();
            } else {
                ifTouchRegionRemove();
                ifTouchRegionRemove();
                screen->substep = 3;
            }
        }
        if (inputIsQuestMenuPressed() != 0) {
            ifTouchRegionRemove();
            ifTouchRegionRemove();
            FUN_00232848();
            screen->substep = 3;
        } else if (screen->quantityIndex != index) {
            screen->quantityIndex = index;
            screen->quantity.value = 0;
            ifTouchRegionRemove();
            ifTouchRegionRemove();

            s32 row = flaggedEntryGetValueByState(&screen->slotInfo[screen->slot]);

            if (screen->slot == 7 || screen->slot == 8) {
                row += 1;
            } else {
                row += 2;
            }

            ShopSlot *item = shopSelectedItem(screen);
            s32 maximum;

            if (screen->slot == 8) {
                s32 held = itemGetOwnedCount(item->id);

                if (held < 0) {
                    held = 0;
                } else if (held > 99) {
                    held = 99;
                }
                maximum = held;
                if (playerSlotHoldsEntry(screen, item->id) != 0) {
                    maximum--;
                }
            } else {
                maximum = btlRollClamped(item->id, shopSlotGetPrice(item));
            }
            numericStepperSetup(&screen->quantity, maximum, 0, row);
            FUN_0022e538(&screen->quantity);
        }
        if (((screen->slot == 0 || screen->slot == 1) || (screen->slot == 2 || screen->slot == 3)) ||
            ((screen->slot == 4 || screen->slot == 5) || screen->slot == 6)) {
            equipmentPreviewUpdateSelection(screen);
            if (screen->preview.ready == 0) {
                previewPending = true;
            }
        }
        break;
    }
    case 3:
        if ((screen->flags & 0x1000) != 0) {
            UiSpriteState *slide = &screen->animation.sprites[7];

            uiAnimationAdvanceChannel(&screen->animation, 7);
            pointConvertToFloat((FloatPoint *)&screen->panel.rect, vec2GetXInt(slide), vec2GetYInt(slide));
            if (uiSpriteGetCompletionState(slide) == 0) {
                break;
            }
        }
        screen->quantityIndex = -1;
        buttonHelpSelectMenuPreset(screen);
        if (screen->phase == 11) {
            messageMainSetEnabled(0);
        }
        flagWordClear(&screen->flags, 0x1000);
        if (screen->slot == 8) {
            screen->phase = 7;
            screen->substep = 0;
        } else if (screen->slot == 7) {
            screen->phase = 6;
            screen->substep = 0;
        } else {
            screen->phase = 5;
            screen->substep = 0;
        }
        break;
    case 4:
        if (sys43e188GetState() != 0) {
            screen->substep = 5;
        }
        break;
    case 5: {
        u16 id = shopSelectedItem(screen)->id;
        s32 price = shopQuantityPrice(screen);

        textEncodeFontSlot(0, (const u8 *)itemGetNameOrFallback(id, 1));
        FUN_0029ede8(0x18, screen->quantity.value, (u32)-1, 0);
        FUN_0029ede8(0x19, price, (u32)-1, 0);
        if (screen->slot == 8) {
            shopStartScript(screen, "shop_SellConfirm");
        } else {
            shopStartScript(screen, "shop_BuyConfirm");
        }
        messageMainSetTargetFlags(1);
        if (gameGlobalsDataExists() != 0) {
            FUN_0022e500(1);
        }
        screen->substep = 6;
        break;
    }
    case 6:
        if (scrRunOpcodesStub(screen->process) != 2) {
            break;
        }
        if (messageMainGetChoiceResult() == 0) {
            screen->substep = 7;
            buttonHelpSetPreset(0x76);
        } else {
            if (gameGlobalsDataExists() != 0) {
                FUN_0022e500(0);
            }
            FUN_0022e538(&screen->quantity);
            screen->substep = 2;
            buttonHelpSetPreset(0x85);
            if (screen->slot == 8) {
                messageMainSetEnabled(0);
                shopStartScript(screen, "shop_selloff");
            } else if (screen->slot == 7) {
                shopStartScript(screen, "shop_itembuy");
            } else {
                break;
            }
            scrRunOpcodesStub(screen->process);
        }
        break;
    case 7: {
        s32 change = -shopQuantityPrice(screen);

        if (screen->slot == 8) {
            change = -change;
        }
        FUN_0029c43c(change, 0);
        screen->substep = 8;
        shopStartScript(screen, "shop_Decide");
        scrRunOpcodesStub(screen->process);
        screen->wait.frames = 0;
        break;
    }
    case 8:
        screen->wait.frames++;
        scrRunOpcodesStub(screen->process);
        if ((screen->flags & 0x1000) != 0) {
            UiSpriteState *slide = &screen->animation.sprites[7];

            uiAnimationAdvanceChannel(&screen->animation, 7);
            pointConvertToFloat((FloatPoint *)&screen->panel.rect, vec2GetXInt(slide), vec2GetYInt(slide));
            if (uiSpriteGetCompletionState(slide) != 0) {
                flagWordClear(&screen->flags, 0x1000);
            }
        }
        if (messageMainTargetIsClear() == 1 && screen->wait.frames >= 30) {
            ShopSlot *item = shopSelectedItem(screen);

            s32 quantity = screen->quantity.value;

            if (screen->slot == 8) {
                quantity = -quantity;
            }
            FUN_002306f8(item, quantity, 1);
            screen->substep = 9;
            if (screen->slot == 8 && FUN_0028e9d0(item->id) == 0) {
                ShopCategoryList *list = &screen->slotInfo[screen->slot];
                s32 row = flaggedEntryGetValueByState(list);
                s32 first = FUN_0029e924(list);

                FUN_0022fcb8(screen, 0);
                if (first > 0) {
                    first--;
                } else if (row != 0 && list->range.count <= row + first) {
                    row--;
                }
                panelSetScrollPosition(list, first, row);
            }
        }
        break;
    case 9:
        if (scrRunOpcodesStub(screen->process) != 2) {
            break;
        }
        if (screen->slot != 7 && screen->slot != 8 &&
            playerSlotHoldsEntry(screen, shopSelectedItem(screen)->id) == 0) {
            shopStartScript(screen, "shop_IsEquip");
            messageMainSetTargetFlags(1);
            screen->substep = 10;
        } else {
            screen->substep = 3;
            if (screen->slot == 8) {
                shopStartScript(screen, "shop_selloff");
            } else if (screen->slot == 7) {
                shopStartScript(screen, "shop_itembuy");
            } else {
                break;
            }
            scrRunOpcodesStub(screen->process);
        }
        break;
    case 10:
        if (scrRunOpcodesStub(screen->process) != 2) {
            break;
        }
        if (messageMainGetChoiceResult() == 0) {
            u16 id = shopSelectedItem(screen)->id;
            PlayerDataIV *player = gameGetPlayerData();

            switch (contentGetEntryKind(id)) {
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
            playerRecalcStatsFromEquipment(NULL);
            FUN_0029a0e8(player);
            FUN_0029a0cc(player);
            soundPlaySeUnpanned(0x100025f);
        }
        if (gameGlobalsDataExists() != 0) {
            FUN_0022e500(0);
        }
        screen->substep = 3;
        break;
    }
    if (gameGlobalsDataExists() != 0 && FUN_00299fc0() != 0 && screen->preview.ready == 0 && !previewPending) {
        FUN_002996d8(1);
        screen->preview.ready = 1;
    }
}

} /* extern "C" */
