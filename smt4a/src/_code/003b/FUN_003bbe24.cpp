/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void scrSetResult(s32 value);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Check the selected range and optional special combatant for either positive status property.
u32 FUN_003bbe24()
{
    struct Selection { u32 count; u32 first; } selection;
    s32 choice = btlResolveEntryChoice(scrGetArg(0));
    FUN_00301a08(choice, reinterpret_cast<s32 *>(&selection.first), reinterpret_cast<s32 *>(&selection.count));
    // These words cannot be added to the shared union at unaligned +0x0a without moving its fields.
    struct PropertyView { u8 prefix[0xac]; s32 first; u32 unkB0; s32 second; };
    for (s32 index = selection.first; index < (s32)(selection.first + selection.count); ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0) {
            const PropertyView *properties = reinterpret_cast<const PropertyView *>(entry);
            s32 value = properties->first;
            if (value <= 0) {
                value = properties->second;
            }
            if (value > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        const PropertyView *properties = reinterpret_cast<const PropertyView *>(entry);
        if (entry != NULL && (properties->first > 0 || properties->second > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
