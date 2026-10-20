#include "common.h"

extern "C" {

int handleBlockRefDrop(void);
int asdTextureRelease(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ u32 unk40;
} Obj;

void FUN_00247240(Obj *obj)
{
    if (obj->unk38 != 0) {
        asdTextureRelease();
    }
    if (obj->unk40 != 0) {
        handleBlockRefDrop();
    }
    asdMemFree(obj);
}

} /* extern "C" */
