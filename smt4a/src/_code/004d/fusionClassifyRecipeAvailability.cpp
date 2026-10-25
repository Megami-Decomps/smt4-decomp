#include "gamedata/FusionRecipe.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include <string.h>

extern "C" {
GameSlotTable *gameGetSlotTable(void);
const FusionRecipe *contentEntryFindById(u32);
s32 gameSlotTableFindFree(void);
s32 bitsAt60Test(const SlotRecord *, u32);
s32 FUN_002a4b28(u16);
s32 arrayContainsU16(const u16 *, s32, u32);

// Classify recipe ingredients as held or summonable, then test the collected availability list.
u32 fusionClassifyRecipeAvailability(u32 unused, u32 recipeId, u16 *statuses)
{
    struct StockView { u8 prefix[0x1C88]; s8 slots[24]; };
    s32 count = 0;
    StockView *stock = reinterpret_cast<StockView *>(gameGetSlotTable());
    const FusionRecipe *recipe = contentEntryFindById(recipeId);
    if (recipe == NULL)
        return 0;
    memset(statuses, 0, 12 * sizeof(*statuses));
    for (s32 i = 0; i < 12; ++i) {
        if (recipe->ingredients[i] != 0) {
            for (s32 slot = 0; slot < gameSlotTableFindFree(); ++slot) {
                if (stock->slots[slot] >= 0) {
                    SlotRecord *record = gameGetSlotRecord(stock->slots[slot]);
                    if (!bitsAt60Test(record, 10)) {
                        u32 heldId = record->entryId;
                        u32 ingredientId = recipe->ingredients[i];
                        if (heldId == ingredientId) {
                            statuses[i] = 1;
                            break;
                        }
                    }
                }
            }
            if (statuses[i] == 0 && FUN_002a4b28(recipe->ingredients[i]))
                statuses[i] = 2;
            ++count;
        }
    }
    return arrayContainsU16(statuses, count, 0) ^ 1;
}
}
