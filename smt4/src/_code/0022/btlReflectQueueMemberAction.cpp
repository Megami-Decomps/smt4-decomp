#include "battle/btlReflect.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlAction.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

s32 idSetFindSubjectIndex(BtlMainState *battle, const BtlActionRecord *member);

// Queue a member reflection action only when an equivalent action is not already pending.
ReflectAction *btlReflectQueueMemberAction(s32 actor, u32 options, BtlActionRecord *target, u32 value)
{
    if (!(target->status & 1))
        return NULL;
    ReflectAction *next;
    for (ReflectAction *action = g_btlActionReflect->head; action; action = next) {
        next = action->next;
        if (action->kind == 38 && action->options == options && action->target == (u32)target)
            return NULL;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    BtlUnitData *members = btlFindEntryBlockByMemberId(btlGetMainState(), target->memberId);
    s32 index = idSetFindSubjectIndex(btlGetMainState(), target);
    if (index < 0)
        index = 0;
    action->kind = 38;
    action->target = (u32)target;
    action->value = value;
    action->first = (u16)members->parts[index];
    action->second = (u16)target->memberId;
    return action;
}
}
