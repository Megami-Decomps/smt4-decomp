#include "common.h"

extern "C" {

extern u8 DAT_00421c98;

typedef struct Obj {
    /* 0x0 */ const void *vtbl;
    /* 0x4 */ u32 unk4;
} Obj;

void FUN_0037b7c4(Obj *obj)
{
    obj->vtbl = &DAT_00421c98;
    obj->unk4 = 0;
}

} /* extern "C" */
