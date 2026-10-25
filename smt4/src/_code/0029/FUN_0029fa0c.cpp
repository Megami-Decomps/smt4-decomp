/* NON_MATCHING: the zero used to initialize ingredient ownership and counters is in r0 instead of retail's r1. */
#include "gamedata/FusionRecipe.h"
#include "gamedata/DevilRecord.h"
#include "shard/W6_W6Match2_RecordValue.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
extern "C" {
PartyDamageSlotsIV *gameGetSlotTable(void);
u32 dataTable05Sub4GetCount(void);
const FusionRecipe *dataTable54FindById(u32 index);
s32 gameFlagIsSet(u32 flag);
bool gameRecordCopy(u32 id, RecordValue *record);
s32 gameCountUnits(void);
GameUnitSortRecord *gameGetUnitRecord(u32 slot);
s32 itemGetFlagBit1(u16 id);

u16 FUN_0029fa0c(u32 context, u16 *output)
{
    // The result identifier follows the recovered ingredients-only FusionRecipe prefix.
    struct CompleteRecipeView { FusionRecipe recipe; u16 result; };
    typedef char CompleteRecipeResultOffset[offsetof(CompleteRecipeView, result) == 0x1A ? 1 : -1];
    u16 written = 0;
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    for (u16 index = 0; index < dataTable05Sub4GetCount(); ++index) {
        const CompleteRecipeView *entry = (const CompleteRecipeView *)dataTable54FindById(index);
        if (!entry)
            continue;
        const DevilRecord *devil = (const DevilRecord *)devilGetRecord(entry->result);
        if (devil->specialFusion.requiredFlag && !gameFlagIsSet(devil->specialFusion.requiredFlag))
            continue;
        u16 prerequisite = devil->specialFusion.prerequisite;
        if (prerequisite & 1) {
            RecordValue record;
            if (prerequisite & ~1) {
                if (!gameRecordCopy(prerequisite >> 1, &record) || !(record.eligibility.flags & 0xFC))
                    continue;
            } else {
                if (!gameRecordCopy(devil->header.id, &record) || !(record.eligibility.flags & 0xFC))
                    continue;
            }
        }
        if (!(devil->fusion.flags & 1))
            continue;
        u16 owned[12] = {0};
        u16 ingredientCount = 0;
        for (s32 ingredient = 0; ingredient < 12; ++ingredient) {
            u16 id = entry->recipe.ingredients[ingredient];
            if (id) {
                for (s32 slot = 0; slot < gameCountUnits(); ++slot) {
                    if (slots->stock[slot] >= 0 && gameGetUnitRecord(slots->stock[slot])->id == entry->recipe.ingredients[ingredient]) {
                        owned[ingredient] = 1;
                        break;
                    }
                }
                if (!owned[ingredient] && itemGetFlagBit1(entry->recipe.ingredients[ingredient]))
                    owned[ingredient] = 1;
                ++ingredientCount;
            }
        }
        if (arrayContainsU16(owned, ingredientCount, 1))
            output[written++] = index;
    }
    return written;
}
}
