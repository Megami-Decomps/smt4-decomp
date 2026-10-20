#include "shard/Shard004B.h"

extern "C" {

extern s32 FUN_003e46f4(u32 id);

/* Number of unlocked slots: 4 base, +1 for each of four flags 0x7B..0x7E (the first counts 5), capped at 8. */
s32 getUnlockedSlotCount(void)
{
    s32 count = 4;

    if (FUN_003e46f4(0x7B) != 0) {
        count = 5;
    }
    if (FUN_003e46f4(0x7C) != 0) {
        count = count + 1;
    }
    if (FUN_003e46f4(0x7D) != 0) {
        count = count + 1;
    }
    if (FUN_003e46f4(0x7E) != 0) {
        count = count + 1;
    }
    if (count > 8) {
        count = 8;
    }
    return count;
}

} /* extern "C" */
