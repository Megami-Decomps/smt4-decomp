/* NON_MATCHING: call/store structure and the actor halfword narrowing match retail (actor is an s32 narrowed at the call); retail also keeps the constants 1 and 38 in callee-saved registers (r9, fp) and reads checkStatus from the stack at its use, so the saved-register assignment differs. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *, s32);
}

extern "C" u32 FUN_004fdb18(s32 actor, u32 options, BattleRosterRecordA *target,
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
    action = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actor), 0, options);
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
