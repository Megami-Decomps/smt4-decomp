#include "shop/ShopScreen.h"
#include "shop/ShopSlotNeighbors.h"
#include "shop/shopMain.h"
#include "code/Code0023.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern const ShopSlotStep g_shopItemTabNeighbors[]; /* the item tabs' neighbours (Apocalypse: g_shopItemTabNeighbors) */

void shopDrawSelectedItem(ShopScreen *screen);
void shopScreenRebuildForSelection(ShopScreen *screen, s32 flag);
void shopPlaySelectionChangeSound(void);
void shopMenuHandleCancel(ShopScreen *screen); // declcheck: local (the shared declaration takes its definition's own Scene view)
void FUN_00233240(Scene3aSprites *animation, s32 flag);
s32 inputIsQuestRepeatLeft(void);
s32 inputIsQuestRepeatRight(void);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 ifTouchGetSelectionModeForRegion(s32 region);

/* Per-frame update of the shop's item page: tab switching and the menu/cancel buttons. */
void shopMenuUpdateInput(ShopScreen *screen)
{
    shopApplyEntryAndCheckReady(screen);
    shopDrawSelectedItem(screen);
    if (inputIsQuestRepeatRight() || ifTouchGetSelectionModeForRegion(screen->nextRegion) == 6) {
        screen->tab = g_shopItemTabNeighbors[screen->tab].next;
        shopScreenRebuildForSelection(screen, 1);
        shopPlaySelectionChangeSound();
        return;
    }
    if (inputIsQuestRepeatLeft() || ifTouchGetSelectionModeForRegion(screen->previousRegion) == 6) {
        screen->tab = g_shopItemTabNeighbors[screen->tab].previous;
        shopScreenRebuildForSelection(screen, 1);
        shopPlaySelectionChangeSound();
        return;
    }
    if (inputIsQuestMenuPressed()) {
        FUN_00233240(&screen->animation, 1);
        FUN_00232848();
        screen->pageTransition.phase = 0x11;
        screen->pageTransition.substep = 0;
    } else if (inputIsQuestCancelPressed()) {
        FUN_002328b4();
        shopMenuHandleCancel(screen);
    }
}

} /* extern "C" */
