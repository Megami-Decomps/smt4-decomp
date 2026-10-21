/* NON_MATCHING: retail preserves the reference in r3 across btlUnitGet; this declaration requires a saved register, and mask loads schedule differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleTargetWork {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 candidates[109];
};

struct BattleActionMasks {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u64 alternateRequired;
    /* 0x18 */ u8 unk18[0x20];
    /* 0x38 */ u64 unavailable;
    /* 0x40 */ u64 alternateUnavailable;
    /* 0x48 */ u8 unk48[0x10];
    /* 0x58 */ u64 required;
};

extern "C" {
extern BattleActionMasks g_btlAction;
BattleTargetWork *btlUnitGet(BtlMainStateA **reference);

// Mark the battle slots permitted by the requested target-selection mode.
void btlUnitMarkTargetCandidates(BtlMainStateA **reference, s32 group, s32 mode)
{
    BattleTargetWork *work = btlUnitGet(reference);
    if (mode == 2) {
        const u64 alternateRequired = g_btlAction.alternateRequired;
        const u64 alternateUnavailable = g_btlAction.alternateUnavailable;
        BtlCombatantEntryA *entry = (*reference)->entries;
        for (s32 i = 0; i < 109; ++i, ++entry) {
            if ((entry->flags & alternateRequired) &&
                !(entry->flags & alternateUnavailable))
                work->candidates[i] = 1;
        }
        return;
    }
    if (group == 1) {
        const u64 required = g_btlAction.required;
        BtlCombatantEntryA *entry = &(*reference)->entries[4];
        for (s32 i = 0; i < 50; ++i, ++entry) {
            if (entry->flags & required)
                work->candidates[i + 4] = 1;
        }
        return;
    }
    const u64 required = g_btlAction.required;
    const u64 unavailable = g_btlAction.unavailable;
    BtlCombatantEntryA *entry = (*reference)->entries;
    for (s32 i = 0; i < 109; ++i, ++entry) {
        if ((entry->flags & required) &&
            !(entry->flags & unavailable))
            work->candidates[i] = 1;
    }
}
}
