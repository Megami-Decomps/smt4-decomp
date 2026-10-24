/* NON_MATCHING: only register allocation differs: retail keeps the 0x24ff constant in r4 and the range temp in r3, armcc swaps them. */
#include "common.h"

extern "C" {

/* True for digits of every script the text channels accept: ASCII, fullwidth, super/subscripts,
 * Roman numerals, circled/parenthesized/dotted numbers and the dingbat digits. */
static bool isNumericChar(u16 c)
{
    return (c >= 0x30 && c <= 0x39) || (c >= 0xff10 && c <= 0xff19) ||
           (c >= 0x2070 && c <= 0x2079) || (c >= 0x2080 && c <= 0x2089) ||
           (c >= 0x2160 && c <= 0x216b) || (c >= 0x2170 && c <= 0x217b) ||
           (c >= 0x2460 && c <= 0x2473) || (c >= 0x2474 && c <= 0x2487) ||
           (c >= 0x2488 && c <= 0x249b) || (c >= 0x2776 && c <= 0x277f) ||
           (c >= 0x2780 && c <= 0x2789) || (c >= 0x278a && c <= 0x2793) ||
           c == 0xb2 || c == 0xb3 || c == 0xb9 || c == 0x24ea || c == 0x24ff;
}

/* Number of numeric characters in a zero-terminated UTF-16 string, or -1 for a null string. */
int FUN_00438948(const u16 *text)
{
    if (text == NULL) {
        return -1;
    }
    int count = 0;
    for (; *text != 0; text++) {
        if (isNumericChar(*text)) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
