#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u16 value;
} Obj;

/* Low byte of the halfword at +0x48. */
u16 halfPair48LowByteA(Obj *obj)
{
    return obj->value & 0xff;
}

} /* extern "C" */
