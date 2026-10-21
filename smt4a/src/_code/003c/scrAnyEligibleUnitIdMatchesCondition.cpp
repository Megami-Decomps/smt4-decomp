/* NON_MATCHING: entry-base GPR roles/mask reassociation differ and the 4CD1 byte load has an extra address ADD (95/96); O2 addressing/allocation candidate. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 value);
s32 FUN_00232388(s32 selector);
void FUN_00301a08(s32 kind, u32* first, u32* count);
BtlMainStateA* btlGetMainState();
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA*);
u32 FUN_003020fc(BtlCombatantEntryA* entry, u32 condition);

u32 scrAnyEligibleUnitIdMatchesCondition()
{
    const u32 id = scrGetArg(0);
    const u32 condition = scrGetArg(1);
    const s32 kind = FUN_00232388(scrGetArg(2));
    s32 first, count;
    FUN_00301a08(kind, reinterpret_cast<u32*>(&first), reinterpret_cast<u32*>(&count));
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        const u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable)
            && (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded)
            && entry->id == id && FUN_003020fc(entry, condition)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->id == id && FUN_003020fc(entry, condition)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} // extern "C"
