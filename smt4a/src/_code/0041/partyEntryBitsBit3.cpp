#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 partyEntryBitsBit3(s32 index)
{
    return (gameFlagBlockGet()->e[index].bits & 8) >> 3;
}

} /* extern "C" */
