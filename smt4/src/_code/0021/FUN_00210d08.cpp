/* NON_MATCHING: decimal helper guard lowering, loop signedness, and draw argument spills differ. */
#include "common.h"

extern "C" {
extern const char DAT_00402894[];
void textFormatBuffer(char *, const char *, ...);
void FUN_002bdf94(s32, u32, u32, s32, s32, u32, const char *);
}

/* A missing leading digit is represented by 10, outside the decimal range. */
static __inline u8 decimalDisplayDigit(u32 number, u8 place)
{
    if (number == 0 && place == 1) {
        return 0;
    }
    u32 magnitude = 1;
    for (u32 i = 1; i < place; ++i) {
        magnitude *= 10;
    }
    if (number < magnitude) {
        return 10;
    }
    for (u32 i = 1; i < place; ++i) {
        number /= 10;
    }
    return number % 10;
}

extern "C" {
/* Draw a seven-column decimal value, padding its unused leading places. */
void FUN_00210d08(u32 number, u32 x, u32 y, u32 style)
{
    char buffer[20];
    s32 length = 0;
    for (s32 place = 7; place >= 1; --place) {
        u8 digit = decimalDisplayDigit(number, place);
        if (digit == 10) {
            buffer[length] = ' ';
        } else {
            textFormatBuffer(buffer + length, DAT_00402894, digit);
        }
        ++length;
    }
    buffer[length] = 0;
    FUN_002bdf94(0, x, y, 0, 5, style, buffer);
}
}
