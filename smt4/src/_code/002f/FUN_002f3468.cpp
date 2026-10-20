#include "common.h"

extern "C" {

int geometryDestroy(u32 value);
int handleBlockUnref(void);
int handleBlockRefDrop(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ int unk140;
    /* 0x144 */ int unk144;
} Obj;

void FUN_002f3468(Obj *obj)
{
    if (obj->unk140 != 0) {
        handleBlockUnref();
    }
    if (obj->unk144 != 0) {
        handleBlockRefDrop();
    }
    geometryDestroy(obj->unk13C);
    asdMemFree(obj);
}

} /* extern "C" */
