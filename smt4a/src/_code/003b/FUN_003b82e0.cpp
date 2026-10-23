/* NON_MATCHING: excluded-mask loads use LDM and the special-entry flag load adds an address instruction; 105 vs 106 instructions. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
extern "C" {
u32 scrGetArg(s32 argument);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 group, s32 *first, s32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

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
    FUN_00301a08(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == unitId && reinterpret_cast<StatView *>(entry)->values[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->id == unitId && reinterpret_cast<StatView *>(entry)->values[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
