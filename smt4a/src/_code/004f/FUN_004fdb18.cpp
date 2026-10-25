/* NON_MATCHING: reflected-action payload stores use different saved registers and writeback grouping. */
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *, s32);
}

extern "C" u32 FUN_004fdb18(s16 actor, u32 options, BattleRosterRecordA *target,
                             u32 parameter, s32 checkStatus)
{
    s16 nextActor = actor + 1;
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, nextActor, 0, options);
    action->kind = 27;
    action->target = reinterpret_cast<u32>(target);
    action->parameter = parameter;
    action = btlQueueReflectAction(g_btlActionReflect, nextActor, 0, options);
    action->kind = 9;
    action->target = reinterpret_cast<u32>(target);
    action->value = parameter;
    action = btlQueueReflectAction(g_btlActionReflect, actor, 0, options);
    action->kind = 38;
    action->target = reinterpret_cast<u32>(target);
    action->value = 1;
    action->parameter = parameter;
    if (checkStatus) {
        const BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), target->motion.group);
        if (entry->statusFlags & 0x10) {
            action = btlQueueReflectAction(g_btlActionReflect, nextActor, 0, options);
            action->kind = 38;
            action->target = reinterpret_cast<u32>(target);
            action->value = 0;
            action->parameter = 0x10;
        }
    }
    return 1;
}
