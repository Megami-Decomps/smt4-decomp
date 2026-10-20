#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 flags;
} Obj;

/* Whether bit `bit` of the flag word at +0x44 is set. */
u8 flagWordTestBit(Obj *obj, u32 bit)
{
    return ((u32)obj->flags & (1 << (bit & 0xff))) != 0;
}

} /* extern "C" */
