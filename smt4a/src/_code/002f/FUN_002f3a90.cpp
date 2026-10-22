#include "gamedata/PackedIdentifiers.h"

extern "C" u32 FUN_004a8750(u32 identifier, s32 mode, s32 first, s32 second, s32 third);

// Sum the query results for identifiers whose packed state is active.
extern "C" u32 FUN_002f3a90(const PackedIdentifiers *identifiers)
{
    u32 result = 0;
    if (identifiers->firstState == 3)
        result = FUN_004a8750(identifiers->firstIdentifier, 1, 0, 0, 0);
    if (identifiers->secondState == 3)
        result += FUN_004a8750(identifiers->secondIdentifier, 1, 0, 0, 0);
    return result;
}