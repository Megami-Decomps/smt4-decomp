/* A keyframed animation curve: keys sorted by frame, 32 frames per normalized time unit. */
#ifndef SHARD_ANIMCURVE_H
#define SHARD_ANIMCURVE_H

#include "common.h"
#include <stddef.h>

struct AnimKey {
    /* 0x00 */ u16 frame;
    union {
        /* 0x02 */ u16 unk02[2];
        struct {
            u16 value; /* 0x02 */
            u16 unk04;
        } data;
    };
};

struct HermiteAnimationKey;
struct PackedAnimKeyWide;

struct AnimCurve {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0E */ u16 keyCount;
    union {
        /* 0x10 */ u8 unk10[0x8];
        struct {
            f32 scale;
            f32 base;
        } values;
    };
    /* 0x18 */ f32 duration;
    /* 0x1C */ f32 keyRate;    /* estimated key index per (time * (keyCount - 1)) */
    union {
        /* 0x20 */ AnimKey *keys;
        /* 0x20 */ HermiteAnimationKey *hermiteKeys;
        /* 0x20 */ PackedAnimKeyWide *packedScalarKeys;
    };
};

typedef char AnimKeySizeCheck[sizeof(AnimKey) == 6 ? 1 : -1];
typedef char AnimCurveKeysOffsetCheck[offsetof(AnimCurve, keys) == 0x20 ? 1 : -1];
typedef char AnimCurveValueOffsetsCheck[offsetof(AnimKey, data.value) == 2 &&
    offsetof(AnimCurve, values.scale) == 0x10 && offsetof(AnimCurve, values.base) == 0x14 &&
    sizeof(AnimCurve) == 0x24 ? 1 : -1];
typedef char AnimCurveHermiteKeysOffsetCheck[offsetof(AnimCurve, hermiteKeys) == 0x20 ? 1 : -1];
typedef char AnimCurvePackedScalarKeysOffsetCheck[
    offsetof(AnimCurve, packedScalarKeys) == 0x20 ? 1 : -1];

/* Packed unsigned keys follow this curve header directly. */
struct QuantizedAnimCurve {
    u16 keyCount; // 0x00
    u8 unk02[6];
    f32 valueScale; // 0x08
    f32 valueBase; // 0x0c
    f32 timeScale; // 0x10
    AnimKey keys[1]; // 0x14: variable length
};
typedef char QuantizedAnimCurveKeysOffsetCheck[
    offsetof(QuantizedAnimCurve, valueScale) == 8 &&
    offsetof(QuantizedAnimCurve, timeScale) == 0x10 &&
    offsetof(QuantizedAnimCurve, keys) == 0x14 ? 1 : -1];

struct PackedAnimKeyWide {
    u32 frame : 12;
    u32 value : 20;
    union {
        u32 tangent;
        struct {
            s16 incoming;
            s16 outgoing;
        } slopes; // signed fixed-point tangents with eight fractional bits
    };
};
struct PackedAnimKeyNarrow {
    u8 frame;
    u8 valueLow;
    u8 valueHigh;
    u8 tangent;
};
typedef char PackedAnimKeyWideSizeCheck[sizeof(PackedAnimKeyWide) == 8 &&
    offsetof(PackedAnimKeyWide, tangent) == 4 ? 1 : -1];
typedef char PackedAnimKeyWideSlopeOffsets[
    offsetof(PackedAnimKeyWide, slopes.incoming) == 4 &&
    offsetof(PackedAnimKeyWide, slopes.outgoing) == 6 ? 1 : -1];
typedef char PackedAnimKeyNarrowSizeCheck[sizeof(PackedAnimKeyNarrow) == 4 &&
    offsetof(PackedAnimKeyNarrow, valueLow) == 1 && offsetof(PackedAnimKeyNarrow, valueHigh) == 2 ? 1 : -1];

// Linear scalar keys store a twelve-bit frame and a twenty-bit unsigned value.
struct PackedScalarAnimKey {
    u32 frame : 12;
    u32 value : 20;
};
struct PackedScalarAnimCurve {
    u16 keyCount;
    u8 unk02[6];
    f32 valueScale; // 0x08
    f32 valueBase; // 0x0c
    f32 timeScale; // 0x10
    PackedScalarAnimKey keys[1]; // 0x14: variable length
};
typedef char PackedScalarAnimCurveLayoutCheck[sizeof(PackedScalarAnimKey) == 4 &&
    offsetof(PackedScalarAnimCurve, keyCount) == 0 &&
    offsetof(PackedScalarAnimCurve, valueScale) == 8 &&
    offsetof(PackedScalarAnimCurve, valueBase) == 0x0c &&
    offsetof(PackedScalarAnimCurve, timeScale) == 0x10 &&
    offsetof(PackedScalarAnimCurve, keys) == 0x14 ? 1 : -1];

/* The inline-header variant with eight-byte packed scalar keys. */
struct PackedAnimCurveWide {
    u16 keyCount;
    u8 unk02[6];
    f32 valueScale;
    f32 valueBase;
    f32 timeScale;
    PackedAnimKeyWide keys[1];
};
typedef char PackedAnimCurveWideLayoutCheck[
    offsetof(PackedAnimCurveWide, keyCount) == 0 &&
    offsetof(PackedAnimCurveWide, valueScale) == 8 &&
    offsetof(PackedAnimCurveWide, valueBase) == 0xC &&
    offsetof(PackedAnimCurveWide, timeScale) == 0x10 &&
    offsetof(PackedAnimCurveWide, keys) == 0x14 && sizeof(PackedAnimCurveWide) == 0x1C ? 1 : -1];

#endif
