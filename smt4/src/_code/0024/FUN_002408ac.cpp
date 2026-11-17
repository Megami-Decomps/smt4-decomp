#include "battle/btlAction.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "code/Code0023.h"
#include "battle/BattleEncounter.h"

extern "C" {
void FUN_0023f410(BtlMainState *state, s32 group, s32 keepFlag, s32 keepFlag58);
u32 FUN_0023f500(BattleEncounterQuery *query, BtlMainState *state);
void FUN_0023f79c(BtlMainState *state, u32 flags);

/* Moves the encounter setup to step 10 and runs it (loads the arrangement). */
static __inline u32 encounterStartArrangement(BattleEncounterQuery *query, BtlMainState *state)
{
    query->step = 10;
    return FUN_0023f500(query, state);
}

/* Encounter setup step: counts the finished actions, then advances to step 10 once the battle is ready. */
u32 FUN_002408ac(BattleEncounterQuery *query, BtlMainState *state)
{
    if (state->battleFlags & 0x20) {
        FUN_0023f410(state, 1, 1, 0);
    } else {
        FUN_0023f410(state, 1, 1, 1);
    }
    query->step = 8;
    if (FUN_0023fae0(state, 1)) {
        FUN_0023f79c(state, 0x400);
        for (s32 i = 4; i < 0x36; ++i) {
            BtlActionRecord *action = &state->actions[i];
            u32 status = action->status;
            if ((status & 1) && (status & 0x80) && (status & 0x400)) {
                ++state->completedCount;
            }
        }
        return encounterStartArrangement(query, state);
    }
    return 0;
}
}
