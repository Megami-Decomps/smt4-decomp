#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u8 partyEntryGetByte1(s32 index)
{
    return FUN_001ab940()->e[index].byte1;
}

} /* extern "C" */
