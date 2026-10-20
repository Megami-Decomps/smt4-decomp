#include "common.h"

extern "C" {

int geometryDestroy(u32 value);
int handleBlockUnref(void);
int handleBlockRefDrop(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC8];
    /* 0xC8 */ u32 unkC8;
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
} Obj;

void FUN_0021a6d8(Obj *obj)
{
    if (obj->unkCC != 0) {
        handleBlockUnref();
    }
    if (obj->unkD0 != 0) {
        handleBlockRefDrop();
    }
    geometryDestroy(obj->unkC8);
    asdMemFree(obj);
}

} /* extern "C" */
