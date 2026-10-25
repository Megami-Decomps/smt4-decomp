/* NON_MATCHING: The target, value, and optional follow-up arguments use different saved registers and stack-pair loads. */
#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"

extern "C" {

BtlUnitEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 listedId);

/* Queues the target action and, when requested, a follow-up action for its listed battle unit. */
u32 FUN_003dda54(u32 actorId, u32 options, u32 value, ReflectTarget *target, s32 followupActor, s32 followupValue)
{
    ReflectAction *request = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    request->kind = 0x2B;
    request->target = reinterpret_cast<u32>(target);
    request->value = value;
    if (followupActor >= 0) {
        BtlUnitEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), target->entryIndex);
        if (entry != NULL && followupValue >= 0) {
            request = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(followupActor), 0, options);
            request->kind = 6;
            request->wordValues.unk18 = reinterpret_cast<u32>(entry);
            request->value = followupValue;
        }
    }
    return 1;
}
}
