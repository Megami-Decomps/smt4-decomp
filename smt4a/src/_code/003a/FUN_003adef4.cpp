/* NON_MATCHING: aliased flag selection and word-mask branch ordering differ. */
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
// Normalize related map identifiers before changing their shared persistent flag.
void FUN_003adef4(s32 id, s32 enabled)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    if (id == 0x10 || id == 0x11) id = 8;
    else if (id == 0x12 || id == 0x13) id = 12;
    else if (id == 0x2f || id == 0x33) id = 0x2b;
    else if (id == 0x30 || id == 0x34) id = 0x2c;
    else if (id == 0x31 || id == 0x35) id = 0x2d;
    else if (id == 0x32 || id == 0x36) id = 0x2e;
    else if (id == 0x72 || id == 0x75) id = 0x6b;
    else if (id == 0x73 || id == 0x76) id = 0x6c;
    else if (id == 0x74 || id == 0x77) id = 0x6f;
    else if (id == 0x82 || id == 0x83) id = 0x80;
    s32 word = id / 32;
    u32 mask = 1u << (id % 32);
    if (enabled == 0) {
        work->mappedFlags.words[word] &= ~mask;
    } else if ((work->mappedFlags.words[word] & mask) == 0) {
        work->mappedFlags.words[word] |= mask;
    }
}
}
