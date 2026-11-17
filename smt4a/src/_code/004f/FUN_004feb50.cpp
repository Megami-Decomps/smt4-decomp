#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlReflect.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

/* The record an action is raised for (Apocalypse layout). */
struct BtlActionSourceA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 status;
    /* 0x54 */ u8 unk54[0x16];
    /* 0x6A */ s16 memberId;
};

s32 idSetFindSubjectIndex(void *state, BtlActionSourceA *source);

/* Queues a kind-0x30 action for an active source record unless one with the same argument is already queued. */
ReflectAction *FUN_004feb50(s32 id, u32 argument, BtlActionSourceA *source, u32 value)
{
    ReflectAction *action;
    ReflectAction *next;
    BtlUnitDataA *party;
    s32 index;

    if (!(source->status & 1)) {
        return NULL;
    }
    for (action = g_btlActionReflect->head; action != NULL; action = next) {
        next = action->next;
        if (action->kind == 0x30 && action->options == argument && action->target == reinterpret_cast<u32>(source)) {
            return NULL;
        }
    }
    action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, argument);
    party = btlFindEntryBlockByMemberId(btlGetMainState(), source->memberId);
    index = idSetFindSubjectIndex(btlGetMainState(), source);
    if (index < 0) {
        index = 0;
    }
    action->kind = 0x30;
    action->target = reinterpret_cast<u32>(source);
    action->value = value;
    action->first = party->parts[index];
    action->second = source->memberId;
    return action;
}

} /* extern "C" */
