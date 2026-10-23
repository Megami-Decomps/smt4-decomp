/* NON_MATCHING: retail spills mask pairs in a larger frame and orders candidate branches differently. */
#include "battle/BattleUnitRecordState.h"

// This action-mask view extends beyond BtlActionGlobals' published prefix.
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
extern "C" {
extern BattleCandidateMarkingMasks g_btlAction;

// Mark eligible combatants from either the unavailable or available candidate set.
void FUN_004e7c04(BattleUnitRecordState* state, s32 unavailableOnly)
{
    u64 required = g_btlAction.required;
    u64 unavailable = g_btlAction.unavailable;
    u64 singleAction = g_btlAction.singleAction;
    u64 excluded = g_btlAction.excluded;
    u64 marked = g_btlAction.marked;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA* entry = &state->battle->entries[index];
        if (entry->indexView.selectionIndex >= 0) {
            u64 flags = entry->flags;
            if ((flags & required) && !(flags & excluded)) {
                if (unavailableOnly != 1) {
                    if (!(flags & unavailable) &&
                        (!(flags & singleAction) || state->battle->unk4cd0))
                        entry->flags = flags | marked;
                } else if (flags & unavailable) {
                    entry->flags = flags | marked;
                }
            }
        }
    }
}
}
