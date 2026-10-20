#include "common.h"

extern "C" {

void sharedRefRelease(void *buffer);

typedef struct BufferHolder {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ void *buffer;
} BufferHolder;

/* Frees the buffer if there is one and clears the pointer. */
void FUN_0010d0b8(BufferHolder *object)
{
    if (object->buffer != NULL) {
        sharedRefRelease(object->buffer);
    }
    object->buffer = NULL;
}

} /* extern "C" */
