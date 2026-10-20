#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u8 bits[1];
} Obj;

/* Whether bit `bit` of the bitset at +0x4C is set. */
u8 bitsetTestBit(Obj *obj, u32 bit)
{
    return ((u32)obj->bits[bit >> 3] & (1 << (bit & 7))) != 0;
}

} /* extern "C" */
