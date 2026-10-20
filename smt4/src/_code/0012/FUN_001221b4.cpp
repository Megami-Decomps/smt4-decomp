#include "common.h"

extern "C" {

typedef struct Ring {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ s32 capacity;
    /* 0x80 */ s32 used;
} Ring;

/* Remaining room: capacity minus used, or 0 when used has reached capacity. */
s32 FUN_001221b4(Ring *ring)
{
    s32 free;

    if (ring->used >= ring->capacity) {
        free = 0;
    } else {
        free = ring->capacity - ring->used;
    }
    return free;
}

} /* extern "C" */
