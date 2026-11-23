/* NON_MATCHING: retail keeps the bias pointer in r0 through the id check, then schedules the level, bias and recipe loads differently. The packed result stores match. */
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/PackedIdentifiers.h"
#include "gamedata/DataTableAccess_Table05Pair.h"

extern "C" {
const u8 *dataTable5GetEntries(void);
u16 fusionFindClosestLevelEntry(void *, u8, u16);

/* Finds the nearest valid result of the two demons' race recipe. */
u32 FUN_004db198(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output)
{
    const NkmBaseRecordA *first = nkmBaseGetRecord(firstId);
    const NkmBaseRecordA *second = nkmBaseGetRecord(secondId);
    const Table05Pair *recipe = dataFindSymmetricPair(first->race, second->race);
    const u8 *levelBias = dataTable5GetEntries();
    if (first->id != second->id && recipe != NULL) {
        u32 level = first->level + second->level;
        if (level & 1)
            ++level;
        u16 result = fusionFindClosestLevelEntry(context, recipe->result, *levelBias + level / 2);
        if (result != first->id && result != second->id && result != 0) {
            output->firstIdentifier = firstId;
            output->secondIdentifier = secondId;
            output->resultIdentifier = result;
            return 1;
        }
    }
    return 0;
}
} /* extern "C" */
