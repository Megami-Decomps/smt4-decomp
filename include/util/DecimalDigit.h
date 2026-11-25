#ifndef UTIL_DECIMALDIGIT_H
#define UTIL_DECIMALDIGIT_H

#include "common.h"

enum { DECIMAL_DIGIT_LEADING_BLANK = 10 };

/* Extracts a decimal digit at place 1 to 10 (1 is the units place), or a leading blank.
 * The save-slot summaries also inline the threshold and digit extraction loops. */
static u8 decimalDigit(u32 value, u8 place)
{
    u32 threshold = 1;
    u32 i;
    if (value == 0) {
        if (place == 1) {
            return 0;
        }
    }
    for (i = 0; i < place - 1u; ++i) {
        threshold *= 10;
    }
    if (threshold > value) {
        return DECIMAL_DIGIT_LEADING_BLANK;
    }
    for (i = 0; i < place - 1u; ++i) {
        value /= 10;
    }
    return (u8)(value - value / 10 * 10);
}

#endif
