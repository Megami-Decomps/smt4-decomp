/* NON_MATCHING: the glyph table is now the retail data symbol (DAT_0053d3e8, copied to the stack with vldm/vstm); the frame is 8 bytes larger than retail's 36 and the length return/loop scheduling differ. */
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
extern const char DAT_0053d400[];
extern const char DAT_0053d404[];
extern const char DAT_0053d40c[];
s32 textFormatBuffer(char *buffer, const char *format, ...);

// Write Shift-JIS full-width digits without a terminator; negative width measures the value.
s32 FUN_00281060(char *destination, u32 value, s32 width, s32 zeroPad)
{
    char buffer[11];
    DigitTable digits = DAT_0053d3e8;
    s32 length = 0;
    if (width < 0 && zeroPad == 0) {
        textFormatBuffer(buffer, DAT_0053d400, value);
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
        textFormatBuffer(buffer, DAT_0053d404, value);
    } else {
        textFormatBuffer(buffer, DAT_0053d40c, value);
    }
    if (width > 0) {
        const s8 *character = reinterpret_cast<const s8 *>(buffer + (10 - width));
        do {
            u32 digit = 10;
            if ((u32)(*character - '0') <= 9) {
                digit = *character - '0';
            }
            if (destination != NULL) {
                *destination++ = digits.glyphs[digit][0];
                *destination++ = digits.glyphs[digit][1];
            }
            --width;
            ++character;
        } while (width > 0);
    }
    return length;
}
}
