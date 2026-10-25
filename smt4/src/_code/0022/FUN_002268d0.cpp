/* NON_MATCHING: context registers and duplicate-action kind/options load scheduling differ. */
#include "battle/btlReflect.h"
#include "battle/btlHelp.h"

extern "C" {


// Queue a target action, advancing the entry sequence when a matching target is already queued.
ReflectAction *FUN_002268d0(s32 actor, s32 secondary, u32 options, ReflectTarget *target,
                            u32 parameter, u32 second, u32 value,
                            u8 commandFlags, u8 targetFlags)
{
    ReflectContext *context = g_btlActionReflect;
    bool duplicate = false;
    ReflectAction *previous = context->head;
    while (previous != NULL) {
        ReflectAction *next = previous->next;
        if (previous->kind == 1 && previous->options == options &&
            previous->target == (u32)target) {
            duplicate = true;
        }
        previous = next;
    }
    ReflectAction *action = btlQueueReflectAction(context, (s16)actor, (s16)secondary, options);
    action->target = (u32)target;
    action->kind = 1;
    action->value = value;
    action->parameter = parameter;
    action->wordValues.second = second;
    action->command.flags = commandFlags;
    action->targetFlags.flags = targetFlags;
    action->first = duplicate ? battleGetEntryHalfword(target->entryIndex, 1) - 1 : 0;
    return action;
}
}
