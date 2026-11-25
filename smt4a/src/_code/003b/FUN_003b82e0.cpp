/* NON_MATCHING: only the excluded-mask test: retail loads the mask with two ldr (ip, r3) where armcc emits add+ldm, with the AND temporaries swapped. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"
extern "C" {
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);

// Test whether a matching active unit has a positive value in the selected battle stat.
u32 FUN_003b82e0()
{
    // The shared combatant's byte union at 0x0a cannot gain a 4-byte-aligned member.
    struct StatView { u8 prefix[0x74]; s32 values[12]; };
    typedef char StatViewOffset[offsetof(StatView, values) == 0x74 ? 1 : -1];
    u32 unitId = scrGetArg(0);
    u32 kind = scrGetArg(1);
    s32 stat = 0;
    if (kind == 0)
        stat = 7;
    else if (kind == 1)
        stat = 8;
    else if (kind == 2)
        stat = 10;
    else if (kind == 3)
        stat = 11;
    s32 group = btlResolveEntryChoice(scrGetArg(2));
    s32 first, count;
    btlGetEntryChoiceRange(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            entry->data.id == unitId && reinterpret_cast<StatView *>(entry)->values[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry && entry->data.id == unitId && reinterpret_cast<StatView *>(entry)->values[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
