#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u32 partyEntryBitsBit5(s32 index)
{
    return (FUN_001ab940()->e[index].bits & 0x20) >> 5;
}

} /* extern "C" */
