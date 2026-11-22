#include "shard/Shard004C.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

u8 hasAnyOf3DC2(u32 mask)
{
    if (mask & 0x3DC2) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
