/* NON_MATCHING: actor selectors are now narrowed (s16) like retail; retail loads the two stack arguments with ldrd into r4/r5 and keeps the payload in r6-r8, built allocates r4-r8 in a different order. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

struct BtlEntry;
extern "C" {

BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 listedId);

u32 FUN_00245420(s32 actorId, u32 secondaryId, BtlActionRecord *target, u32 value,
                 u32 parameter, s32 lookupId, s32 extraTarget)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, secondaryId);
    action->kind = 44;
    action->target = (u32)target;
    action->value = value;
    action->parameter = parameter;
    if (lookupId >= 0) {
        BtlEntry *unit = btlMainFindEntryByListedId(btlGetMainState(), target->memberId);
        if (unit && extraTarget >= 0) {
            action = btlQueueReflectAction(g_btlActionReflect, (s16)lookupId, 0, secondaryId);
            action->kind = 6;
            action->wordValues.unk18 = (u32)unit;
            action->value = extraTarget;
        }
    }
    return 1;
}
}
