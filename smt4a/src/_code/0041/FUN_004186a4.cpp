#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u8 FUN_004186a4(void)
{
    return gameFlagBlockGet()->unk8E0 != 0;
}

} /* extern "C" */
