/* NON_MATCHING: prior-action traversal preload, saved registers and scalar store ordering differ from retail. */
#include "battle/btlReflect.h"
#include "battle/btlAction.h"

extern "C" ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, s32 secondary, u32 options);
extern "C" s16 btlFindEntryValue(s32 memberId, u32 field);

/* Queue a target action, using its member id when a matching target action already exists. */
extern "C" ReflectAction *FUN_004fd0ec(s32 actor, s32 secondary, u32 options, BtlActionRecord *target,
    u32 parameterBits, u32 secondBits, u32 valueBits, u32 commandFlags, u32 targetFlags)
{
    bool repeated = false;
    ReflectContext *context = g_btlActionReflect;
    for (ReflectAction *previous = context->head; previous; previous = previous->next) {
        if (previous->kind == 2 && previous->options == options &&
            previous->target == reinterpret_cast<u32>(target)) {
            repeated = true;
        }
    }
    ReflectAction *action = FUN_004102d8(context, (s16)actor, (s16)secondary, options);
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
