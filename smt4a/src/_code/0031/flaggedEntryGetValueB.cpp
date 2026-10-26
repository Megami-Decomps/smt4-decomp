#include "shard/Shard0031.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {

/* The entry's unk48, or 0 when the entry is inactive. */
u32 flaggedEntryGetValueB(FlaggedEntry *entry)
{
    if (entry->inactive == 0) {
        return entry->unk48;
    }
    return 0;
}

} /* extern "C" */
