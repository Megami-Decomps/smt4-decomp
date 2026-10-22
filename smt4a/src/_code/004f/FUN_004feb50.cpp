#include "common.h"

extern "C" {

/* The record an action is raised for (Apocalypse layout). */
struct BtlActionSourceA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 status;
    /* 0x54 */ u8 unk54[0x16];
    /* 0x6A */ s16 memberId;
};

/* A queued battle action (kind 0x30 is bound to a source record). */
struct BattleActionA {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 argument;
    /* 0x0C */ BattleActionA *next;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ BtlActionSourceA *source;
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ s16 member;
    /* 0x26 */ s16 memberId;
    /* 0x28 */ u32 value;
};

struct BattleActionQueueA {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ BattleActionA *head;
};

struct BattleParty {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 ids[1];
};

extern BattleActionQueueA *g_btlActionReflect;
void *btlGetMainState(void);
BattleActionA *FUN_004102d8(BattleActionQueueA *queue, s16 id, u32 mode, u32 argument);
BattleParty *FUN_001568f8(void *state, s32 memberId);
s32 idSetFindSubjectIndex(void *state, BtlActionSourceA *source);

/* Queues a kind-0x30 action for an active source record unless one with the same argument is already queued. */
BattleActionA *FUN_004feb50(s32 id, u32 argument, BtlActionSourceA *source, u32 value)
{
    BattleActionA *action;
    BattleActionA *next;
    BattleParty *party;
    s32 index;

    if (!(source->status & 1)) {
        return NULL;
    }
    for (action = g_btlActionReflect->head; action != NULL; action = next) {
        next = action->next;
        if (action->kind == 0x30 && action->argument == argument && action->source == source) {
            return NULL;
        }
    }
    action = FUN_004102d8(g_btlActionReflect, (s16)id, 0, argument);
    party = FUN_001568f8(btlGetMainState(), source->memberId);
    index = idSetFindSubjectIndex(btlGetMainState(), source);
    if (index < 0) {
        index = 0;
    }
    action->kind = 0x30;
    action->source = source;
    action->value = value;
    action->member = party->ids[index];
    action->memberId = source->memberId;
    return action;
}

} /* extern "C" */
