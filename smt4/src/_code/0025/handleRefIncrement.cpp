#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 refCount;
} Obj;

void handleRefIncrement(Obj *obj)
{
    obj->refCount = obj->refCount + 1;
}

} /* extern "C" */
