/* NON_MATCHING: quotient/remainder registers and enabled-condition scheduling differ from retail. */
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
// Set or clear one bit in the first game flag bank.
void FUN_00352e54(s32 bit, s32 enabled)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    s32 index = bit / 32;
    u32 value = flags->first[index];
    u32 mask = 1u << (bit % 32);
    if (enabled != 0) {
        value |= mask;
    } else {
        value &= ~mask;
    }
    flags->first[index] = value;
}
}
