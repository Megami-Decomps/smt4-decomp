#include "gamedata/PackedIdentifiers.h"

extern "C" u32 compendiumComputeSummonCost(u32 identifier, s32 mode, s32 first, s32 second, s32 third);

// Sum the query results for identifiers whose packed state is active.
extern "C" u32 FUN_0029e6f0(const PackedIdentifiers *identifiers)
{
    u32 result = 0;
    if (identifiers->firstState == 3)
        result = compendiumComputeSummonCost(identifiers->firstIdentifier, 1, 0, 0, 0);
    if (identifiers->secondState == 3)
        result += compendiumComputeSummonCost(identifiers->secondIdentifier, 1, 0, 0, 0);
    return result;
}
