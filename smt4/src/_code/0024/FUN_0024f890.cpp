#include "common.h"

extern "C" {

typedef struct Vec4 {
    /* 0x0 */ u32 x;
    /* 0x4 */ u32 y;
    /* 0x8 */ u32 z;
    /* 0xC */ u32 w;
} Vec4;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 *block;
} Obj;

/* Copies the 4-word vector at +0x10 of the object's block into *out. */
void FUN_0024f890(Obj *obj, Vec4 *out)
{
    Vec4 *src = (Vec4 *)(obj->block + 0x10);
    u32 y = src->y;
    u32 z = src->z;
    u32 w = src->w;

    out->x = src->x;
    out->y = y;
    out->z = z;
    out->w = w;
}

} /* extern "C" */
