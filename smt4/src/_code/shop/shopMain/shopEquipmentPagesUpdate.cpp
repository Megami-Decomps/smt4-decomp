#include "shard/S2Scene3a.h"
#include "shop/ShopSlotNeighbors.h"
#include "shop/shopMain.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0023.h"
#include "code/Code0029_Smt4.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern const ShopSlotNeighbors g_shopTabNeighbors; /* the equipment slots' neighbours (Apocalypse: g_shopTabNeighbors) */

s32 modelHasLoadedAttachment(const AsdMdlObject *object);
void nodeSetTranslation3f(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void gameSetStatusCameraHeightMode(s32 mode);
void shopDrawSelectedItem(Scene3a *scene); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 inputIsQuestRepeatRight(void);
s32 inputIsQuestRepeatLeft(void);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 ifTouchGetSelectionModeForRegion(s32 region);
void FUN_002992e0(s32 mode);
void statusCameraRestore(s32 usePreset);
void shopPlaySelectionChangeSound(void);
void FUN_002302d8(Scene3a *scene, s32 refreshHelp);
void FUN_00233240(Scene3aSprites *animation, u32 index);
void beginStatusPanelClose(void);
void messageWindowStartTimer(s32 open);
void shopMenuHandleCancel(Scene3a *scene); // declcheck: local (the shared declaration takes its definition's own Scene view)
void equipmentPreviewUpdateSelection(Scene3a *scene);

/* Per-frame update of the shop's equipment pages: slot switching and the menu/cancel buttons. */
void shopEquipmentPagesUpdate(Scene3a *scene)
{
    if (scene->slot != SHOP_SLOT_ITEMS) {
        if (FUN_00299fc0() == 0) {
            return;
        }
        if (scene->modelManager != NULL) {
            if (modelHasLoadedAttachment(scene->modelManager) == 0) {
                return;
            }
            if (scene->modelManager->node->sceneGroup < 0) {
                lightOwnerRegister(scene->modelManager, 1);
                nodeSetTranslation3f(scene->modelManager->node, 0, 0.0f, -32000.0f, 0.0f);
            }
        }
        if (scene->slot == 3) {
            gameSetStatusCameraHeightMode(1);
        } else if (scene->slot == 5) {
            gameSetStatusCameraHeightMode(2);
        } else {
            gameSetStatusCameraHeightMode(0);
        }
    }
    shopApplyEntryAndCheckReady(scene);
    shopDrawSelectedItem(scene);
    if (inputIsQuestRepeatRight() != 0 || ifTouchGetSelectionModeForRegion(scene->nextRegion) == 6) {
        if (scene->slot != SHOP_SLOT_ITEMS) {
            if (scene->slot == 3) {
                FUN_002992e0(0);
            }
            if (scene->slot == 4) {
                FUN_002992e0(1);
            }
            if (scene->slot == 5) {
                FUN_002992e0(2);
            }
            statusCameraRestore(0);
            scene->preview.requested = 0;
            if (scene->slot == 0 &&
                (scene->help.forceOverride != 0 || scene->help.context == 8 || gameFlagIsSet(0x410) == 0)) {
                scene->slot = g_shopTabNeighbors.restricted0Next;
            } else if (scene->slot == 3 &&
                       (scene->help.forceOverride != 0 || scene->help.context == 8 || gameFlagIsSet(0x410) == 0)) {
                scene->slot = g_shopTabNeighbors.restricted3Next;
            } else {
                scene->slot = g_shopTabNeighbors.slot[scene->slot].next;
            }
            shopPlaySelectionChangeSound();
            FUN_002302d8(scene, 1);
            if (scene->slot == 3) {
                gameSetStatusCameraHeightMode(1);
            } else if (scene->slot == 5) {
                gameSetStatusCameraHeightMode(2);
            } else {
                gameSetStatusCameraHeightMode(0);
            }
        }
    } else if (inputIsQuestRepeatLeft() != 0 || ifTouchGetSelectionModeForRegion(scene->previousRegion) == 6) {
        if (scene->slot != SHOP_SLOT_ITEMS) {
            if (scene->slot == 3) {
                FUN_002992e0(0);
            }
            if (scene->slot == 4) {
                FUN_002992e0(1);
            }
            if (scene->slot == 5) {
                FUN_002992e0(2);
            }
            statusCameraRestore(0);
            scene->preview.requested = 0;
            if (scene->slot == 0 &&
                (scene->help.forceOverride != 0 || scene->help.context == 8 || gameFlagIsSet(0x410) == 0)) {
                scene->slot = g_shopTabNeighbors.restricted0Previous;
            } else if (scene->slot == 3 &&
                       (scene->help.forceOverride != 0 || scene->help.context == 8 || gameFlagIsSet(0x410) == 0)) {
                scene->slot = g_shopTabNeighbors.restricted3Previous;
            } else {
                scene->slot = g_shopTabNeighbors.slot[scene->slot].previous;
            }
            shopPlaySelectionChangeSound();
            FUN_002302d8(scene, 1);
            if (scene->slot == 3) {
                gameSetStatusCameraHeightMode(1);
            } else if (scene->slot == 5) {
                gameSetStatusCameraHeightMode(2);
            } else {
                gameSetStatusCameraHeightMode(0);
            }
        }
    }
    if (inputIsQuestMenuPressed() != 0) {
        if (scene->slot == 3) {
            FUN_002992e0(0);
        }
        if (scene->slot == 4) {
            FUN_002992e0(1);
        }
        if (scene->slot == 5) {
            FUN_002992e0(2);
        }
        FUN_00233240(&scene->animation, 1);
        FUN_00232848();
        scene->pageTransition.phase = 17;
        scene->pageTransition.substep = 0;
        if (scene->slot == SHOP_SLOT_ITEMS) {
            return;
        }
        if (scene->state != SCENE3A_STATE_STOP) {
            if (scene->state == SCENE3A_STATE_START) {
                scene->state = SCENE3A_STATE_FINISH;
            } else {
                beginStatusPanelClose();
                scene->state = SCENE3A_STATE_STOP;
                messageWindowStartTimer(0);
                if (scene->modelManager != NULL) {
                    asdMdlManagerDestroy(scene->modelManager);
                    scene->modelManager = NULL;
                }
            }
        }
    } else if (inputIsQuestCancelPressed() != 0) {
        FUN_002328b4();
        shopMenuHandleCancel(scene);
    }
    if (scene->slot == SHOP_SLOT_ITEMS) {
        return;
    }
    equipmentPreviewUpdateSelection(scene);
}

} /* extern "C" */
