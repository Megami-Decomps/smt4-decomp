#include "battle/BtlMainAccess.h"
#include "battle/BtlGameOverTransition.h"
#include "battle/btlMain.h"
#include "gamedata/GameFlags.h"
#include "code/Code002c.h"
#include "battle/BtlGlobals.h"
#include "code/Code0013.h"
struct BattleActionHistoryState;

extern "C" {

void FUN_0033a780(BattleActionHistoryState *state);
void btlTalkBustUpDestroy(void);
void jobStopIfValidB(BtlMainState *state);
void jobStopIfValidA(BtlMainState *state);
void btlUiSessionDestroy(BtlMainState *state);
void eventCommandDispatchPendingCleanup(void);
u32 gameFlagIsSet(u32 flag);
u32 FUN_002ef6b8(s32 kind, u32 arg);
s32 jobIsValid(u32 job);
s32 eventFlagForScene(s32 scene);

/* Once both pairedAvailabilityGetState slots report 3, stops the battle's jobs and starts the follow-up job (flag 0x817). */
s32 FUN_0023f194(BtlGameOver *task)
{
    if (task->dataA == NULL) {
        return 0;
    }
    if (task->dataB == NULL) {
        return 0;
    }
    {
        if (pairedAvailabilityGetState(0) == 3 && pairedAvailabilityGetState(1) == 3) {
            BtlMainState *state = btlGetMainState();
            FUN_0033a780(reinterpret_cast<BattleActionHistoryState *>(state));
            btlTalkBustUpDestroy();
            jobStopIfValidB(state);
            jobStopIfValidA(state);
            btlUiSessionDestroy(state);
            if (g_btlMain != NULL)
                eventCommandDispatchPendingCleanup();
            if (!(task->flags & 1)) {
                u32 completionFlag = eventFlagForScene(23);
                task->followupJob = FUN_002ef6b8(23, gameFlagIsSet(completionFlag));
                gameFlagSetValue(completionFlag, 1, 1);
                task->state = 5;
                if (jobIsValid(task->followupJob) == 0) {
                    task->state = 6;
                    return FUN_0023f074(task);
                }
                return 0;
            }
            task->state = 6;
            return FUN_0023f074(task);
        }
    }
    return 0;
}

} /* extern "C" */
