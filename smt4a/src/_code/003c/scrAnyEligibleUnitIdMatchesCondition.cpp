/* NON_MATCHING: direct flag reads reproduce retail's separate required-mask loads and pool; entry-address and final-AND scratch registers still differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 value);
s32 btlResolveEntryChoice(s32 selector);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA*);
u32 FUN_003020fc(BtlCombatantEntryA* entry, u32 condition);

u32 scrAnyEligibleUnitIdMatchesCondition()
{
    const u32 id = scrGetArg(0);
    const u32 condition = scrGetArg(1);
    const s32 kind = btlResolveEntryChoice(scrGetArg(2));
    s32 first, count;
    FUN_00301a08(kind, reinterpret_cast<s32 *>(reinterpret_cast<u32*>(&first)), reinterpret_cast<s32 *>(reinterpret_cast<u32*>(&count)));
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable)
            && (entry->flags & g_btlCandidateMasks.required) && !(entry->flags & g_btlCandidateMasks.excluded)
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
