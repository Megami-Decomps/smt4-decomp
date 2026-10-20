#include "common.h"

extern "C" {

int FUN_00146a84(void *block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 block[0x3C];
    /* 0x54 */ int count;
} Obj;

void FUN_002b3194(Obj *obj)
{
    FUN_00146a84(obj->block);
    obj->count = obj->count - 1;
}

} /* extern "C" */
