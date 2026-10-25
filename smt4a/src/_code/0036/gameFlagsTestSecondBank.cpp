#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {



s32 gameFlagsTestSecondBank(s32 index)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (work->second[word] & (1u << shift)) != 0;
}

} /* extern "C" */
