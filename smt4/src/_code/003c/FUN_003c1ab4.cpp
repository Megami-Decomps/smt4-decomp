/* NON_MATCHING: compiler hoists the signed-halfword conversion and uses MLA, while retail uses two SMLABB operations. Candidate O2. */
#include "common.h"

struct GrowthParameters {
    u8 unk00[6];   // 0x00
    u16 firstBase;  // 0x06
    u16 secondBase; // 0x08
    u8 firstGain;   // 0x0a
    u8 secondGain;  // 0x0b
};

struct GrowthValues {
    u16 first;  // 0x00
    u16 second; // 0x02
};

// Calculate the two growth values, applying the second-value percentage and upper cap.
extern "C" void FUN_003c1ab4(s32 level, GrowthValues* output, const GrowthParameters* parameters)
{
    s32 first = (s16)level * (s16)parameters->firstGain + parameters->firstBase;
    output->first = first <= 9999 ? (u16)first : 9999;
    s32 second = ((s16)level * (s16)parameters->secondGain + parameters->secondBase) * 45 / 100;
    output->second = second <= 9999 ? (u16)second : 9999;
}
