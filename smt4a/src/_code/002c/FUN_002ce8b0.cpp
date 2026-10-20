#include "common.h"

extern "C" {

void FUN_001800b8(void *buffer);
void FUN_002e3304(u32 handle);
void asdMemFree(void *memory);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 handle;
    /* 0x1C */ u8 unk1C[0x98];
    /* 0xB4 */ void *buffer;
} Holder;

/* Releases the buffer (if any) and the handle, then frees the object. */
void FUN_002ce8b0(Holder *object)
{
    if (object->buffer != NULL) {
        FUN_001800b8(object->buffer);
    }
    FUN_002e3304(object->handle);
    asdMemFree(object);
}

} /* extern "C" */
