#include "common.h"

extern "C" {

int FUN_002b2344(u32 value);
int asdTextureRelease(u32 value);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C[0x98];
    /* 0xB4 */ u32 unkB4;
} Obj;

void FUN_00207470(Obj *obj)
{
    if (obj->unkB4 != 0) {
        asdTextureRelease(obj->unkB4);
    }
    FUN_002b2344(obj->unk18);
    asdMemFree(obj);
}

} /* extern "C" */
