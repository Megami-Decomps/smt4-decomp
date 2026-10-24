/* NON_MATCHING: needs `--cpu=5TE -O3 -Ospace` (set); the data flow, helper ABIs and every constant match, but retail also keeps an always-zero retry flag in [sp+0] (stored 0 before the digit-count loop, tested after 17 digits to choose between finishing and retrying with mode 0) that this source does not model, and its register assignment and frame order differ: buffer in r4, digits in r6, decimal exponent estimate in r7, scale in r5, number at sp+0, power at sp+12, decimal point and length at sp+24/28, the double's words at sp+32/36, rounding at sp+40 and the 10^n temporary at sp+44. */
#include "common.h"

// An 80-bit extended-precision value: sign and 15-bit exponent, then the 64-bit mantissa.
struct ExtendedFloat {
    u32 signExponent;
    u32 mantissaHigh;
    u32 mantissaLow;
};

// What the digit conversion reports about the digits it wrote.
struct DigitResult {
    s32 decimalPoint; // position of the decimal point relative to the first digit
    s32 length;       // digits written
    s32 mode;
};

struct DivideByTen {
    u64 quotient;
    u32 remainder;
};

extern "C" {
u32 FUN_00155a8c(u32 clearMask, u32 setBits); // the floating-point status word
ExtendedFloat FUN_00100a70(s32 exponent, s32 rounding); // 10^exponent
__value_in_regs ExtendedFloat FUN_0015284c(u32 high, u32 low);        // double -> extended
__value_in_regs ExtendedFloat FUN_00155afc(const ExtendedFloat* a, const ExtendedFloat* b, s32 rounding);
__value_in_regs ExtendedFloat FUN_002c6614(const ExtendedFloat* a, const ExtendedFloat* b, s32 rounding);
__value_in_regs DivideByTen ll_udiv10(u64 value);

// Converts the double at `value` to decimal digits in `buffer`: `digits` digits after the point for mode 0,
// significant digits otherwise; retries with 17 significant digits when the digits do not fit.
void FUN_002c6202(DigitResult* out, char* buffer, const double* value, s32 digits, s32 mode)
{
    static const s32 kExponentRebias = -0x201f;
    u32 low = reinterpret_cast<const u32*>(value)[0];
    u32 high = reinterpret_cast<const u32*>(value)[1];
    u32 exponent = (high << 1) >> 21;
    if (exponent == 0) {
        exponent = exponent - 1;
    }
    u32 status = FUN_00155a8c(0, 0) & 0xc00000;
    if (static_cast<s32>(high) < 0) {
        status = ((status * 5) >> 1) & 0xc00000;
    }
    s32 rounding = status >> 22;
    if (rounding > 1) {
        rounding = -1;
    }
    if (((high << 1) | low) == 0) {
        s32 length;
        s32 decimalPoint;
        if (mode != 1) {
            for (s32 i = 0; i < digits; ++i) {
                buffer[i] = '0';
            }
            length = digits;
            decimalPoint = 0;
        } else {
            length = 0;
            decimalPoint = ~digits;
        }
        buffer[length] = 0;
        out->mode = mode;
        out->decimalPoint = decimalPoint;
        out->length = length;
        return;
    }
    s32 decimalExponent = (static_cast<s32>(exponent - 0x3ff) * 0x4d10) >> 16;
    for (;;) {
        s32 scale = mode != 0 ? -digits : decimalExponent - digits + 1;
        ExtendedFloat power = FUN_00100a70(scale < 0 ? -scale : scale, scale > 0 ? -rounding : rounding);
        ExtendedFloat number = FUN_0015284c(high, low);
        number.signExponent += kExponentRebias;
        if (scale > 0) {
            power.signExponent -= kExponentRebias;
            number = FUN_00155afc(&number, &power, rounding);
        } else {
            power.signExponent += kExponentRebias;
            number = FUN_002c6614(&number, &power, rounding);
        }
        u64 integer = (number.signExponent & 0xffff) != 0 ? 0x7fffffffffffffffULL
                                                           : (static_cast<u64>(number.mantissaHigh) << 32) | number.mantissaLow;
        s32 length;
        s32 decimalPoint;
        if (mode != 0) {
            s32 count = 0;
            while (integer != 0 && count < 17) {
                DivideByTen division = ll_udiv10(integer);
                buffer[count++] = division.remainder + '0';
                integer = division.quotient;
            }
            if (integer != 0) {
                digits = 17;
                mode = 0;
                continue;
            }
            for (s32 first = 0, last = count - 1; first < last; ++first, --last) {
                char swap = buffer[first];
                buffer[first] = buffer[last];
                buffer[last] = swap;
            }
            decimalPoint = count - digits - 1;
            length = count;
        } else {
            for (s32 k = digits - 1; k >= 0; --k) {
                DivideByTen division = ll_udiv10(integer);
                buffer[k] = division.remainder + '0';
                integer = division.quotient;
            }
            bool fits = true;
            if (integer != 0) {
                fits = false;
                decimalExponent += 1;
            } else if (buffer[0] == '0') {
                fits = false;
                decimalExponent -= 1;
            }
            decimalPoint = decimalExponent;
            length = digits;
            if (!fits) {
                continue;
            }
        }
        buffer[length] = 0;
        out->length = length;
        out->decimalPoint = decimalPoint;
        out->mode = mode;
        return;
    }
}
}
