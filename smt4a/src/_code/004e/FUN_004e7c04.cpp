/* NON_MATCHING: 71 vs 59 rows (116 diff lines); s8 flag4cd0 matches retail's split base load (add #19456; ldrb #208); remaining: retail hoists and spills all five u64 action masks in a 60-byte frame. */
#include "battle/BattleUnitRecordState.h"

/* This action-mask view extends beyond BtlActionGlobals' published prefix. */
struct BattleCandidateMarkingMasks {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u64 required;
    /* 0x18 */ u8 unk18[0x18];
    /* 0x30 */ u64 unavailable;
    /* 0x38 */ u64 singleAction;
    /* 0x40 */ u64 excluded;
    /* 0x48 */ u8 unk48[0x10];
    /* 0x58 */ u64 marked;
};

struct BattleStateFlagView {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ BtlCombatantEntryA *entries;
    /* 0x2000 */ u8 unk2000[0x2CD0];
    /* 0x4CD0 */ s8 flag4cd0;
};

extern "C" {
extern BattleCandidateMarkingMasks g_btlAction;

/* Mark eligible combatants from either the unavailable or available candidate set. */
void FUN_004e7c04(BattleUnitRecordState *state, s32 unavailableOnly)
{
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &state->battle->entries[index];
        if (entry->selectionIndex >= 0) {
            if ((entry->flags & g_btlAction.required) && !(entry->flags & g_btlAction.excluded)) {
                if (unavailableOnly != 1) {
                    if (!(entry->flags & g_btlAction.unavailable) &&
                        (!(entry->flags & g_btlAction.singleAction) ||
                         ((BattleStateFlagView *)state->battle)->flag4cd0)) {
                        entry->flags |= g_btlAction.marked;
                    }
                } else if (entry->flags & g_btlAction.unavailable) {
                    entry->flags |= g_btlAction.marked;
                }
            }
        }
    }
}
} /* extern "C" */
