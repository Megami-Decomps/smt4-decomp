/* NON_MATCHING: the referenced choice folds addressing and selected-zero initialization/saved registers differ; O2 may change CSE/allocation. */
#include "AsdSDK/AsdDebugHooks.h"
#include "shard/W6_W6Match7_WeightedChoices.h"

extern "C" {
u32 aocEntryGetKind(u32);
const WeightedAlternateRecord* aocRecordLookup83(u32);
u32 randRange(s32);
void bitTableSetFlag(u32, u32, u32);

/* Resolve a weighted item kind while retaining its optional flag/history bookkeeping. */
u32 resolveWeightedItemChoice(u32 id, u32 flagGroup, u32 flagBit, u32 recordChoice)
{
    if (aocEntryGetKind(id) != 9) {
        if (flagGroup != 0xFFFF) {
            bitTableSetFlag(flagGroup, flagBit, 1);
        }
        return id;
    }
    const WeightedAlternateRecord* record = aocRecordLookup83(id);
    if (record == NULL) {
        return 0;
    }
    s32 total = 0;
    for (s32 slot = 0; slot < 5; ++slot) {
        if (record->choices[slot].id != 0) {
            total += record->choices[slot].weight;
        }
    }
    if (total == 0) {
        return 0;
    }
    const s32 roll = static_cast<s32>(randRange(static_cast<u16>(total - 1)));
    s32 cumulative = 0;
    u32 selected = 0;
    for (s32 slot = 0; slot < 5; ++slot) {
        const WeightedAlternateChoice& choice = record->choices[slot];
        if (choice.id == 0) {
            continue;
        }
        cumulative += choice.weight;
        if (roll <= cumulative) {
            selected = choice.id;
            if (flagGroup != 0xFFFF) {
                bitTableSetFlag(flagGroup, flagBit, 1);
                asdDebugHookWords3(flagGroup, id, slot);
            }
            if (recordChoice != 0) {
                asdDebugHookWords3(id, slot, 1);
            }
            break;
        }
    }
    return selected;
}
} // extern "C"
