/* NON_MATCHING: the zero-initializer copy chain and the first two flag-table base registers differ. */
#include "common.h"

extern "C" {
extern u32 DAT_0057f6f8[2][11];
extern u32 DAT_0057f750[11];
extern u32 DAT_0057f77c[11];
extern u32 DAT_0057f7a8[11];
s32 flagValueRead(u32 value);

/* Sums five tiers of counters using their respective score weights. */
s32 gameFlagSumWeightedTiers()
{
    s32 first = 0;
    s32 second = 0;
    s32 third = 0;
    s32 fourth = 0;
    s32 fifth = 0;
    const u32 *firstTier = DAT_0057f6f8[0];
    const u32 *secondTier = DAT_0057f6f8[1];
    for (s32 i = 0; i < 11; ++i) {
        first += flagValueRead(firstTier[i]);
        second += flagValueRead(secondTier[i]);
        third += flagValueRead(DAT_0057f750[i]);
        fourth += flagValueRead(DAT_0057f77c[i]);
        fifth += flagValueRead(DAT_0057f7a8[i]);
    }
    f32 score = (f32)first * 70.4f;
    score += (f32)second * 300.8f;
    score += (f32)third * 800.0f;
    score += (f32)fourth * 2120.0f;
    score += (f32)fifth * 5600.0f;
    return (s32)score;
}
} /* extern "C" */
