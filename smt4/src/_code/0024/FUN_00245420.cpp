/* NON_MATCHING: payload stack loads and saved registers differ. */
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

struct BtlUnitEntry;
extern "C" {
ReflectAction *btlQueueReflectAction(ReflectContext *context, s16 actorId, u32 flags, u32 secondaryId);
BtlMainState *btlGetMainState();
BtlUnitEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 listedId);

u32 FUN_00245420(s32 actorId, u32 secondaryId, BtlActionRecord *target, u32 value,
                 u32 parameter, s32 lookupId, s32 extraTarget)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, secondaryId);
    action->kind = 44;
    action->target = (u32)target;
    action->value = value;
    action->parameter = parameter;
    if (lookupId >= 0) {
        BtlUnitEntry *unit = btlMainFindEntryByListedId(btlGetMainState(), target->memberId);
        if (unit && extraTarget >= 0) {
            action = btlQueueReflectAction(g_btlActionReflect, lookupId, 0, secondaryId);
            action->kind = 6;
            action->wordValues.unk18 = (u32)unit;
            action->value = extraTarget;
        }
    }
    return 1;
}
}
