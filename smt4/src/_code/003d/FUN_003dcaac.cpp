#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;
    /* 0x302C */ u32 unk302C;
    /* 0x3030 */ u32 unk3030;
} Obj;

void FUN_003dcaac(Obj *obj, u32 value)
{
    obj->unk302C = value;
    obj->unk3030 = 0;
    obj->flags = (obj->flags & 0xffffff1f) | 0x10;
}

} /* extern "C" */
