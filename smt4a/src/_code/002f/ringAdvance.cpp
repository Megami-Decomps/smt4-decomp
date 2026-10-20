#include "common.h"

extern "C" {

/* Ring buffer cursor: write/read index at 0x14, capacity at 0x1c, element count at 0x18. */
typedef struct {
    u8 unk00[0x14];
    u32 index;      /* 0x14 */
    s32 count;      /* 0x18 */
    u32 capacity;   /* 0x1c */
} RingState;

/* Advances the index by one slot (wrapping at the capacity) and drops one element. */
void ringAdvance(RingState *ring)
{
    ring->index = (u32)((ring->index + 1) % (ring->capacity));
    ring->count--;
}

} /* extern "C" */
