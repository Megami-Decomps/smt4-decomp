#include "battle/btlReflect.h"
#include "battle/btlAction.h"

extern "C" {

struct BattleMember {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 id;
};

void *btlGetMainState(void);

BattleMember *FUN_0027da30(void *state, s32 memberId);

/* Queues a kind-0x27 reflect action for an active source record unless one with the same argument is already queued. */
ReflectAction *btlActionQueueSourceReflect(s32 id, u32 argument, BtlActionRecord *source)
{
    ReflectAction *action;
    ReflectAction *next;
    BattleMember *member;
    void *state;

    if (!(source->status & 1)) {
        return NULL;
    }
    for (action = g_btlActionReflect->head; action != NULL; action = next) {
        next = action->next;
        if (action->kind == 0x27 && action->options == argument && action->target == (u32)source) {
            return NULL;
        }
    }
    state = btlGetMainState();
    action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, argument);
    member = FUN_0027da30(state, source->memberId);
    action->kind = 0x27;
    action->target = (u32)source;
    action->first = member->id;
    return action;
}

} /* extern "C" */
