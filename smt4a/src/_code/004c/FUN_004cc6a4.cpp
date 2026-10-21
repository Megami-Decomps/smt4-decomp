/* NON_MATCHING: callee-result stores use different preserved registers; typed growth ABI restored. */
#include "shard/W6_W6Match8_StatGrowth.h"

struct ValuePair { u16 first, second; };
extern "C" {
u32 FUN_003daaf8(s32 level, const StatGrowthParameters *parameters);

void FUN_004cc6a4(s32 level, ValuePair *output, const StatGrowthParameters *parameters)
{
    output->first = (u16)unitComputeMaximumHpAtLevel(level, parameters);
    output->second = (u16)FUN_003daaf8(level, parameters);
}
}
