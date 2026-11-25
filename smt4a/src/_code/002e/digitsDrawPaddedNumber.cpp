#include "ui/NumberFont.h"
#include "util/DecimalDigit.h"
#include <stdio.h>

enum { PADDED_NUMBER_COLUMNS = 7 };

extern "C" {

/* Draws a seven-column decimal number padded with spaces on the left. */
void digitsDrawPaddedNumber(u32 value, s32 x, s32 y, u32 slot)
{
    char text[16];
    s32 column = 0;
    for (s32 place = PADDED_NUMBER_COLUMNS; place >= 1; --place, ++column) {
        u8 digit = decimalDigit(value, (u8)place);
        if (digit == DECIMAL_DIGIT_LEADING_BLANK) {
            text[column] = ' ';
        } else {
            sprintf(text + column, "%d", digit);
        }
    }
    text[column] = '\0';
    numberFontDrawFormatted(0, x, y, 0, 5, slot, text);
}
} /* extern "C" */
