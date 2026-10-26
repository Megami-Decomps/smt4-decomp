/* NON_MATCHING: retail preserves the reference in r3 across btlUnitGet; this declaration requires a saved register, and mask loads schedule differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnit.h"
#include "battle/btlAction.h"

struct BattleTargetWork {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 candidates[109];
};

extern "C" {
extern BtlActionGlobals g_btlAction;

// Mark the battle slots permitted by the requested target-selection mode.
void btlUnitMarkTargetCandidates(BtlMainStateA **reference, s32 group, s32 mode)
{
    BattleTargetWork *work = reinterpret_cast<BattleTargetWork *>(btlUnitGet(reference));
    if (mode == 2) {
        const u64 alternateRequired = g_btlAction.targetableMask;
        const u64 alternateUnavailable = g_btlAction.interaction.excludedMask;
        BtlCombatantEntryA *entry = (*reference)->entries;
        for (s32 i = 0; i < 109; ++i, ++entry) {
            if ((entry->flags & alternateRequired) &&
                !(entry->flags & alternateUnavailable))
                work->candidates[i] = 1;
        }
        return;
    }
    if (group == 1) {
        const u64 required = g_btlAction.clearedFlags.mask;
        BtlCombatantEntryA *entry = &(*reference)->entries[4];
        for (s32 i = 0; i < 50; ++i, ++entry) {
            if (entry->flags & required)
                work->candidates[i + 4] = 1;
        }
        return;
    }
    const u64 required = g_btlAction.clearedFlags.mask;
    const u64 unavailable = g_btlAction.interaction.reachMask;
    BtlCombatantEntryA *entry = (*reference)->entries;
    for (s32 i = 0; i < 109; ++i, ++entry) {
        if ((entry->flags & required) &&
            !(entry->flags & unavailable))
            work->candidates[i] = 1;
    }
}
}
