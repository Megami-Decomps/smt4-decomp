#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

void partyEntrySetBit0AndFlag80(s32 index)
{
    PartyEntryB *entry = &FUN_001ab940()->e[index];

    entry->bits |= 1;
    entry->flags |= 0x80;
}

} /* extern "C" */
