/* NON_MATCHING: Average-level testing, parent/result bitfield masks, and value registers differ. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W5_W5Match2_UniteWork.h"

struct LeveledLists;

extern "C" {
const u8 *dataFindSymmetricPair(u32 firstRace, u32 secondRace);
const u8 *dataTable05Sub0GetEntries();
u16 FUN_003c9948(LeveledLists *owner, s32 race, u8 level);

u32 FUN_003c8ffc(LeveledLists *owner, u16 firstId, u16 secondId,
                 UnitePairEntryIV *output)
{
    DevilSortRecord *first = devilGetRecord(firstId);
    DevilSortRecord *second = devilGetRecord(secondId);
    const u8 *pair = dataFindSymmetricPair(first->race, second->race);
    const u8 *table = dataTable05Sub0GetEntries();
    if (first->id == second->id || pair == NULL)
        return 0;

    s32 level = first->level + second->level;
    if (level % 2 != 0)
        ++level;
    u16 result = FUN_003c9948(owner, pair[2], table[0] + level / 2);
    if (first->id == result || second->id == result || result == 0)
        return 0;

    output->firstId = firstId;
    output->secondId = secondId;
    output->resultId = result;
    return 1;
}
}
