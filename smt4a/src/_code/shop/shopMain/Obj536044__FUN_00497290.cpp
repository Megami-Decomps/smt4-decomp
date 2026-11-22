#include "classes/Obj536044.h"
#include "network/DataStore/DataStoreMain.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"
#include "code/Code0049_Smt4a.h"
#include "gamedata/GameDataAccess.h"
#include "camp/CampMenuEntry.h"

extern "C" {

void gameSetStatusCameraHeightMode(s32 mode);
s32 inputIsQuestRepeatRight(void);
s32 FUN_004d0494(void);
s32 inputIsQuestCancelPressed(void);
s32 inputIsQuestMenuPressed(void);
void FUN_0038b57c(s32 index);
void statusCameraRestore(s32 a);
void sendEvent1000210(void);
void sendEvent100020F(void);
void sendEvent100020E(void);
void FUN_004964e0(Obj536044 *shop, s32 a);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);
void FUN_0049af90(Obj536044 *shop);
void menuOpenCommandList(Obj536044 *shop);

extern ShopSlotNeighbors g_shopTabNeighbors; /* 0x588f28 */

} /* extern "C" */

/* Per-frame update of the shop's equipment pages: slot switching and the menu/cancel buttons. */
void Obj536044::FUN_00497290()
{
    if (slot != SHOP_SLOT_ITEMS) {
        if (objBStateAllowsAction() == 0) {
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
    }
    FUN_004954e8((SubmenuWork *)this);
    shopDrawSelectedItem(this);
    if (inputIsQuestRepeatRight() != 0 || recordGetModeForId(nextItem) == 6) {
        if (slot != SHOP_SLOT_ITEMS) {
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
            if (slot == 0 && (restricted != 0 || gameFlagIsSet(0x410) == 0)) {
                slot = g_shopTabNeighbors.restricted0Next;
            } else if (slot == 3 && (restricted != 0 || gameFlagIsSet(0x410) == 0)) {
                slot = g_shopTabNeighbors.restricted3Next;
            } else {
                slot = g_shopTabNeighbors.slot[slot].next;
            }
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
        if (slot != SHOP_SLOT_ITEMS) {
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
            if (slot == 0 && (restricted != 0 || gameFlagIsSet(0x410) == 0)) {
                slot = g_shopTabNeighbors.restricted0Previous;
            } else if (slot == 3 && (restricted != 0 || gameFlagIsSet(0x410) == 0)) {
                slot = g_shopTabNeighbors.restricted3Previous;
            } else {
                slot = g_shopTabNeighbors.slot[slot].previous;
            }
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
    }
    if (inputIsQuestMenuPressed() != 0) {
        if (slot == 3) {
            FUN_0038b57c(0);
        }
        if (slot == 4) {
            FUN_0038b57c(1);
        }
        if (slot == 5) {
            FUN_0038b57c(2);
        }
        uiSpriteBankApplyPreset(&animation, 1);
        sendEvent100020F();
        changeState(0x13);
        if (slot == SHOP_SLOT_ITEMS) {
            return;
        }
        FUN_0049af90(this);
    } else if (inputIsQuestCancelPressed() != 0) {
        sendEvent100020E();
        menuOpenCommandList(this);
    }
    if (slot == SHOP_SLOT_ITEMS) {
        return;
    }
    shopTrackSelectedItemPreview(this);
}
