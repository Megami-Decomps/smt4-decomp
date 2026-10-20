#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 partyEntryBitsBit4(s32 index)
{
    return (gameFlagBlockGet()->e[index].bits & 0x10) >> 4;
}

} /* extern "C" */
