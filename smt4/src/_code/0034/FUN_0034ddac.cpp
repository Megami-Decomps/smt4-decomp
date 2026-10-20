#include "common.h"

extern "C" {

int asdTextureRelease(u32 resource);

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
} Inner;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Inner *inner;
} Obj;

void FUN_0034ddac(Obj *obj)
{
    obj->inner->unk24 = 0;
    asdTextureRelease((u32)obj->inner);
    obj->inner = NULL;
}

} /* extern "C" */
