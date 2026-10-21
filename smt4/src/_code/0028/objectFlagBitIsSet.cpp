#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[9];
    /* 0x9 */ u8 flags;
} Obj;

/* Whether flag bit `bit` is set. */
u8 objectFlagBitIsSet(Obj *obj, u32 bit)
{
    return ((u32)obj->flags & (1 << (bit & 0xff))) != 0;
}

} /* extern "C" */
