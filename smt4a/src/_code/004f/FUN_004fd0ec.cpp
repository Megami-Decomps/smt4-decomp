/* NON_MATCHING: float argument registers (retail s17=parameter, s16=second, separate vldr) and the store scheduling after btlQueueReflectAction differ. */
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"



/* Queue a target action, using its member id when a matching target action already exists. */
extern "C" ReflectAction *FUN_004fd0ec(s32 actor, s32 secondary, u32 options, BtlActionRecord *target,
    u32 parameterBits, u32 secondBits, u32 valueBits, u32 commandFlags, u32 targetFlags)
{
    bool repeated = false;
    ReflectContext *context = g_btlActionReflect;
    ReflectAction *next;
    for (ReflectAction *previous = context->head; previous; previous = next) {
        next = previous->next;
        if (previous->kind == 2 && previous->options == options &&
            previous->target == reinterpret_cast<u32>(target)) {
            repeated = true;
        }
    }
    ReflectAction *action = btlQueueReflectAction(context, (s16)actor, (s16)secondary, options);
    action->target = reinterpret_cast<u32>(target);
    action->kind = 2;
    action->scalar = reinterpret_cast<const f32 &>(valueBits);
    action->parameterScalar = reinterpret_cast<const f32 &>(parameterBits);
    reinterpret_cast<f32 &>(action->wordValues.second) = reinterpret_cast<const f32 &>(secondBits);
    action->command.flags = commandFlags;
    action->targetFlags.flags = targetFlags;
    if (repeated) {
        action->first = btlFindEntryValue(target->apocalypse.memberId, 1) - 1;
    } else {
        action->first = 0;
    }
    return action;
}
