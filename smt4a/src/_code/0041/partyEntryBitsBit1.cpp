#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 partyEntryBitsBit1(s32 index)
{
    return (gameFlagBlockGet()->e[index].bits & 2) >> 1;
}

} /* extern "C" */
