/* NON_MATCHING: as the smt4a twin FUN_004dc3b4: retail leaves the rejected case-4 pair through the shared exit (`mov r7, #0; b` to `mov r0, r7`), the build returns 0 directly (`moveq r0, #0`). */
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
        accepted = 1;
        break;
    }
    }
    return accepted;
}
}
