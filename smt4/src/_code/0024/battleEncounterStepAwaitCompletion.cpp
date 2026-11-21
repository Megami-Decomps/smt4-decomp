#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match2_CountPairs.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"
#include "battle/btlUI.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BattleEncounter.h"
#include "battle/btlCamera.h"

extern "C" {
extern ReflectContext *g_btlActionReflect;
extern CountPairTable *g_btlAux;
s32 nodeListCountActiveById(ReflectContext *queue, u32 id); // declcheck: local (code/Code0027_Smt4.h declares it with a List *; this caller passes the reflect queue)
s32 recordAreAllCountsNonpositive(const CountPairTable *counts);
u32 stateBlockCall(BtlUi *ui);
s32 FUN_00256940(BtlCamera *main, BtlMainState *battle, s32 mode);
s32 FUN_0022724c(BtlCamera *camera); // declcheck: local (retail passes the camera in r0 and tests the result; the shared prototype is void (void))
void FUN_0023f4e4(BtlMainState *battle);
void eventCommandDispatchPendingCleanup(BtlCamera *camera);

/* Step 16 of battleEncounterTaskUpdate: after 30 frames, finishes once the reflect actions, the aux records and
 * the camera's commands have drained (the same body as that unit's step). */
static __inline u32 encounterWaitDrain(BattleEncounterQuery *query, BtlMainState *battle)
{
    if (++query->elapsed <= 30)
        return 0;
    if (nodeListCountActiveById(g_btlActionReflect, (u32)query) > 0)
        return 0;
    if (!recordAreAllCountsNonpositive(g_btlAux))
        return 0;
    if (!FUN_0022724c(g_btlMain))
        return 0;
    if (g_btlMain->flags & BTL_FLAG_NO_ENCOUNT)
        return 0;
    FUN_0023f4e4(battle);
    g_btlMain->flags &= ~0x4000u;
    eventCommandDispatchPendingCleanup(g_btlMain);
    return ~0u;
}

/* Encounter setup step 15: waits for the reflect actions, the aux records and the UI, marks the encounter's
 * enemies, publishes the battle result and enters step 16. */
u32 battleEncounterStepAwaitCompletion(BattleEncounterQuery *query, BtlMainState *battle)
{
    if (battle->encounterControl.blocked && nodeListCountActiveById(g_btlActionReflect, (u32)query) > 0)
        return 0;
    if (!recordAreAllCountsNonpositive(g_btlAux))
        return 0;
    if ((battle->battleFlags & 8) && !stateBlockCall(g_btlUiBlock))
        return 0;
    if (battle->encounter.flags & 0x04000000) {
        /* The enemy entries and actions: 50 slots after the four party slots. */
        s32 first = 4;
        for (s32 index = first; first + 50 > index; ++index) {
            BtlEntry *entry = &battle->entries[index];
            if ((entry->flags & BTL_ENTRY_FLAG_ACTIVE) && !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && (entry->flags & BTL_ENTRY_FLAG_PRESENT))
                entry->flagMask |= 0x00800000;
        }
        for (s32 index = first; first + 50 > index; ++index) {
            BtlActionRecord *action = &battle->actions[index];
            u32 flags = action->status;
            if ((flags & 1) && !(flags & 0x80) && (flags & 0x400))
                action->status = flags | 0x40000;
        }
    }
    query->pending |= 4;
    if (FUN_00256940(g_btlMain, battle, 1)) {
        s32 result = -1;
        s16 kind = battle->resolution.kind;
        if (kind == 0)
            result = 1;
        else if (kind == 1)
            result = 2;
        else if (kind == 2)
            result = 3;
        else if (kind == 3)
            result = 4;
        g_btlMain->unk760 = result;
    }
    query->step = 16;
    query->elapsed = 0;
    return encounterWaitDrain(query, battle);
}
}
