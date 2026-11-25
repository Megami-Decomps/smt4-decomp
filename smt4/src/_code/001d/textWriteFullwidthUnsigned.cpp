/* NON_MATCHING: retail keeps the 24-byte glyph table at sp+12 in a 36-byte frame; this build puts it at sp+16 in a 44-byte
 * frame. w94-s7 matched with __align(4) on the local table and per-format `.constdata$$` section attributes; neither has a
 * real alignment or precedent in the project (steering, not kept). */
#include <stdio.h>
#include "common.h"

extern "C" {
/* The three number formats. */
static const char s_plainFormat[] = "%u";
static const char s_zeroPaddedFormat[] = "%010u";
static const char s_spacePaddedFormat[] = "%10u";

/* Writes full-width Shift-JIS digits without a terminator; negative width measures the value. */
s32 textWriteFullwidthUnsigned(char *destination, u32 value, s32 width, s32 zeroPad)
{
    char buffer[11];
    char digits[12][2] = {
        {0x82, 0x4F}, {0x82, 0x50}, {0x82, 0x51}, {0x82, 0x52},
        {0x82, 0x53}, {0x82, 0x54}, {0x82, 0x55}, {0x82, 0x56},
        {0x82, 0x57}, {0x82, 0x58}, {0x81, 0x40}, {0, 0}
    };
    s32 length = 0;
    if (width < 0 && zeroPad == 0) {
        sprintf(buffer, s_plainFormat, value);
        width = 0;
        while (buffer[width] != '\0') {
            ++width;
        }
        length = width;
        if (length == 0) {
            return length;
        }
    }
    if (width > 10) {
        width = 10;
    }
    if (zeroPad != 0) {
        sprintf(buffer, s_zeroPaddedFormat, value);
    } else {
        sprintf(buffer, s_spacePaddedFormat, value);
    }
    if (width <= 0) {
        return length;
    }
    const s8 *character = (const s8 *)(buffer + (10 - width));
    for (; width > 0; --width, ++character) {
        u32 digit = 10;
        if ((u32)(*character - '0') <= 9) {
            digit = *character - '0';
        }
        if (destination != NULL) {
            *destination++ = digits[digit][0];
            *destination++ = digits[digit][1];
        }
    }
    return length;
}
} /* extern "C" */
