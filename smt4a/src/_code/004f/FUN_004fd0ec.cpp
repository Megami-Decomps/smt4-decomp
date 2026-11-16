#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* Queue a target action, using its member id when a matching target action already exists. */
extern "C" ReflectAction *FUN_004fd0ec(s32 actor, s32 secondary, u32 options, BtlActionRecord *target,
    u32 parameter, u32 second, u32 value, u8 commandFlags, u8 targetFlags)
{
    bool duplicate = false;
    ReflectAction *previous = g_btlActionReflect->head;
    ReflectAction *next;
    while (previous != NULL) {
        next = previous->next;
        if (previous->kind == 2 && previous->options == options &&
            previous->target == reinterpret_cast<u32>(target)) {
            duplicate = true;
        }
        previous = next;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, (s16)secondary, options);
    action->target = reinterpret_cast<u32>(target);
    action->kind = 2;
    action->value = value;
    action->parameter = parameter;
    action->wordValues.second = second;
    action->command.flags = commandFlags;
    action->targetFlags.flags = targetFlags;
    action->first = duplicate ? btlFindEntryValue(target->apocalypse.memberId, 1) - 1 : 0;
    return action;
}
