/* NON_MATCHING: the packed pair is read/written as one ldrd/strd u64 in retail (separate word accesses here) and the table-entries pointer is copied to r1 before the id compare; lookup, rounded level and saved registers match. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "gamedata/PackedIdentifiers.h"

struct LeveledLists;

extern "C" {
const u8 *dataFindSymmetricPair(u32 firstRace, u32 secondRace);
const u8 *dataTable05Sub0GetEntries();
u16 FUN_003c9948(LeveledLists *owner, s32 race, u8 level);

u32 FUN_003c8ffc(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output)
{
    DevilSortRecord *first = devilGetRecord(firstId);
    DevilSortRecord *second = devilGetRecord(secondId);
    const u8 *pair = dataFindSymmetricPair(first->race, second->race);
    const u8 *table = dataTable05Sub0GetEntries();
    if (first->id == second->id || pair == NULL)
        return 0;

    u32 level = first->level + second->level;
    if ((first->level + second->level) % 2 == 1)
        ++level;
    u16 result = FUN_003c9948(owner, pair[2], table[0] + level / 2);
    if (first->id == result || second->id == result || result == 0)
        return 0;

    output->firstIdentifier = firstId;
    output->secondIdentifier = secondId;
    output->resultIdentifier = result;
    return 1;
}
}
