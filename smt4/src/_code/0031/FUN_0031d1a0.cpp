#include "common.h"

extern "C" {

void geometryDestroy(void *geometry);
void asdMemFree(void *block);

struct GeometryOwner {
    u8 unk00[4];
    void *geometry;
    void *block;
};

/* Destroys the object's geometry and frees its block. */
void FUN_0031d1a0(GeometryOwner *object)
{
    geometryDestroy(object->geometry);
    asdMemFree(object->block);
}

} /* extern "C" */
