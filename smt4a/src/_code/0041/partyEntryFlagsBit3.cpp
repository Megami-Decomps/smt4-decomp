#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 partyEntryFlagsBit3(s32 index)
{
    return (gameFlagBlockGet()->e[index].flags & 8) >> 3;
}

} /* extern "C" */
