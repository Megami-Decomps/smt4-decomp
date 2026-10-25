/* NON_MATCHING: save-entry/count stack slots and the ingredient-presence zero scratch register differ. */
#include "shard/W6_W6Match8_DevilRecordA.h"

struct FusionRecipeEntry {
    u16 id;
    u16 ingredients[12];
    u16 resultId;
};
struct FusionSavedDemon {
    u8 unk00[0x36];
    u16 flags;
    u8 unk38[0x18];
};
struct FusionPartySlots {
    u8 unk0000[0x1c88];
    s8 slots[24];
};
struct FusionSlotRecord {
    u8 unk00[0x62];
    u16 id;
};

extern "C" {
FusionPartySlots *gameGetSlotTable();
u32 dataTable5Count();
FusionRecipeEntry *contentEntryFindById(u32 index);
s32 gameFlagIsSet(u32 flag);
u32 gameDataCopySaveEntry(u32 id, void *out);
s32 gameSlotTableFindFree();
FusionSlotRecord *gameGetSlotRecord(s32 slot);
s32 FUN_002a4b28(u16 id);
u32 arrayContainsU16(const u16 *values, s32 count, u32 value);

u32 fusionListAvailableSpecialRecipes(void *context, u16 *recipes)
{
    u16 count = 0;
    FusionPartySlots *party = gameGetSlotTable();
    for (u16 index = 0; index < dataTable5Count(); ++index) {
        FusionRecipeEntry *recipe = contentEntryFindById(index);
        if (recipe == NULL)
            continue;
        const DevilRecordA *result = FUN_00184310(recipe->resultId);
        if (result->unlockFlag != 0 && !gameFlagIsSet(result->unlockFlag))
            continue;
        if (result->saveRequirement & 1) {
            FusionSavedDemon saved;
            if (result->saveRequirement & ~1u) {
                if (!gameDataCopySaveEntry(result->saveRequirement >> 1, &saved) || !(saved.flags & 0xfc))
                    continue;
            } else if (!gameDataCopySaveEntry(result->id, &saved) || !(saved.flags & 0xfc)) {
                continue;
            }
        }
        if (!(result->flags & 1))
            continue;
        u16 present[12] = { 0 };
        u16 ingredientCount = 0;
        for (s32 ingredient = 0; ingredient < 12; ++ingredient) {
            if (recipe->ingredients[ingredient] == 0)
                continue;
            for (s32 slot = 0; slot < gameSlotTableFindFree(); ++slot) {
                if (party->slots[slot] >= 0 &&
                    gameGetSlotRecord(party->slots[slot])->id == recipe->ingredients[ingredient]) {
                    present[ingredient] = 1;
                    break;
                }
            }
            if (present[ingredient] == 0 && FUN_002a4b28(recipe->ingredients[ingredient]))
                present[ingredient] = 1;
            ++ingredientCount;
        }
        if (arrayContainsU16(present, ingredientCount, 1))
            recipes[count++] = index;
    }
    return count;
}
}
