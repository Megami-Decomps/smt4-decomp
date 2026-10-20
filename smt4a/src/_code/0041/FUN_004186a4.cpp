#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *FUN_001ab940(void);

u8 FUN_004186a4(void)
{
    return FUN_001ab940()->unk8E0 != 0;
}

} /* extern "C" */
