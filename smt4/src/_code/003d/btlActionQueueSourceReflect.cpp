#include "battle/btlAction.h"

extern "C" {

/* A queued battle action (kind 0x27 is a reflect bound to a source record). */
struct BattleAction {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 argument;
    /* 0x0C */ BattleAction *next;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ BtlActionRecord *source;
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ s16 member;
};

struct BattleActionQueue {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ BattleAction *head;
};

struct BattleMember {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 id;
};

extern BattleActionQueue *g_btlActionReflect;
void *btlGetMainState(void);
BattleAction *btlQueueReflectAction(BattleActionQueue *queue, s16 id, u32 mode, u32 argument);
BattleMember *FUN_0027da30(void *state, s32 memberId);

/* Queues a kind-0x27 reflect action for an active source record unless one with the same argument is already queued. */
BattleAction *btlActionQueueSourceReflect(s32 id, u32 argument, BtlActionRecord *source)
{
    BattleAction *action;
    BattleAction *next;
    BattleMember *member;
    void *state;

    if (!(source->status & 1)) {
        return NULL;
    }
    for (action = g_btlActionReflect->head; action != NULL; action = next) {
        next = action->next;
        if (action->kind == 0x27 && action->argument == argument && action->source == source) {
            return NULL;
        }
    }
    state = btlGetMainState();
    action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, argument);
    member = FUN_0027da30(state, source->memberId);
    action->kind = 0x27;
    action->source = source;
    action->member = member->id;
    return action;
}

} /* extern "C" */
