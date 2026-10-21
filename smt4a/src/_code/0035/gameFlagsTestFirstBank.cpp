/* NON_MATCHING: retail uses `add r2, r4, r1, lsr #27` where armcc emits `mov r2, #1`. */
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {



s32 gameFlagsTestFirstBank(s32 index)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    return (work->first[index / 32] & (1u << (index % 32))) != 0;
}

} /* extern "C" */
