#include "shard/Shard0041.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u8 rosterHasLeader(void)
{
    return gameFlagBlockGet()->unk8E0 != 0;
}

} /* extern "C" */
