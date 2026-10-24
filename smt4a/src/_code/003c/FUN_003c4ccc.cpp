#include "common.h"

struct Object003c4ccc {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 geometry;
    /* 0x08 */ void *block;
};

extern "C" {

void geometryDestroy(u32 geometry);
s32 asdMemFree(void *block);

/* Destroys the object's geometry and frees its block. */
void FUN_003c4ccc(Object003c4ccc *object)
{
    geometryDestroy(object->geometry);
    asdMemFree(object->block);
}

} /* extern "C" */
