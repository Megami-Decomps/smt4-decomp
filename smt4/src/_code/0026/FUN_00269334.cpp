#include "common.h"

extern "C" {

int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 buffer;
} Obj;

void FUN_00269334(Obj *obj)
{
    asdMemFree(obj->buffer);
}

} /* extern "C" */
