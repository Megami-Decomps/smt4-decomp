#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u8 valid;
} Obj;

void FUN_0037bd18(Obj *obj)
{
    if (obj->valid != 0) {
        obj->unk0 = 0;
        obj->unk4 = 0;
        obj->unk8 = 0;
        obj->valid = 0;
    }
}

} /* extern "C" */
