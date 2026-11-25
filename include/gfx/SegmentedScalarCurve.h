#ifndef GFX_SEGMENTEDSCALARCURVE_H
#define GFX_SEGMENTEDSCALARCURVE_H
#include "common.h"
#include <stddef.h>

struct SegmentedScalarCurve {
    u8 intermediateCount;
    u8 unk01[3];
    f32 start;
    f32 end;
    u8 unk0c[8];
    f32 firstValue;
    f32 firstFraction;
    f32 secondValue;
    f32 secondFraction;
};
typedef char SegmentedScalarCurveLayoutCheck[
    sizeof(SegmentedScalarCurve) == 0x24 &&
    offsetof(SegmentedScalarCurve, start) == 4 &&
    offsetof(SegmentedScalarCurve, end) == 8 &&
    offsetof(SegmentedScalarCurve, firstValue) == 0x14 &&
    offsetof(SegmentedScalarCurve, firstFraction) == 0x18 &&
    offsetof(SegmentedScalarCurve, secondValue) == 0x1c &&
    offsetof(SegmentedScalarCurve, secondFraction) == 0x20 ? 1 : -1];

struct SegmentValues {
    f32 start;
    f32 end;
    f32 rate;
};

/* Selects the end key for a zero-length interval; otherwise gives its fractional progress. */
static __inline SegmentValues getSegmentValues(f32 duration, f32 frame, f32 start, f32 end)
{
    SegmentValues segment = { start, end, duration != 0.0f ? frame / duration : 1.0f };
    return segment;
}

#endif
