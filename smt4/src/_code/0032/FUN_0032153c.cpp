#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *geometry;
    /* 0x08 */ void *buffer;
};

extern "C" {
void geometryDestroy(void *geometry);
int asdMemFree(void *block);
}

/* Releases the geometry and its buffer. */
extern "C" void FUN_0032153c(Object *object)
{
    geometryDestroy(object->geometry);
    asdMemFree(object->buffer);
}
