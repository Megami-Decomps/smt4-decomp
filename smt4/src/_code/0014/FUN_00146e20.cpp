#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[3];
    /* 0x3 */ u8 unk3;
} Obj;

u8 FUN_00146e20(Obj *obj)
{
    return obj->unk3;
}

} /* extern "C" */
