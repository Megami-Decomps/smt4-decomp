#include "gamedata/PackedIdentifiers.h"

extern "C" u32 FUN_0029ce60(u32 identifier, s32 mode, s32 first, s32 second, s32 third);

// Sum the query results for identifiers whose packed state is active.
extern "C" u32 FUN_0029e6f0(const PackedIdentifiers *identifiers)
{
    u32 result = 0;
    if (identifiers->firstState == 3)
        result = FUN_0029ce60(identifiers->firstIdentifier, 1, 0, 0, 0);
    if (identifiers->secondState == 3)
        result += FUN_0029ce60(identifiers->secondIdentifier, 1, 0, 0, 0);
    return result;
}
