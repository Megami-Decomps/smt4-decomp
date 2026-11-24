#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

struct BtlEntry;
extern "C" {

/* Queues a target action with a parameter and, if requested, a follow-up for the target's combatant. */
u32 btlReflectQueueParameterTargetWithFollowup(s32 actorId, u32 options, BtlActionRecord *target, u32 value,
                 u32 parameter, s32 followupActor, s32 followupValue)
{
    ReflectAction *action = btlReflectQueueTargetAction(0x2c, actorId, options, target, value);
    action->parameter = parameter;
    if (followupActor >= 0) {
        BtlEntry *unit = btlMainFindEntryByListedId(btlGetMainState(), target->memberId);
        if (unit != NULL && followupValue >= 0) {
            btlReflectQueueUnitFollowup(6, followupActor, options, unit, followupValue);
        }
    }
    return 1;
}

} /* extern "C" */
