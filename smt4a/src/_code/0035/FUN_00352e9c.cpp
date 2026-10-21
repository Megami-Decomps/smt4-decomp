/* NON_MATCHING: retail tests the enable argument immediately after the getter; compiled code delays CMP until after signed-index and mask computation. */
#include "shard/W5_W5Match7_FlagBanks.h"

// Sets or clears a signed-index bit in the flag-work bank at 0x1670.
extern "C" void FUN_00352e9c(s32 id, s32 enabled)
{
    FlagWorkBanks* flags = gameFlagsGetBlock();
    u32* word = &flags->bitFlags.words[id / 32];
    u32 value = *word;
    u32 mask = 1u << (id % 32);
    if (enabled != 0) {
        value |= mask;
    } else {
        value &= ~mask;
    }
    *word = value;
}
