#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Obj;

void FUN_002621f8(Obj *obj, u32 value)
{
    obj->unk4 = 0xffffffff;
    obj->unk8 = value;
}

} /* extern "C" */
