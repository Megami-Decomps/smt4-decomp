/* NON_MATCHING: 64-bit mask loads/clears combine into LDM/LDRD/STRD differently from retail's word operations. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match6_BattleCamera.h"
#include "bible/bibleAnalyze.h"

struct BattleActionStep {
    u32 state;        /* 0x00 */
    u32 flags;        /* 0x04 */
    u8 unk08[0xc];
    u32 process;      /* 0x14 */
    u8 unk18[0x10];
    s32 ticks;        /* 0x28 */
};
struct BattleActionEvent {
    u8 unk00[0x20];
    u64 pendingMask;  /* 0x20 */
    u64 uiMask;       /* 0x28 */
};

extern "C" {
extern BattleActionEvent g_btlEvent;
extern BattleActionCamera *g_btlCamera;
extern void *g_btlUiBlock;
extern void *g_btlAux;
s32 FUN_004f2708(BattleActionCamera *camera, BtlMainStateA *battle, s32 flags);
void btlQueueDuplicateSuppressedAction(s32, s32, s32);
void FUN_004feecc(s32, s32);
s32 scrRunOpcodesStub(u32 process);
void FUN_003756c8(s32 mode);
void btlStageResetAndClearCameraFlag(void *context);

// Apply pending action camera/UI changes once, then clear their masks when the process ends.
u32 btlActionStepFinishPendingChanges(BattleActionStep *step, BtlMainStateA *battle)
{
    if ((battle->stateFlags64.bits & g_btlEvent.pendingMask) != 0 && (step->flags & 1) == 0) {
        if (g_btlCamera->target >= 0 && FUN_004f2708(g_btlCamera, battle, 1)) {
            btlQueueDuplicateSuppressedAction(0, 0, 0);
        }
        FUN_004feecc(1, 0);
        step->flags |= 1;
    }
    if (scrRunOpcodesStub(step->process) == 2) {
        if ((g_btlEvent.pendingMask & battle->stateFlags64.bits) != 0) {
            FUN_003756c8(0);
            if ((battle->stateFlags64.bits & g_btlEvent.uiMask) != 0) {
                FUN_004aa8b0(g_btlUiBlock, 0);
                battle->stateFlags64.bits &= ~g_btlEvent.uiMask;
            }
        }
        step->state = 0;
        battle->stateFlags64.bits &= ~g_btlEvent.pendingMask;
        btlStageResetAndClearCameraFlag(g_btlAux);
    }
    if (step->ticks < 0xffff) {
        ++step->ticks;
    }
    return 0;
}
}
