#include "common.h"

extern "C" {

void FUN_002e7232(void *buffer);
void FUN_0030f8a2(void *object, void *buffer, u32 arg);

typedef struct BufferOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *buffer;
    /* 0x08 */ u8 attached;
} BufferOwner;

/* Releases the buffer (detaching it first through FUN_0030f8a2 when attached) and clears both fields. */
void FUN_00122d36(BufferOwner *object, u32 arg)
{
    void *buffer = object->buffer;

    if (object->attached != 0) {
        FUN_0030f8a2(object, buffer, arg);
    }
    FUN_002e7232(buffer);
    object->buffer = NULL;
    object->attached = 0;
}

} /* extern "C" */
