#include "common.h"

extern "C" {

typedef struct Ring {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ s32 capacity;
    /* 0x70 */ s32 used;
} Ring;

/* Remaining room: capacity minus used, or 0 when used has reached capacity. */
s32 FUN_001221a0(Ring *ring)
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
