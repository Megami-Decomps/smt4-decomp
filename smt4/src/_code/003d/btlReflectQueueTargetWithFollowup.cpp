#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Queues the target action and, when requested, a follow-up action for its listed battle unit. */
u32 btlReflectQueueTargetWithFollowup(u32 actorId, u32 options, u32 value, ReflectTarget *target, s32 followupActor, s32 followupValue)
{
    btlReflectQueueTargetAction(0x2b, actorId, options, target, value);
    if (followupActor >= 0) {
        BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), target->entryIndex);
        if (entry != NULL && followupValue >= 0) {
            btlReflectQueueUnitFollowup(6, followupActor, options, entry, followupValue);
        }
    }
    return 1;
}

} /* extern "C" */
