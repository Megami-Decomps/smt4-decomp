#include "shard/Shard0041.h"
#include "shard/FUN_004186e0.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u16 FUN_004186e0(void)
{
    return gameFlagBlockGet()->unk8E0;
}

} /* extern "C" */
