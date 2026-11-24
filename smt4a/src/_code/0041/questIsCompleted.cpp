#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u32 questIsCompleted(s32 index)
{
    return (gameFlagBlockGet()->e[index].flags & 8) >> 3;
}

} /* extern "C" */
