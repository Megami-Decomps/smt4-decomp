#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 unk3C;
} Obj;

void FUN_00130ea8(Obj *obj, s32 base)
{
    obj->unk3C = base + 8;
}

} /* extern "C" */
