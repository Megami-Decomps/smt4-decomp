#include "shard/Shard0033.h"

extern "C" {

extern void *FUN_003e4d68(u32 index);
extern u32 FUN_00187168(void *entry);

/* Counts how many of the 12 slots FUN_00187168 reports as non-zero. */
s32 FUN_0033132c(void)
{
    s32 count = 0;
    u32 i;

    for (i = 0; (s32)i < 0xC; i++) {
        if (FUN_00187168(FUN_003e4d68(i & 0xFFFF)) != 0) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
