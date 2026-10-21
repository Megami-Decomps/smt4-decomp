/* NON_MATCHING: signed division/modulo temporaries and mask/word registers differ, and the enabled comparison is scheduled later. */
#include "shard/W5_W5Match7_FlagBanks.h"

struct GameFlagBitsView {
    u8 unk0000[0x14f8];
    u32 words[1]; // 0x14f8: beginning of the indexed flag bank
};

extern "C" {
// Set or clear a positive-indexed game flag in the save block's bit bank.
void gameFlagsSetIndexedBit(s32 flag, s32 enabled)
{
    FlagWorkBanks *block = gameFlagsGetBlock();
    if (flag > 0) {
        GameFlagBitsView *flags = (GameFlagBitsView *)block;
        u32 *word = &flags->words[flag / 32];
        u32 mask = 1u << (flag % 32);
        if (enabled != 0) {
            *word |= mask;
        } else {
            *word &= ~mask;
        }
    }
}
}
