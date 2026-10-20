#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u32 partyEntryBitsBit3(s32 index)
{
    return (FUN_001ab940()->e[index].bits & 8) >> 3;
}

} /* extern "C" */
