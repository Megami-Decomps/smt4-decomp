#include "common.h"

extern "C" {

typedef struct Sub {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 flags;
} Sub;

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;
    /* 0x302C */ u8 unk302C[0x28];
    /* 0x3054 */ Sub *sub;
} Obj;

u32 FUN_003da5b4(Obj *obj)
{
    if ((obj->sub != NULL) && ((obj->sub->flags & 1) != 0)) {
        return (obj->flags & 0x2000) >> 0xd;
    }
    return 1;
}

} /* extern "C" */
