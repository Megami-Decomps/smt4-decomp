#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

void partyEntrySetBit0AndFlag80(s32 index)
{
    PartyEntryB *entry = &gameFlagBlockGet()->e[index];

    entry->bits |= 1;
    entry->flags |= 0x80;
}

} /* extern "C" */
