/* NON_MATCHING: action parameter contract recovered; task argument-address temporary allocation still differs. */
#include "battle/BattleUnitRecordState.h"
#include "battle/btlAction.h"
#include "battle/BattleActionScale.h"

// A local view of the battle's action job slots and signed ring cursor.
struct BattleActionRingView {
    u32 job;
    u8 unk04[8];
    u32 jobs[12];
    u8 unk3C[0xA4 - 0x3C];
    s32 current;
};
typedef char BattleActionRingOffsets[offsetof(BattleActionRingView, jobs) == 0xC &&
    offsetof(BattleActionRingView, current) == 0xA4 ? 1 : -1];

extern "C" {
extern BtlActionGlobals g_btlAction;
s32 jobIsValid(u32 job);
void FUN_004dcb40(BattleUnitRecordState *state, BtlMainStateA *battle,
                  u32 mode, s32 combatantIndex, BattleActionScale scale, u32 option);
u32 taskCreateDraw(const char *name, s32 priority, s32 startDelay, s32 endDelay,
                   void (*update)(u32), void (*destroy)(u32), void *owner, u32 parent);
void FUN_00298354(u32 job);
void jobPoolStopCurrent(u32 job);

// Advance the action ring, initialize its unit state and start the calculation job.
void FUN_002b4f28(BtlMainStateA *battle, u32 mode, s32 combatantIndex,
                  BattleActionScale scale, u32 option)
{
    BattleActionRingView *ring = reinterpret_cast<BattleActionRingView *>(battle);
    ring->current = (ring->current + 1) % 12;
    jobIsValid(ring->jobs[ring->current]);
    FUN_004dcb40(static_cast<BattleUnitRecordState *>(g_btlAction.data), battle,
                 mode, combatantIndex, scale, option);
    ring->jobs[ring->current] = taskCreateDraw("btlAction Calc", 3, 0, 0,
        FUN_00298354, jobPoolStopCurrent, battle, ring->job);
}
}
