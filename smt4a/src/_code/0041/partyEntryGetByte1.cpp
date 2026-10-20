#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u8 partyEntryGetByte1(s32 index)
{
    return gameFlagBlockGet()->e[index].byte1;
}

} /* extern "C" */
