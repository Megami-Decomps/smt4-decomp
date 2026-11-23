/* NON_MATCHING: the glyph table is the retail data symbol (DAT_0053d3e8, copied to the stack with vldm/vstm); this build places it at sp+16 in a 44-byte frame (retail sp+12, 36 bytes), and the zero-length early exit returns r4 instead of sharing the r6 exit. */
#include <stdio.h>
#include "common.h"

/* The Shift-JIS full-width glyphs for 0-9, the ideographic space and a terminator. */
struct DigitTable {
    union {
        u32 words[6];
        char glyphs[12][2];
    };
};

extern "C" {
extern const DigitTable DAT_0053d3e8;
static const char s_plainFormat[] = "%u";
static const char s_zeroPaddedFormat[] = "%010u";
static const char s_spacePaddedFormat[] = "%10u";

// Write Shift-JIS full-width digits without a terminator; negative width measures the value.
s32 FUN_00281060(char *destination, u32 value, s32 width, s32 zeroPad)
{
    char buffer[11];
    DigitTable digits = DAT_0053d3e8;
    s32 length = 0;
    if (width < 0 && zeroPad == 0) {
        sprintf(buffer, s_plainFormat, value);
        width = 0;
        if (buffer[0] == '\0') {
            return length;
        }
        do {
            ++width;
        } while (buffer[width] != '\0');
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
    const s8 *character = reinterpret_cast<const s8 *>(buffer + (10 - width));
    for (; width > 0; --width, ++character) {
        u32 digit = 10;
        if ((u32)(*character - '0') <= 9) {
            digit = *character - '0';
        }
        if (destination != NULL) {
            *destination++ = digits.glyphs[digit][0];
            *destination++ = digits.glyphs[digit][1];
        }
    }
    return length;
}
}
