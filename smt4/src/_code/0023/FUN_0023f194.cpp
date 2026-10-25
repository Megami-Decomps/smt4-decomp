/* NON_MATCHING: recovered scene-flag accessor and notification argument; state 6 is materialized at the final transition rather than held in r6, and guard-return sharing differs. */
#include "battle/btlMain.h"
#include "gamedata/GameFlags.h"
#include "util/CalleeContracts.h"
struct BattleActionHistoryState;

extern "C" {

typedef struct BtlEndTask {
    s32 state;      /* 0x00 */
    u32 flags;      /* 0x04: bit 0 skips the follow-up job */
    u8 unk08[4];
    u32 unk0C;      /* 0x0C */
    u8 unk10[4];
    u32 unk14;      /* 0x14 */
    u32 job;        /* 0x18 */
} BtlEndTask;

extern BtlMain *g_btlMain;

BtlMainState *btlGetMainState(void);
void FUN_0033a780(BattleActionHistoryState *state);
void btlTalkBustUpDestroy(void);
void jobStopIfValidB(BtlMainState *state);
void jobStopIfValidA(BtlMainState *state);
void FUN_001e1874(BtlMainState *state);
void eventCommandDispatchPendingCleanup(void);
u32 gameFlagIsSet(u32 flag);
u32 FUN_002ef6b8(s32 kind, u32 arg);
s32 jobIsValid(u32 job);
s32 FUN_0023f074(BtlEndTask *task);
s32 eventFlagForScene(s32 scene);

/* Once both FUN_002c2a04 slots report 3, stops the battle's jobs and starts the follow-up job (flag 0x817). */
s32 FUN_0023f194(BtlEndTask *task)
{
    if (task->unk0C == 0 || task->unk14 == 0)
        return 0;
    if (FUN_002c2a04(0) != 3 || FUN_002c2a04(1) != 3)
        return 0;

    BtlMainState *state = btlGetMainState();
    FUN_0033a780(reinterpret_cast<BattleActionHistoryState *>(state));
    btlTalkBustUpDestroy();
    jobStopIfValidB(state);
    jobStopIfValidA(state);
    FUN_001e1874(state);
    if (g_btlMain != NULL)
        eventCommandDispatchPendingCleanup();

    if (!(task->flags & 1)) {
        u32 completionFlag = eventFlagForScene(23);
        task->job = FUN_002ef6b8(23, gameFlagIsSet(completionFlag));
        gameFlagSetValue(completionFlag, 1, 1);
        task->state = 5;
        if (jobIsValid(task->job))
            return 0;
    }
    task->state = 6;
    return FUN_0023f074(task);
}

} /* extern "C" */
