/* NON_MATCHING: both products use `mla`; retail uses `smlabb` (halfword multiply-accumulate) because it cannot see the byte gains as small values. */
#include "common.h"

struct GrowthParameters {
    u8 unk00[6];   // 0x00
    u16 firstBase;  // 0x06
    u16 secondBase; // 0x08
    u8 firstGain;   // 0x0a
    u8 secondGain;  // 0x0b
};

struct GrowthValues {
    s16 first;  // 0x00
    u16 second; // 0x02
};

// Calculate the two growth values, applying the second-value percentage and upper cap.
extern "C" void FUN_003c1ab4(s16 level, GrowthValues* output, const GrowthParameters* parameters)
{
    s32 first = level * parameters->firstGain + parameters->firstBase;
    u16 firstValue = first <= 9999 ? (u16)first : 9999;
    output->first = firstValue;
    s32 second = (level * parameters->secondGain + parameters->secondBase) * 45 / 100;
    output->second = second <= 9999 ? (u16)second : 9999;
}
