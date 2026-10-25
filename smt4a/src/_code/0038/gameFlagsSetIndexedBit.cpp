/* NON_MATCHING: retail evaluates the enabled test before the word/mask arithmetic and builds the mask in r2 after loading the word; scheduling and register assignment differ. */
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
        u32 bits = *word;
        u32 mask = 1u << (flag % 32);
        if (enabled != 0) {
            bits |= mask;
        } else {
            bits &= ~mask;
        }
        *word = bits;
    }
}
}
