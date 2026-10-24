#include "common.h"

struct Object003ac674 {
    /* 0x00 */ u32 geometry;
};

extern "C" {

void geometryDestroy(u32 geometry);
s32 asdMemFree(void *block);

/* Destroys the object's geometry and frees the object itself. */
void FUN_003ac674(Object003ac674 *object)
{
    geometryDestroy(object->geometry);
    asdMemFree(object);
}

} /* extern "C" */
