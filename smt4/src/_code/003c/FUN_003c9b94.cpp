#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/PackedIdentifiers.h"
#include "shard/W9_W9Match8_WorkRecords.h"

struct LeveledLists;

extern "C" {
u8 fusionClassifyPair(void *owner, u16 firstId, u16 secondId);
u32 FUN_003c8ffc(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output);
u32 fusionResolveRaceRulePair(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output);
const DevilCombinationTableEntryPrefixIV *dataTable05FindByPriorityAndKey(
    u32 firstRace, u32 secondRace);

/* Fuses a pair through the race-combination table (classification 4); written as its own function
 * like the other classifications' resolvers: retail keeps its result copy (`mov r7, #0` on the
 * rejected pair) in the shared exit. */
static __inline u32 fusionResolveTablePair(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output)
{
    NkmBaseRecord *first = nkmBaseGetRecord(firstId);
    NkmBaseRecord *second = nkmBaseGetRecord(secondId);
    const DevilCombinationTableEntryPrefixIV *entry =
        dataTable05FindByPriorityAndKey(first->race, second->race);
    if (firstId == secondId || entry == NULL)
        return 0;
    output->firstIdentifier = firstId;
    output->secondIdentifier = secondId;
    output->resultIdentifier = entry->result;
    return 1;
}

u32 FUN_003c9b94(LeveledLists *owner, u16 firstId, u16 secondId,
                 PackedIdentifiers *output)
{
    u32 accepted = 0;
    switch (fusionClassifyPair(owner, firstId, secondId)) {
    case 0:
        break;
    case 1:
        accepted = FUN_003c8ffc(owner, firstId, secondId, output);
        break;
    case 2:
    case 3:
        accepted = fusionResolveRaceRulePair(owner, firstId, secondId, output);
        break;
    case 4:
        accepted = fusionResolveTablePair(owner, firstId, secondId, output);
        break;
    }
    return accepted;
}
}
