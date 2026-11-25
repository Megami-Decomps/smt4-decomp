#include "util/DecimalDigit.h"
#include <stdio.h>

enum { PADDED_NUMBER_COLUMNS = 7 };
static const char s_digitFormat[] = "%d";

extern "C" {
void textDrawFormattedAligned(u32 kind, s32 x, s32 y, u32 align, u32 digits, u32 slot, const char *format, ...);

/* Draws a seven-column decimal number padded with spaces on the left. */
void uiDrawSevenDigitNumber(u32 value, s32 x, s32 y, u32 slot)
{
    char text[16];
    s32 column = 0;
    for (s32 place = PADDED_NUMBER_COLUMNS; place >= 1; --place, ++column) {
        u8 digit = decimalDigit(value, (u8)place);
        if (digit == DECIMAL_DIGIT_LEADING_BLANK) {
            text[column] = ' ';
        } else {
            sprintf(text + column, s_digitFormat, digit);
        }
    }
    text[column] = '\0';
    textDrawFormattedAligned(0, x, y, 0, 5, slot, text);
}
} /* extern "C" */
