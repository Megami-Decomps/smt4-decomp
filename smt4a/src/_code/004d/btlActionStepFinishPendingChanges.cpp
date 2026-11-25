#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match6_BattleCamera.h"
#include "bible/bibleAnalyze.h"
#include "battle/btlEditor.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BattleEventAction.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern BattleActionCamera *g_btlCamera;
extern void *g_btlAux;
s32 btlCameraCanAdvance(BattleActionCamera *camera, BtlMainStateA *battle, s32 flags);
void btlQueueDuplicateSuppressedAction(s32, s32, s32);
void btlPlayMenuConfirmSe(s32 mode);
void btlStageResetAndClearCameraFlag(void *context);

/* Applies pending action camera/UI changes once, then clears their masks when the script ends. */
u32 btlActionStepFinishPendingChanges(BattleEventAssetLoadState *step, BtlMainStateA *battle)
{
    if ((battle->stateFlags64.bits & g_btlEvent.pendingMask) != 0 && (step->flags & 1) == 0) {
        if (g_btlCamera->target >= 0 && btlCameraCanAdvance(g_btlCamera, battle, 1)) {
            btlQueueDuplicateSuppressedAction(0, 0, 0);
        }
        FUN_004feecc(1, 0);
        step->flags |= 1;
    }
    if (scrRunOpcodesStub(step->scriptProcess) == 2) {
        if ((battle->stateFlags64.bits & g_btlEvent.pendingMask) != 0) {
            btlPlayMenuConfirmSe(0);
            if ((battle->stateFlags64.bits & g_btlEvent.uiMask) != 0) {
                btlUiObjCApplyVisibility(g_btlUiBlock, 0);
                battle->stateFlags64.bits &= ~g_btlEvent.uiMask;
            }
        }
        step->state = 0;
        battle->stateFlags64.bits &= ~g_btlEvent.pendingMask;
        btlStageResetAndClearCameraFlag(g_btlAux);
    }
    if (step->frames < 0xffff) {
        ++step->frames;
    }
    return 0;
}
} /* extern "C" */
