#ifndef UTIL_BYTERING_H
#define UTIL_BYTERING_H

#include "common.h"
#include <stddef.h>

/* Ring-buffer positions are measured in bytes; the occupied count distinguishes empty from full. */
struct ByteRing {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 *begin;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 capacity;
    /* 0x10 */ u32 readOffset;
    /* 0x14 */ u32 writeOffset;
    /* 0x18 */ u32 occupied;
};

/* A cursor keeps its ring, wrapped byte address and unwrapped position. */
struct ByteRingCursor {
    ByteRingCursor(ByteRing *ring, u8 *address, u32 position)
        : ring(ring), address(address), position(position) {}

    /* 0x00 */ ByteRing *ring;
    /* 0x04 */ u8 *address;
    /* 0x08 */ u32 position;
};

typedef char ByteRingLayoutCheck[offsetof(ByteRing, begin) == 4 && offsetof(ByteRing, capacity) == 0xC &&
    offsetof(ByteRing, occupied) == 0x18 && sizeof(ByteRingCursor) == 0xC ? 1 : -1];

#endif
