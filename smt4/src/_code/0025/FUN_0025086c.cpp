/* NON_MATCHING: Signed division and glyph pointers use different registers and load scheduling. */
#include "common.h"

extern "C" {
// Writes one or two Shift-JIS full-width decimal digits and a terminator.
void FUN_0025086c(s32 value, u8* output)
{
    const u8* digits = (const u8*)"\x82\x4F\x82\x50\x82\x51\x82\x52\x82\x53\x82\x54\x82\x55\x82\x56\x82\x57\x82\x58";
    if (value >= 10) {
        const u8* tens = &digits[(value / 10) * 2];
        output[0] = tens[0];
        const u8* ones = &digits[(value % 10) * 2];
        output[1] = tens[1];
        output[2] = ones[0];
        output[3] = ones[1];
        output[4] = 0;
    } else {
        output[0] = digits[value * 2];
        output[1] = digits[value * 2 + 1];
        output[2] = 0;
    }
}
}
