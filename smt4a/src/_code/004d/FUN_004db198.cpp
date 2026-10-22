/* NON_MATCHING: retail 60 vs built 60 rows; rounded-level calculation and result-id bitfield store scheduling differ. */
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "gamedata/Table05Pair.h"

extern "C" {
const Table05Pair *dataFindSymmetricPair(s8, s8);
const u8 *dataTable5GetEntries(void);
u32 FUN_004dc154(void *, u8, u16);

u32 FUN_004db198(void *context, u32 firstId, u32 secondId, UnitePairEntryIV *output)
{
    const DevilRecordA *first = FUN_00184310(firstId);
    const DevilRecordA *second = FUN_00184310(secondId);
    const Table05Pair *recipe = dataFindSymmetricPair(static_cast<s8>(first->race),
                                                    static_cast<s8>(second->race));
    const u8 *levelBias = dataTable5GetEntries();
    if (first->id != second->id && recipe != NULL) {
        u32 level = (static_cast<u32>(first->level) + second->level + 1) / 2;
        u32 result = FUN_004dc154(context, static_cast<u8>(recipe->unk02),
                                static_cast<u16>(*levelBias + level));
        if (result != first->id && result != second->id && result != 0) {
            // Both games use the same two packed operand ids and result id.
            output->firstId = firstId;
            output->secondId = secondId;
            output->resultId = result;
            return 1;
        }
    }
    return 0;
}
}
