/* NON_MATCHING: leading-zero helper branching, byte narrowing and text/argument saved registers differ. */
#include "common.h"

/* A digit value of ten denotes a suppressed leading zero. */
static u8 decimalDigit(u32 value, u8 place)
{
    if (value == 0) {
        if (place == 1)
            return 0;
    }
    u32 threshold = 1;
    for (u32 i = 0; i < place - 1u; ++i)
        threshold *= 10;
    if (threshold > value)
        return 10;
    for (u32 i = 0; i < place - 1u; ++i)
        value /= 10;
    return static_cast<u8>(value % 10);
}

extern "C" {
void textFormatBuffer(char *, const char *, ...);
void FUN_00180310(s32, u32, u32, s32, s32, u32, const char *);

/* Draw a seven-column decimal number padded with spaces on the left. */
void FUN_002e1b64(u32 value, u32 x, u32 y, u32 color)
{
    char text[20];
    s32 column = 0;
    for (s32 place = 7; place >= 1; --place, ++column) {
        u8 digit = decimalDigit(value, static_cast<u8>(place));
        if (digit == 10)
            text[column] = ' ';
        else
            textFormatBuffer(text + column, "%d", digit);
    }
    text[column] = '\0';
    FUN_00180310(0, x, y, 0, 5, color, text);
}
}
