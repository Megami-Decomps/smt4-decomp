/* NON_MATCHING: register allocation: retail keeps the end in the count register (r2) and the base-relative position in r3; armcc allocates r1/r2 instead (same instruction sequence). */
#include "common.h"

extern "C" {

typedef struct SlotBitmap {
    /* 0x0 */ u8 *bytes;        /* one byte per 16-unit slot */
    /* 0x4 */ s32 base;         /* first covered position */
} SlotBitmap;

/* Clears `count` slot bytes starting at the slot containing `position`. */
void FUN_00238170(SlotBitmap *map, s32 position, u32 count)
{
    u8 *bytes = map->bytes;
    u32 slot = (u32)(position - map->base) >> 4;

    count += slot;
    for (; count > slot; slot++) {
        bytes[slot] = 0;
    }
}

}
