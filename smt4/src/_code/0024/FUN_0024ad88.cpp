#include "common.h"

extern "C" {

int FUN_00253ce4(void);
int FUN_00253d24(void);
int asdMemFreeNonNull(void);
int asdTextureRelease(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ void *buffer;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ s32 unk14;
} Obj;

void FUN_0024ad88(Obj *obj)
{
    if (obj->unk00 != 0) {
        FUN_00253d24();
        if (obj->unk00 != 0) {
            FUN_00253ce4();
            asdMemFreeNonNull();
        }
    }
    if (obj->unk14 != 0) {
        asdTextureRelease();
    }
    asdMemFree(obj->buffer);
    asdMemFree(obj);
}

} /* extern "C" */
