#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/gameFlagsTestThirdBank.h"

extern "C" {



s32 gameFlagsTestThirdBank(s32 index)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    u32 bits = work->third[word];
    return (bits & (1 << bit)) != 0;
}

} /* extern "C" */
