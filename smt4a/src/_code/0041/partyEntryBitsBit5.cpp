#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 partyEntryBitsBit5(s32 index)
{
    return (gameFlagBlockGet()->e[index].bits & 0x20) >> 5;
}

} /* extern "C" */
