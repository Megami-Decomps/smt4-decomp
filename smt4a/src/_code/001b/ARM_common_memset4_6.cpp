#include "common.h"
#include "code/Code001b_Smt4a.h"

extern "C" {

typedef struct Bytes6 {
    /* 0x00 */ u32 word;
    /* 0x04 */ u16 half;
} Bytes6;

/* Fills 6 bytes with the low byte of `value`. */
void ARM_common_memset4_6(Bytes6 *dest, u32 value)
{
    u32 fill;

    fill = (value & 0xFF) | ((value & 0xFF) << 8);
    fill = fill | (fill << 0x10);
    dest->word = fill;
    dest->half = (u16)fill;
}

} /* extern "C" */
