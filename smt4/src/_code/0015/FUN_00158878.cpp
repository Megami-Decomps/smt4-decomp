#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u32 unk88;
} Obj;

void FUN_00158878(Obj *obj, u32 a, u32 b)
{
    obj->unk84 = a;
    obj->unk88 = b;
}

} /* extern "C" */
