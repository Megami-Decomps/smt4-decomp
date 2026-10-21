/* NON_MATCHING: default compiler recognizes each inner zero loop as __aeabi_memclr4; retail retains a two-way unrolled scalar loop with separate induction counters. */
#include "common.h"

struct SixBankWork {
    u8 unk000[0x26c]; // 0x000
    u32 counts[6];      // 0x26c
    u32 values[6][64];  // 0x284
};

extern "C" {
extern SixBankWork DAT_004bce8c;

// Clears each of the six bank counts and its sixty-four values.
void FUN_001954b0()
{
    for (s32 bank = 0; bank < 6; ++bank) {
        DAT_004bce8c.counts[bank] = 0;
        for (s32 index = 0; index < 64; ++index) {
            DAT_004bce8c.values[bank][index] = 0;
        }
    }
}
}
