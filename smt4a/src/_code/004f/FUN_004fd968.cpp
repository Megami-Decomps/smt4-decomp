/* NON_MATCHING: retail keeps `actor` in r0 through the queue scan and holds the context in r5; built moves actor to r5 and tests the flag with ands. */
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
ReflectAction *FUN_004fd968(s32 actor, u32 options, ReflectSubject *subject, u32 value)
{
    if (!(subject->flags & 1)) {
        return NULL;
    }
    ReflectContext *context = g_btlActionReflect;
    ReflectAction *queued = context->head;
    while (queued != NULL) {
        ReflectAction *next = queued->next;
        if (queued->kind == 47 && queued->options == options &&
            queued->target == reinterpret_cast<u32>(subject)) {
            return NULL;
        }
        queued = next;
    }
    ReflectAction *action = btlQueueReflectAction(context, (s16)actor, 0, options);
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
