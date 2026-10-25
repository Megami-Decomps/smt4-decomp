#include "shard/W5_W5Match7_FlagBanks.h"

// Sets or clears a signed-index bit in the flag-work bank at 0x1670.
extern "C" void gameFlagsWriteBankBit(s32 id, s32 enabled)
{
    FlagWorkBanks* flags = gameFlagsGetBlock();
    s32 word = id / 32;
    s32 shift = id % 32;

    if (enabled != 0) {
        flags->bitFlags.words[word] |= 1 << shift;
    } else {
        flags->bitFlags.words[word] &= ~(1 << shift);
    }
}
