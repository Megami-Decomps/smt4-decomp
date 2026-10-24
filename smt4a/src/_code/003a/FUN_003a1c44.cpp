#include "common.h"

struct GeometryHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 geometry;
    /* 0x08 */ void *buffer;
};

extern "C" {

int geometryDestroy(u32 geometry);
int asdMemFree(void *block);

/* Destructor body: destroys the geometry, then frees the buffer. */
void FUN_003a1c44(GeometryHolder *self)
{
    geometryDestroy(self->geometry);
    asdMemFree(self->buffer);
}

} /* extern "C" */
