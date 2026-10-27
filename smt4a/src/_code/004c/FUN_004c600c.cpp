#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct OpposingCandidateMasks {
    u64 required;
    u8 unk08[0x28];
    u64 excluded;
};
typedef char OpposingCandidateMasksOffsetCheck[offsetof(OpposingCandidateMasks, excluded) == 0x30 ? 1 : -1];

extern "C" {
extern OpposingCandidateMasks DAT_005713f0;
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 selection);

s32 FUN_004c600c(s32 selection)
{
    // The value lies in the shared entry's byte-aligned union, so keep this local.
    struct CandidateValueView { u8 unk000[0x120]; s32 value; };
    typedef char CandidateValueOffsetCheck[offsetof(CandidateValueView, value) == 0x120 ? 1 : -1];
    s32 first;
    s32 count;
    if ((u32)selection - 4 < 50) {
        first = 0;
        count = 4;
    } else {
        first = 4;
        count = 50;
    }
    BtlMainStateA *state = btlGetMainState();
    for (s32 index = first; first + count > index; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((DAT_005713f0.required & entry->flags) != 0 && (entry->flags & DAT_005713f0.excluded) == 0) {
            s16 candidateSelection = entry->indexView.selectionIndex;
            BtlCombatantEntryA *candidate = FUN_003f0e20(btlGetMainState(), candidateSelection);
            if (candidate != NULL && ((CandidateValueView *)candidate)->value > 0) {
                return entry->indexView.selectionIndex;
            }
        }
    }
    return -1;
}
}
