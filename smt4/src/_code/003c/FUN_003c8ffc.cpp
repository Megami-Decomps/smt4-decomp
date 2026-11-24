/* NON_MATCHING: the build moves the level-bias pointer to r1 and schedules the id check and recipe/level loads differently. The rounded level and packed result stores match. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "camp/Unite/UniteWork.h"
#include "gamedata/PackedIdentifiers.h"

struct LeveledLists;

extern "C" {
const u8 *dataFindSymmetricPair(u32 firstRace, u32 secondRace);
const u8 *dataTable05Sub0GetEntries();
u16 fusionFindClosestLevelEntry(LeveledLists *owner, s32 race, u8 level);

u32 FUN_003c8ffc(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output)
{
    NkmBaseRecord *first = nkmBaseGetRecord(firstId);
    NkmBaseRecord *second = nkmBaseGetRecord(secondId);
    const u8 *pair = dataFindSymmetricPair(first->race, second->race);
    const u8 *table = dataTable05Sub0GetEntries();
    if (first->id == second->id || pair == NULL)
        return 0;

    u32 level = first->level + second->level;
    if ((first->level + second->level) % 2 == 1)
        ++level;
    u16 result = fusionFindClosestLevelEntry(owner, pair[2], table[0] + level / 2);
    if (first->id == result || second->id == result || result == 0)
        return 0;

    output->firstIdentifier = firstId;
    output->secondIdentifier = secondId;
    output->resultIdentifier = result;
    return 1;
}
}
