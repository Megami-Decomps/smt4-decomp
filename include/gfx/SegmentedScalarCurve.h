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
#endif
