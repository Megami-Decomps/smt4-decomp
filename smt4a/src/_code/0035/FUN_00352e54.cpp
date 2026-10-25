#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
// Set or clear one bit in the first game flag bank.
void FUN_00352e54(s32 bit, s32 enabled)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    s32 word = bit / 32;
    s32 shift = bit % 32;
    if (enabled != 0) {
        flags->first[word] |= 1 << shift;
    } else {
        flags->first[word] &= ~(1 << shift);
    }
}
}
