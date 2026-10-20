#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the signed byte at 0x1 of the global at 0x5C0AA0. */
s32 nngxCheckVramBank(void)
{
    return DAT_005c0aa0.unk01;
}

} /* extern "C" */
