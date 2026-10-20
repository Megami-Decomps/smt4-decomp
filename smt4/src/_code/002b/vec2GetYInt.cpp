#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int value;   /* 20.12 fixed point */
} Obj;

/* Integer part of the fixed-point value. */
int vec2GetYInt(Obj *obj)
{
    return obj->value >> 0xc;
}

} /* extern "C" */
