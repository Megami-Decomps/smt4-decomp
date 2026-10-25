/* NON_MATCHING: fusion-mode dispatch and packed-result bitfield stores differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

struct RaceFusionRecipe {
    u16 key;
    u16 result;
};
extern "C" {
u32 FUN_004da980(u32);
u32 FUN_004db198(u32, u32, u32, UnitePairEntryIV *);
u32 FUN_004db2b8(u32, u32, u32, UnitePairEntryIV *);
RaceFusionRecipe *dataTable05FindByPriorityAndKey(u32, u32);
}

extern "C" u32 FUN_004dc3b4(u32 context, u32 first, u32 second, UnitePairEntryIV *pair)
{
    u32 result = 0;
    switch (FUN_004da980(context)) {
    case 1:
        result = FUN_004db198(context, first, second, pair);
        break;
    case 2:
    case 3:
        result = FUN_004db2b8(context, first, second, pair);
        break;
    case 4:
        {
            const DevilRecordA *firstRecord = FUN_00184310(first);
            const DevilRecordA *secondRecord = FUN_00184310(second);
            const RaceFusionRecipe *recipe = dataTable05FindByPriorityAndKey(firstRecord->race, secondRecord->race);
            if (second != first && recipe != NULL) {
                pair->firstId = first;
                pair->secondId = second;
                pair->resultId = recipe->result;
                result = 1;
            }
        }
        break;
    }
    return result;
}
