#include "common.h"

extern "C" {

/* Object with a 256-bit flag set at 0x4c. */
typedef struct {
    u8 unk00[0x4c];
    u8 bits[32];    /* 0x4c */
} BitOwner;

/* Sets flag number `bit`. */
void bitsetSetBit(BitOwner *owner, u32 bit)
{
    owner->bits[bit >> 3] |= 1 << (bit & 7);
}

} /* extern "C" */
