/* NON_MATCHING: retail loads the items pointer first and adds it to the scaled head explicitly (adds; str [r0]); the build uses str [r2,r0] */
#include "shard/W6_W6Match3_WordRing.h"

extern "C" {


/* Appends a word at the ring's head and advances the head, wrapping at the capacity. */
void ringPush(WordRing *ring, u32 *value)
{
    ring->items[ring->head] = *value;
    ring->head = (ring->head + 1) % ring->capacity;
    ring->count++;
}

} /* extern "C" */
