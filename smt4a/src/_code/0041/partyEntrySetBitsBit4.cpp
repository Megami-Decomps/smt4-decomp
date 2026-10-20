#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

void partyEntrySetBitsBit4(s32 index)
{
    PartyEntryB *entry = &FUN_001ab940()->e[index];

    entry->bits |= 0x10;
}

} /* extern "C" */
