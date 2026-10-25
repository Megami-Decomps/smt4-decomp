#include "shard/Shard0041.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 partyEntryFlagsBit1(s32 index)
{
    return (gameFlagBlockGet()->e[index].flags & 2) >> 1;
}

} /* extern "C" */
