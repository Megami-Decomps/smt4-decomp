#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 unk4;
} Obj;

u8 FUN_0015e8b4(Obj *obj)
{
    return obj->unk4 != 0;
}

} /* extern "C" */
