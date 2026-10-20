#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u32 partyEntryFlagsBit3(s32 index)
{
    return (FUN_001ab940()->e[index].flags & 8) >> 3;
}

} /* extern "C" */
