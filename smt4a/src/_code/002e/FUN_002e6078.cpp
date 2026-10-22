/* NON_MATCHING: retail uses ARMv5 Thumb moves and a bottom-tested digit loop; current build uses ARMv6 Thumb instructions and a top-tested loop. */
#include "common.h"

extern "C" {
u32 *__aeabi_errno_addr();
s32 digitValueInBase(char digit, s32 base);

// Parse an unsigned integer, tracking overflow in two 16-bit limbs.
u32 FUN_002e6078(const char *text, const char **end, s32 base)
{
    bool anyDigit = false;
    const char *cursor = text;
    char digit = *cursor++;
    bool overflow = false;
    if (digit != '0') {
        if (base == 0) {
            base = 10;
        }
    } else {
        digit = *cursor++;
        anyDigit = true;
        if (digit != 'x' && digit != 'X') {
            if (base == 0) {
                base = 8;
            }
        } else if (base == 0 || base == 16) {
            digit = *cursor++;
            anyDigit = false;
            base = 16;
        }
    }
    u32 high = 0;
    u32 low = 0;
    s32 value;
    while ((value = digitValueInBase(digit, base)) >= 0) {
        anyDigit = true;
        u32 product = base * low + value;
        low = product & 0xffff;
        high = high * base + (product >> 16);
        if (high >= 0x10000) {
            overflow = true;
        }
        digit = *cursor++;
    }
    if (end != NULL) {
        *end = anyDigit ? cursor - 1 : text;
    }
    if (overflow) {
        *__aeabi_errno_addr() = 2;
        return 0xffffffff;
    }
    return (high << 16) | low;
}
}
