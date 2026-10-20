#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

void partyEntrySetBitsBit4(s32 index)
{
    PartyEntryB *entry = &gameFlagBlockGet()->e[index];

    entry->bits |= 0x10;
}

} /* extern "C" */
