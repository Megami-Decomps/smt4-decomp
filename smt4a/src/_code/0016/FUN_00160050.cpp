#include "common.h"

extern "C" {

typedef struct Buffer {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ s32 capacity;
    /* 0x84 */ s32 used;
} Buffer;

/* Returns the free space left: capacity minus used, or 0 when used has reached capacity. */
s32 FUN_00160050(Buffer *buffer)
{
    s32 free;

    if (buffer->used >= buffer->capacity) {
        free = 0;
    } else {
        free = buffer->capacity - buffer->used;
    }
    return free;
}

} /* extern "C" */
