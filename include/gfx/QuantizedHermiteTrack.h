#ifndef GFX_QUANTIZED_HERMITE_TRACK_H
#define GFX_QUANTIZED_HERMITE_TRACK_H
#include "common.h"
#include <stddef.h>

/* An eight-bit frame, a 12-bit value and one signed 12-bit tangent. */
struct QuantizedHermiteKey {
    u8 frame;
    u8 valueLow;
    u8 packed;
    s8 tangentHigh;
};
struct QuantizedHermiteTrack {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u16 count;
    /* 0x10 */ f32 valueScale;
    /* 0x14 */ f32 valueBias;
    /* 0x18 */ f32 frameScale;
    /* 0x1C */ f32 inverseDuration;
    /* 0x20 */ QuantizedHermiteKey *keys;
};
typedef char QuantizedHermiteTrackOffsets[
    sizeof(QuantizedHermiteKey) == 4 &&
    offsetof(QuantizedHermiteTrack, count) == 0xE &&
    offsetof(QuantizedHermiteTrack, valueScale) == 0x10 &&
    offsetof(QuantizedHermiteTrack, keys) == 0x20 &&
    sizeof(QuantizedHermiteTrack) == 0x24 ? 1 : -1];
#endif
