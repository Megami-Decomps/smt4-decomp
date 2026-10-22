#include "shard/W4_Match6_BtlEntry.h"
#include "shard/BtlScriptTargets.h"

extern "C" {

extern u32 g_btlScriptUnit;

u32 scrGetArg(u32 index);
BtlScriptActor *btlUnitGet(u32 id);
BtlMainState *btlGetMainState(void);

/* Script command: queues action kind 12 with the argument and targets the first usable enemy entry. */
s32 FUN_002f0250(void)
{
    s32 action = scrGetArg(0);
    s32 i;

    BtlScriptActorData *data = btlUnitGet(g_btlScriptUnit)->data;
    data->actionKind = 12;
    btlGetMainState()->pendingAction = (s32)(action | 0x10000);

    s8 maxTargets = 1;
    s8 targetCount = 0;
    for (i = 4; i < 0x36; i++) {
        u32 flags = btlGetMainState()->entries[i].flags;
        if (flags & BTL_ENTRY_FLAG_ACTIVE) {
            continue;
        }
        if (flags & BTL_ENTRY_FLAG_BLOCKED) {
            continue;
        }
        btlUnitGet(g_btlScriptUnit)->targets[i] = i;
        targetCount++;
        if (targetCount >= maxTargets) {
            break;
        }
    }
    return 1;
}

} /* extern "C" */
