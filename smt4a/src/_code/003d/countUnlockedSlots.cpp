#include "shard/Shard003D.h"

extern "C" {

extern u8 FUN_003e46f4(u32 bit);

/* Counts the unlocked slots: 4 (5 when 0x77 is set) plus one for each of 0x78..0x7A, at most 8. */
s32 countUnlockedSlots(void)
{
    s32 count = 4;

    if (FUN_003e46f4(0x77) != 0) {
        count = 5;
    }
    if (FUN_003e46f4(0x78) != 0) {
        count++;
    }
    if (FUN_003e46f4(0x79) != 0) {
        count++;
    }
    if (FUN_003e46f4(0x7A) != 0) {
        count++;
    }
    if (count > 8) {
        count = 8;
    }
    return count;
}

} /* extern "C" */
