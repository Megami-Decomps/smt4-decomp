#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"

/* The combatant fields the kind-47 reflect action reads. */
struct ReflectSubject {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x16];
    /* 0x6A */ s16 group;
};

/* A subject group's id table. */
struct ReflectSubjectGroup {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 ids[1];
};

extern "C" {


ReflectSubjectGroup *FUN_001568f8(void *state, s16 group);
s32 idSetFindSubjectIndex(void *state, ReflectSubject *subject);

/* Queues a kind-47 reflect action on an active subject unless one with the same options is queued. */
ReflectAction *btlReflectQueueMemberAction(s32 actor, u32 options, ReflectSubject *subject, u32 value)
{
    if (!(subject->flags & 1)) {
        return NULL;
    }
    ReflectAction *next;
    for (ReflectAction *queued = g_btlActionReflect->head; queued; queued = next) {
        next = queued->next;
        if (queued->kind == 47 && queued->options == options && queued->target == (u32)subject)
            return NULL;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    ReflectSubjectGroup *group = FUN_001568f8(btlGetMainState(), subject->group);
    s32 index = idSetFindSubjectIndex(btlGetMainState(), subject);
    if (index < 0) {
        index = 0;
    }
    action->kind = 47;
    action->target = reinterpret_cast<u32>(subject);
    action->value = value;
    action->first = group->ids[index];
    return action;
}

} /* extern "C" */
