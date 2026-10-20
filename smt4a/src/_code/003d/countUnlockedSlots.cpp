#include "shard/Shard003D.h"

extern "C" {

extern u8 gameDataFlagTestBit(u32 bit);

/* Counts the unlocked slots: 4 (5 when 0x77 is set) plus one for each of 0x78..0x7A, at most 8. */
s32 countUnlockedSlots(void)
{
    s32 count = 4;

    if (gameDataFlagTestBit(0x77) != 0) {
        count = 5;
    }
    if (gameDataFlagTestBit(0x78) != 0) {
        count++;
    }
    if (gameDataFlagTestBit(0x79) != 0) {
        count++;
    }
    if (gameDataFlagTestBit(0x7A) != 0) {
        count++;
    }
    if (count > 8) {
        count = 8;
    }
    return count;
}

} /* extern "C" */
