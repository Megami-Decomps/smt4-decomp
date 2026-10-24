#include "common.h"

struct Resources00316cc8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 buffer;
    /* 0x08 */ void *block;
};

struct Object00316cc8 {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ Resources00316cc8 *resources;
};

extern "C" {

void bufferObjDestroy(u32 buffer);
s32 asdMemFree(void *block);

/* Destroys the buffer and frees the block of the object's resources (0x3c). */
void FUN_00316cc8(Object00316cc8 *object)
{
    Resources00316cc8 *resources = object->resources;
    bufferObjDestroy(resources->buffer);
    asdMemFree(resources->block);
}

} /* extern "C" */
