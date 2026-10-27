#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32);
void scrSetResult(s32);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);
s32 btlResolveEntryChoice(s32);

// Test the selected eligible combatants and active combatant for a status flag.
u32 FUN_0035ece4(void)
{
    u32 flag = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            (entry->statusFlags & (1u << (u8)flag))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && (entry->statusFlags & (1u << (u8)flag))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
