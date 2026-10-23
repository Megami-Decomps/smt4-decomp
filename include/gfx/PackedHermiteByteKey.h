#ifndef GFX_PACKED_HERMITE_BYTE_KEY_H
#define GFX_PACKED_HERMITE_BYTE_KEY_H
#include "shard/AnimCurve.h"

/* Six-byte key: an eight-bit frame, a sixteen-bit value, and two signed 12-bit tangents. */
struct PackedHermiteByteKey {
    u8 frame;
    u8 valueLow;
    u8 valueHigh;
    u8 incomingLow;
    u8 tangentNibbles;
    s8 outgoingHigh;
};
typedef char PackedHermiteByteKeyLayout[sizeof(PackedHermiteByteKey) == 6 &&
    offsetof(PackedHermiteByteKey, tangentNibbles) == 4 &&
    offsetof(PackedHermiteByteKey, outgoingHigh) == 5 ? 1 : -1];
#endif
