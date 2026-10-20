#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x4A];
    /* 0x4A */ u16 value;
} Obj;

/* Low byte of the halfword at +0x4A. */
u16 FUN_00234468(Obj *obj)
{
    return obj->value & 0xff;
}

} /* extern "C" */
