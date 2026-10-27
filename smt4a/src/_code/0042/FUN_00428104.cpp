/* NON_MATCHING: the division by 1,000,000 is the SDK's reciprocal multiply (shared form with archiveReadNewsSinceDateTime), now inlined like retail (no __aeabi_ldivmod); remaining: retail loads the timestamp before the epoch constructor and schedules the limb multiplies differently. */
#include "shard/W6_W6Match8_DateTimeValue.h"
#include "nn/Result.h"

// High 64 bits of a signed 128-bit product, formed from 32-bit limbs.
static inline s64 multiplyHighSigned(s64 first, s64 second)
{
    u32 firstLow = (u32)first;
    s64 firstHigh = first >> 32;
    u32 secondLow = (u32)second;
    s64 secondHigh = second >> 32;
    s64 lowerCross = (s64)(((u64)firstLow * secondLow) >> 32) +
                     firstHigh * secondLow;
    s64 upperCross = (s64)firstLow * secondHigh + (u32)lowerCross;
    return firstHigh * secondHigh + (lowerCross >> 32) + (upperCross >> 32);
}

extern "C" {
nn::Result FUN_00439690(s64 *timestamp);
DateTimeValue *_ZN2nn3fnd8DateTimeC1Eiiiiiii(DateTimeValue *, s32 year, s32 month, s32 day,
                                               s32 hour, s32 minute, s32 second, s32 millisecond);

// Read the service's Unix timestamp and express it in the engine's DateTime epoch.
s32 FUN_00428104(void *, DateTimeValue *output)
{
    s64 timestamp;
    nn::Result result = FUN_00439690(&timestamp);
    if (!nnResultIsFailure(result)) {
        DateTimeValue epoch;
        DateTimeValue *base = _ZN2nn3fnd8DateTimeC1Eiiiiiii(&epoch, 1970, 1, 1, 0, 0, 0, 0);
        // TimeSpan stores nanoseconds, while DateTime stores milliseconds.
        s64 nanoseconds = (s64)((u64)timestamp * 1000000ULL);
        // Reciprocal multiplication implements the SDK's truncating division by 1,000,000.
        s64 span = (multiplyHighSigned(nanoseconds, 0x431bde82d7b634dbLL) >> 18) +
                   (s64)((u64)nanoseconds >> 63);
        output->milliseconds = (s64)((u64)base->milliseconds + (u64)span);
        return 0;
    }
    return result;
}
}
