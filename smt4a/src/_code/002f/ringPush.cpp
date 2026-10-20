/* NON_MATCHING: retail loads the items pointer first and adds it to the scaled head explicitly (adds; str [r0]); the build uses str [r2,r0] */
#include "common.h"

extern "C" {

typedef struct Ring002feac0 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 *items;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 head;       /* next slot to write */
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 count;
    /* 0x1c */ u32 capacity;
} Ring002feac0;

/* Appends a word at the ring's head and advances the head, wrapping at the capacity. */
void ringPush(Ring002feac0 *ring, u32 *value)
{
    ring->items[ring->head] = *value;
    ring->head = (ring->head + 1) % ring->capacity;
    ring->count++;
}

} /* extern "C" */
