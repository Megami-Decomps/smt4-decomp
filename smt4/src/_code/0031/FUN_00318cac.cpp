#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 unk4;
} Inner;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ Inner *inner;
} Obj;

u32 FUN_00318cac(Obj *obj)
{
    return obj->inner->unk4;
}

} /* extern "C" */
