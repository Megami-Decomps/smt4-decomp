/* NON_MATCHING: glyph initializer uses a compiler constant rather than the retail data symbol; stack layout and loop scheduling differ. */
#include "common.h"

extern "C" {
extern const char DAT_00409710[];
extern const char DAT_00409714[];
extern const char DAT_0040971c[];
s32 textFormatBuffer(char *buffer, const char *format, ...);

// Write Shift-JIS full-width digits without a terminator; negative width measures the value.
s32 FUN_001dba90(char *destination, u32 value, s32 width, s32 zeroPad)
{
    char buffer[11];
    char digits[12][2] = {
        {0x82, 0x4F}, {0x82, 0x50}, {0x82, 0x51}, {0x82, 0x52},
        {0x82, 0x53}, {0x82, 0x54}, {0x82, 0x55}, {0x82, 0x56},
        {0x82, 0x57}, {0x82, 0x58}, {0x81, 0x40}, {0, 0}
    };
    s32 length = 0;
    if (width < 0 && zeroPad == 0) {
        textFormatBuffer(buffer, DAT_00409710, value);
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
        textFormatBuffer(buffer, DAT_00409714, value);
    } else {
        textFormatBuffer(buffer, DAT_0040971c, value);
    }
    if (width > 0) {
        const s8 *character = reinterpret_cast<const s8 *>(buffer + (10 - width));
        do {
            u32 digit = 10;
            if ((u32)(*character - '0') <= 9) {
                digit = *character - '0';
            }
            if (destination != NULL) {
                *destination++ = digits[digit][0];
                *destination++ = digits[digit][1];
            }
            --width;
            ++character;
        } while (width > 0);
    }
    return length;
}
}
