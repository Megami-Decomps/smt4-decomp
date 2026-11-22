#include "classes/Obj536044.h"
#include "shop/ShopSelectedItem.h"
#include "shop/ShopBuyItem.h"
#include "network/DataStore/DataStoreMain.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"
#include "script/scrScriptProcess.h"
#include "ui/UiControl.h"
#include "code/Code0049_Smt4a.h"
#include "code/Code004d_Smt4a.h"
#include "gamedata/GameDataAccess.h"
#include "camp/CampMenuEntry.h"

struct CountAt5A;

extern "C" {

void gameSetStatusCameraHeightMode(s32 mode);
void messageChoiceShowCurrent(Obj536044 *shop);
s32 inputConfirmPressed(void);
s32 inputIsQuestRepeatRight(void);
s32 FUN_004d0494(void);
s32 inputIsQuestCancelPressed(void);
s32 inputIsQuestMenuPressed(void);
void FUN_0038b010(u8 value);
void FUN_0038b57c(s32 index);
void statusCameraRestore(s32 usePreset);
void sendEvent1000210(void);
void sendEvent100020F(void);
void sendEvent100020E(void);
void FUN_004964e0(Obj536044 *shop, s32 changed);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);
void FUN_0049af90(Obj536044 *shop);
void releaseEntriesB(CountAt5A *entries);
void menuOpenCommandList(Obj536044 *shop);
void shopStartSelectionScript(Obj536044 *shop, s32 kind);
s32 tableGroupFindEntryIndex(u32 table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void buttonHelpSetText(const s8 *text, u32 color);

extern const ShopSlotStep g_shopListSlotNeighbors[7]; /* the neighbours of the equipment slots while their list is shown */

} /* extern "C" */

/* Per-frame update of an equipment slot's list: buying the selected item, slot switching and the
 * menu/cancel buttons. */
