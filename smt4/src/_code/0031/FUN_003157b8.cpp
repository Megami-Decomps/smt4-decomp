#include "common.h"

struct GeometryHolder {
    /* 0x00 */ u32 geometry;
};

extern "C" {

int geometryDestroy(u32 geometry);
int asdMemFree(void *block);

/* Deleting destructor: destroys the geometry, then frees the block. */
void FUN_003157b8(GeometryHolder *self)
{
    geometryDestroy(self->geometry);
    asdMemFree(self);
}

} /* extern "C" */
