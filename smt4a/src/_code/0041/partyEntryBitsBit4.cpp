#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u32 partyEntryBitsBit4(s32 index)
{
    return (FUN_001ab940()->e[index].bits & 0x10) >> 4;
}

} /* extern "C" */
