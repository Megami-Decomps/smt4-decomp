/* NON_MATCHING: only the operand order inside the second 64-bit mask test's two ANDs differs (retail flags-first with an ldm mask load; the build mask-first). */
#include "battle/BtlMainAccess.h"
#include "util/CalleeContracts.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 FUN_003a8928()
{
    s32 kind = scrGetArg(0);
    s32 property = 0;
    if (kind == 0) {
        property = 7;
    } else if (kind == 1) {
        property = 8;
    } else if (kind == 2) {
        property = 10;
    } else if (kind == 3) {
        property = 11;
    }
    s32 first, count;
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    FUN_00301a08(choice, &first, &count);
    // These words cannot enter the shared union at unaligned +0x0a without shifting its fields.
    struct PropertyView { u8 prefix[0x74]; s32 values[12]; };
    for (s32 index = first; index < count + first; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        const PropertyView *properties = reinterpret_cast<const PropertyView *>(entry);
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && properties->values[property] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        const PropertyView *properties = reinterpret_cast<const PropertyView *>(entry);
        if (entry != NULL && properties->values[property] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
