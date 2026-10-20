#include "common.h"

extern "C" {

typedef struct BitSet {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u8 bits[1];
} BitSet;

/* Returns whether bit `index` is set. */
u8 bitSetTest(BitSet *set, u32 index)
{
    return ((u32)set->bits[index >> 3] & (1 << (index & 7))) != 0;
}

} /* extern "C" */
