#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u32 partyEntryBitsBit1(s32 index)
{
    return (FUN_001ab940()->e[index].bits & 2) >> 1;
}

} /* extern "C" */
