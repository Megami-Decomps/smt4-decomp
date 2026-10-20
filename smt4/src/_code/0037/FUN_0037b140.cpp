#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u8 valid;
} Obj;

void FUN_0037b140(Obj *obj)
{
    if (obj->valid != 0) {
        obj->unk0 = 0;
        obj->unk4 = 0;
        obj->valid = 0;
    }
}

} /* extern "C" */
