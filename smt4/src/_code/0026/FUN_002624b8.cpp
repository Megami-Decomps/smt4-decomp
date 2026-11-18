/* Tail call into the function that follows, retaining the result output and status. */
#include "gamedata/FusionCandidateFilter.h"
#include "gamedata/UnitStats.h"

extern "C" u32 FUN_002624b8(FusionCandidateFilter *owner, StatBlock *first,
                            StatBlock *second, PackedIdentifiers *result)
{
    return FUN_002624c4(owner, first->id, second->id, result);
}
