/* NON_MATCHING: only the allocation of the two global addresses differs (retail g_btlAction r6/g_btlEvent r7, ours swapped) and the final reach-mask load pairing (retail ldm/ldm after add #56). */
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

// Match an eligible candidate against event types four and ten.
u32 FUN_004ea0c0(BattleEventOwnerRef *owner, const BattleEventCandidate *candidate)
{
    if (!(candidate->flags & 0x10000)) {
        BtlCombatantEntryA *entry = candidate->entry;
        if (!(entry->flags & g_btlAction.targetableMask) ||
            (entry->flags & g_btlAction.interaction.excludedMask))
            return 0;
    } else {
        if (owner->state->available <= 0)
            return 0;
    }
    if (isEntryUsable(g_btlEvent) || FUN_003eb1cc(owner->state))
        return 0;
    if (FUN_004d7a70(g_btlEvent, 4, candidate->entry->indexView.selectionIndex, 0))
        return 1;
    if (!FUN_003eb1cc(owner->state) && owner->state->pending <= 0 &&
        (candidate->entry->flags & g_btlAction.interaction.reachMask) &&
        FUN_004d7a70(g_btlEvent, 10, candidate->entry->indexView.selectionIndex, 0))
        return 1;
    return 0;
}
}
