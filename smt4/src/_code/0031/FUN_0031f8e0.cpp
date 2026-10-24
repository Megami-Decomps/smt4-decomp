#include "common.h"

struct Object0031f8e0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 geometry;
    /* 0x08 */ void *block;
};

extern "C" {

void geometryDestroy(u32 geometry);
s32 asdMemFree(void *block);

/* Destroys the object's geometry and frees its block. */
void FUN_0031f8e0(Object0031f8e0 *object)
{
    geometryDestroy(object->geometry);
    asdMemFree(object->block);
}

} /* extern "C" */
