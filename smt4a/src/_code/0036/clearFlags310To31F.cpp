#include "shard/Shard0036.h"

extern "C" {

extern void FUN_003fd63c(u32 index, s32 value, s32 flag);

void clearFlags310To31F(void)
{
    s32 i;

    for (i = 0; i < 0x10; i++) {
        FUN_003fd63c(i + 0x310, 0, 1);
    }
}

} /* extern "C" */
