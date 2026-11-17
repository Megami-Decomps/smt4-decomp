#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/BtlScriptTargets.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"

extern "C" {

extern u32 g_btlScriptUnit;

u32 scrGetArg(u32 index);

/* Script command: queues action kind 12 with the two argument actions and targets the first two usable enemy entries. */
s32 FUN_002f6c24(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    s32 i;

    BtlScriptActorData *data = reinterpret_cast<BtlScriptActor *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->data;
    data->actionKind = 12;
    btlGetMainState()->pendingAction = (s32)(first | 0x20000);
    btlGetMainState()->secondaryPendingAction = (s32)(second | 0x40000);

    s8 maxTargets = 2;
    s8 targetCount = 0;
    for (i = 4; i < 0x36; i++) {
        BtlMainState *state = btlGetMainState();
        u32 flags = state->entries[i].flags;
        if (flags & BTL_ENTRY_FLAG_ACTIVE) {
            continue;
        }
        if (flags & BTL_ENTRY_FLAG_BLOCKED) {
            continue;
        }
        reinterpret_cast<BtlScriptActor *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->targets[i] = i;
        targetCount++;
        if (targetCount >= maxTargets) {
            break;
        }
    }
    return 1;
}

} /* extern "C" */
