/* NON_MATCHING: mask load pairing, preserved globals, candidate branch layout and comparison bounds differ. */
#include "battle/btlEvent.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleEventCandidate {
    u32 flags;
    u8 unk04[0x1c];
    BtlCombatantEntryA *entry;
};
struct BattleEventOwnerView {
    u8 unk0000[0x2000];
    s16 available;
    u8 unk2002[0x2d6a];
    s32 pending; // 0x4d6c, beyond BtlMainStateA's shared end
};
struct BattleEventOwnerRef { BattleEventOwnerView *state; };
typedef char BattleEventCandidateOffsets[
    offsetof(BattleEventCandidate, entry) == 0x20 &&
    offsetof(BattleEventOwnerView, pending) == 0x4d6c ? 1 : -1];

extern "C" {
s32 FUN_004d7a70(BtlEvent *, s32, s32, s32);
s32 FUN_003eb1cc(BattleEventOwnerView *);
s32 isEntryUsable(BtlEvent *);
extern BtlEvent *g_btlEvent;
extern BtlActionGlobals g_btlAction;
extern u64 DAT_00571170;

// Match an eligible candidate against event types four and ten.
u32 FUN_004ea0c0(BattleEventOwnerRef *owner, const BattleEventCandidate *candidate)
{
    if (candidate->flags & 0x10000) {
        if (owner->state->available < 1)
            return 0;
    } else {
        u64 flags = candidate->entry->flags;
        if (!(flags & g_btlAction.targetableMask) ||
            (flags & g_btlAction.interaction.excludedMask))
            return 0;
    }
    if (isEntryUsable(g_btlEvent) || FUN_003eb1cc(owner->state))
        return 0;
    if (FUN_004d7a70(g_btlEvent, 4, candidate->entry->indexView.selectionIndex, 0))
        return 1;
    if (!FUN_003eb1cc(owner->state) && owner->state->pending < 1 &&
        (candidate->entry->flags & DAT_00571170) &&
        FUN_004d7a70(g_btlEvent, 10, candidate->entry->indexView.selectionIndex, 0))
        return 1;
    return 0;
}
}
