#include "gamedata/PackedIdentifiers.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

struct RaceFusionRecipe {
    u16 key;
    u16 result;
};
extern "C" {
u8 fusionClassifyPair(void *context, u16 firstId, u16 secondId);
u32 FUN_004db198(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output);
u32 fusionResolveRaceRulePair(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output);
RaceFusionRecipe *dataTable05FindByPriorityAndKey(u32, u32);
}

/* Fuses a pair through the race-combination table (classification 4); written as its own function
 * like the other classifications' resolvers: retail keeps its result copy (`mov r7, #0` on the
 * rejected pair) in the shared exit. */
static __inline u32 fusionResolveTablePair(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output)
{
    const NkmBaseRecordA *first = nkmBaseGetRecord(firstId);
    const NkmBaseRecordA *second = nkmBaseGetRecord(secondId);
    const RaceFusionRecipe *recipe = dataTable05FindByPriorityAndKey(first->race, second->race);
    if (firstId == secondId || recipe == NULL)
        return 0;
    output->firstIdentifier = firstId;
    output->secondIdentifier = secondId;
    output->resultIdentifier = recipe->result;
    return 1;
}

extern "C" u32 FUN_004dc3b4(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output)
{
    u32 accepted = 0;
    switch (fusionClassifyPair(context, firstId, secondId)) {
    case 0:
        break;
    case 1:
        accepted = FUN_004db198(context, firstId, secondId, output);
        break;
    case 2:
    case 3:
        accepted = fusionResolveRaceRulePair(context, firstId, secondId, output);
        break;
    case 4:
        accepted = fusionResolveTablePair(context, firstId, secondId, output);
        break;
    }
    return accepted;
}
