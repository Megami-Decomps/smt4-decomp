/* NON_MATCHING: jump table now matches (explicit case 0); register assignment of the parameters, a stray sxth on the second id and the paired bitfield stores differ. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/PackedIdentifiers.h"
#include "shard/W9_W9Match8_WorkRecords.h"

struct LeveledLists;

extern "C" {
u8 FUN_003c8c2c(void *owner, u16 firstId, u16 secondId);
u32 FUN_003c8ffc(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output);
u32 FUN_003c911c(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output);
const DevilCombinationTableEntryPrefixIV *dataTable05FindByPriorityAndKey(
    u32 firstRace, u32 secondRace);

u32 FUN_003c9b94(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output)
{
    u32 accepted = 0;
    switch (FUN_003c8c2c(owner, firstId, secondId)) {
    case 0:
        break;
    case 1:
        accepted = FUN_003c8ffc(owner, firstId, secondId, output);
        break;
    case 2:
    case 3:
        accepted = FUN_003c911c(owner, firstId, secondId, output);
        break;
    case 4:
    {
        DevilSortRecord *first = devilGetRecord(firstId);
        DevilSortRecord *second = devilGetRecord(secondId);
        const DevilCombinationTableEntryPrefixIV *entry =
            dataTable05FindByPriorityAndKey(first->race, second->race);
        if (firstId == secondId || entry == NULL)
            break;
        output->firstIdentifier = firstId;
        output->resultIdentifier = entry->result;
        output->secondIdentifier = secondId;
        accepted = 1;
        break;
    }
    }
    return accepted;
}
}
