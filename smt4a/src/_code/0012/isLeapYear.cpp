#include "common.h"

extern "C" {

/* EABI signed divide: quotient in the low word, remainder in the high word. */
s64 __aeabi_idivmod(s32 numerator, s32 denominator);

/* Gregorian leap-year test: 1 for a leap year, 0 otherwise. */
u32 isLeapYear(u32 unused, u32 year)
{
    int remainder400 = (s32)(__aeabi_idivmod(year, 400) >> 32);
    int remainder100;

    if (remainder400 != 0) {
        remainder100 = (s32)(__aeabi_idivmod(year, 100) >> 32);
        if (remainder100 == 0 || (year & 3) != 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
