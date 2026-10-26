/* NON_MATCHING: jump table, u16 parameters, callee contracts and the packed-pair field stores match; the case-4 output words are stored separately (retail ldrd/strd) and callee-saved register roles differ. */
#include "gamedata/PackedIdentifiers.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

struct RaceFusionRecipe {
    u16 key;
    u16 result;
};
extern "C" {
u8 FUN_004da980(void *context, u16 firstId, u16 secondId);
u32 FUN_004db198(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output);
u32 FUN_004db2b8(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output);
RaceFusionRecipe *dataTable05FindByPriorityAndKey(u32, u32);
}

extern "C" u32 FUN_004dc3b4(void *context, u16 firstId, u16 secondId, PackedIdentifiers *output)
{
    u32 accepted = 0;
    switch (FUN_004da980(context, firstId, secondId)) {
    case 0:
        break;
    case 1:
        accepted = FUN_004db198(context, firstId, secondId, output);
        break;
    case 2:
    case 3:
        accepted = FUN_004db2b8(context, firstId, secondId, output);
        break;
    case 4: {
        const DevilRecordA *first = FUN_00184310(firstId);
        const DevilRecordA *second = FUN_00184310(secondId);
        const RaceFusionRecipe *recipe = dataTable05FindByPriorityAndKey(first->race, second->race);
        if (firstId != secondId && recipe != NULL) {
            output->firstIdentifier = firstId;
            output->secondIdentifier = secondId;
            output->resultIdentifier = recipe->result;
            accepted = 1;
        } else {
            accepted = 0;
        }
        break;
    }
    }
    return accepted;
}
