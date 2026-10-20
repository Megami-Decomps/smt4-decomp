#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u32 partyEntryFlagsBit1(s32 index)
{
    return (FUN_001ab940()->e[index].flags & 2) >> 1;
}

} /* extern "C" */
