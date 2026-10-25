#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

struct ReflectedMemberActions {
    u8 unk00[0xc];
    u32 ids[50]; // 0x0c in the roster's embedded action subrecord
};
extern "C" {

ReflectedMemberActions *FUN_0027da30(BtlMainState *battle, s32 member);
s32 FUN_0027dab0(BtlMainState *battle, const BtlActionRecord *member);

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
    ReflectedMemberActions *members = FUN_0027da30(btlGetMainState(), target->memberId);
    s32 index = FUN_0027dab0(btlGetMainState(), target);
    if (index < 0)
        index = 0;
    action->kind = 38;
    action->target = (u32)target;
    action->value = value;
    action->first = (u16)members->ids[index];
    action->second = (u16)target->memberId;
    return action;
}
}