void Obj536044::FUN_0049bd20()
{
    panelSetTarget(0, 0);
    if (objBStateAllowsAction() == 0) {
        FUN_004954e8((SubmenuWork *)this);
        return;
    }
    if (resource != NULL) {
        if (moriModelContentIsLoaded(resource) == 0) {
            return;
        }
        if (resource->body == NULL) {
            moriModelContentLoadBody(resource, 0);
            Obj557b18 *model = resource->body;
            handleRegistryRegisterObject(g_handleRegistry, model);
            controllerSetPositionXyz(model, 0.0f, -32000.0f, 0.0f);
        }
    }
    if (slot == 3) {
        gameSetStatusCameraHeightMode(1);
    } else if (slot == 5) {
        gameSetStatusCameraHeightMode(2);
    } else {
        gameSetStatusCameraHeightMode(0);
    }
    u32 confirmed = FUN_004954e8((SubmenuWork *)this);
    messageChoiceShowCurrent(this);
    if (slotInfo[slot].range.count > 0 && inputConfirmPressed() != 0) {
        confirmed = 1;
    }
    if (canBuyItem(selectedItem()) && confirmed != 0) {
        sendEvent100020E();
        shopEnterQuantitySelection(this, 11);
    } else if (inputIsQuestRepeatRight() != 0 || recordGetModeForId(nextItem) == 6) {
        if (mode == 0) {
            if (slot == SHOP_SLOT_ITEMS) {
                return;
            }
        } else if (mode == 1) {
            if (slot == SHOP_SLOT_ITEMS) {
                return;
            }
        }
        if (slot == 0 && (restricted != 0 || gameFlagIsSet(0x410) == 0) && mode != 1) {
            return;
        }
        if (slot == 3 || slot == 4 || slot == 5 || g_shopListSlotNeighbors[slot].next == 3 || g_shopListSlotNeighbors[slot].next == 4 ||
            g_shopListSlotNeighbors[slot].next == 5) {
            if (slot == 3) {
                FUN_0038b57c(0);
            }
            if (slot == 4) {
                FUN_0038b57c(1);
            }
            if (slot == 5) {
                FUN_0038b57c(2);
            }
            statusCameraRestore(0);
            previewing = 0;
            previewReady = 0;
        }
        if (slot != 0 || (restricted == 0 && gameFlagIsSet(0x410) != 0)) {
            slot = g_shopListSlotNeighbors[slot].next;
            sendEvent1000210();
            FUN_004964e0(this, 1);
            if (slot == 3) {
                gameSetStatusCameraHeightMode(1);
            } else if (slot == 5) {
                gameSetStatusCameraHeightMode(2);
            } else {
                gameSetStatusCameraHeightMode(0);
            }
        }
    } else if (FUN_004d0494() != 0 || recordGetModeForId(previousItem) == 6) {
        if (mode == 0) {
            if (slot == SHOP_SLOT_ITEMS) {
                return;
            }
        } else if (mode == 1) {
            if (slot == SHOP_SLOT_ITEMS) {
                return;
            }
        }
        if (slot == 0 && (restricted != 0 || gameFlagIsSet(0x410) == 0) && mode != 1) {
            return;
        }
        if (slot == 3 || slot == 4 || slot == 5 || g_shopListSlotNeighbors[slot].next == 3 || g_shopListSlotNeighbors[slot].next == 4 ||
            g_shopListSlotNeighbors[slot].next == 5) {
            if (slot == 3) {
                FUN_0038b57c(0);
            }
            if (slot == 4) {
                FUN_0038b57c(1);
            }
            if (slot == 5) {
                FUN_0038b57c(2);
            }
            statusCameraRestore(0);
            previewing = 0;
        }
        if (slot != 0 || (restricted == 0 && gameFlagIsSet(0x410) != 0)) {
            slot = g_shopListSlotNeighbors[slot].previous;
            sendEvent1000210();
            FUN_004964e0(this, 1);
            if (slot == 3) {
                gameSetStatusCameraHeightMode(1);
            } else if (slot == 5) {
                gameSetStatusCameraHeightMode(2);
            } else {
                gameSetStatusCameraHeightMode(0);
            }
        }
    } else if (inputIsQuestMenuPressed() != 0 && previewing != 0) {
        FUN_0038b010(0);
        uiSpriteBankApplyPreset(&animation, 1);
        sendEvent100020F();
        FUN_0049af90(this);
        releaseEntriesB((CountAt5A *)view);
        releaseEntriesA((CountAt30 *)touchSelection);
        for (s32 i = 0; i < touchRegionCount; i++) {
            ifTouchRegionRemove();
        }
        touchRegionCount = 0;
        nextItem = -1;
        previousItem = -1;
        changeState(5);
        switch (slot) {
        case 0:
        case 1:
        case 2:
            cleared[2] = 0;
            cleared[1] = 0;
            if (slot == 1) {
                cleared[1] = 1;
            } else if (slot == 2) {
                cleared[1] = 2;
            }
            clearedFlags[1] = 1;
            if (visibleCount > 1) {
                scrScriptProcessStartEntry(controller, tableGroupFindEntryIndex(tableGroup, "shop_in2"));
                scrRunOpcodesStub(controller);
                shopStartSelectionScript(this, 1);
                substate = 3;
                buttonHelpSetText(NULL, 0xF4F4F4FF);
            }
            clearedFlags[1] = 0;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            cleared[0] = 0;
            cleared[2] = 1;
            if (slot == 4) {
                cleared[0] = 1;
            } else if (slot == 5) {
                cleared[0] = 2;
            } else if (slot == 6) {
                cleared[0] = 3;
            }
            clearedFlags[0] = 1;
            if (visibleCount > 1) {
                scrScriptProcessStartEntry(controller, tableGroupFindEntryIndex(tableGroup, "shop_in2"));
                scrRunOpcodesStub(controller);
                shopStartSelectionScript(this, 2);
                substate = 4;
                buttonHelpSetText(NULL, 0xF4F4F4FF);
            }
            clearedFlags[0] = 0;
            break;
        }
    } else if (inputIsQuestCancelPressed() != 0) {
        sendEvent100020E();
        menuOpenCommandList(this);
    }
    shopTrackSelectedItemPreview(this);
}
