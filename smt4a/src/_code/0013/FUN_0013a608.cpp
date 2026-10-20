#include "common.h"

extern "C" {

typedef struct Global5b3bf4 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03;
} Global5b3bf4;
extern Global5b3bf4 DAT_005b3bf4;

/* Stores `value` in the byte at 0x3 of the global at 0x5B3BF4. */
void FUN_0013a608(u8 value)
{
    DAT_005b3bf4.unk03 = value;
}

} /* extern "C" */
