/* NON_MATCHING: capacity and used are loaded in the opposite order (r3/r2 swapped). */
#include "common.h"

extern "C" {

/* Buffer state: length at 0x10, capacity at 0x14, bytes in use at 0x18. */
typedef struct {
    u8 unk00[0x10];
    u32 length;         /* 0x10 */
    s32 capacity;       /* 0x14 */
    s32 used;           /* 0x18 */
} BufferState;

typedef struct {
    u8 unk00[8];
    BufferState *state; /* 0x08 */
} Buffer;

/* Sets the buffer length when it fits in the remaining space; returns whether it did. */
u32 FUN_002fbb70(Buffer *buffer, u32 length)
{
    BufferState *state = buffer->state;

    if ((u32)(state->capacity - state->used) < length) {
        return 0;
    }
    state->length = length;
    return 1;
}

} /* extern "C" */
