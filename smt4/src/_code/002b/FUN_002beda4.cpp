#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ int value;   /* 20.12 fixed point */
} Obj;

/* Integer part of the fixed-point value. */
int FUN_002beda4(Obj *obj)
{
    return obj->value >> 0xc;
}

} /* extern "C" */
