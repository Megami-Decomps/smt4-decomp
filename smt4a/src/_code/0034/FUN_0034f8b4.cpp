/* NON_MATCHING: segment dispatch, floating-point register allocation and zero-duration ratio paths differ. */
#include "gfx/SegmentedScalarCurve.h"

static __inline f32 segmentProgress(f32 frame, f32 duration)
{
    return duration != 0.0f ? frame / duration : 1.0f;
}

// Evaluate a linear scalar track with zero, one or two intermediate keys.
extern "C" f32 FUN_0034f8b4(const void *data, s32 frame, s32 duration)
{
    const SegmentedScalarCurve *curve = static_cast<const SegmentedScalarCurve *>(data);
    if (duration == 0)
        return curve->start;
    f32 total = static_cast<f32>(duration);
    f32 progress = 0.0f;
    f32 start, end;
    if (curve->intermediateCount == 0) {
        start = curve->start;
        end = curve->end;
        progress = static_cast<f32>(frame) / total;
    } else if (curve->intermediateCount == 1) {
        u32 split = static_cast<s32>(curve->firstFraction * total);
        if (frame < split) {
            start = curve->start;
            end = curve->firstValue;
            progress = static_cast<f32>(frame) / static_cast<f32>(split);
        } else {
            start = curve->firstValue;
            end = curve->end;
            progress = segmentProgress(static_cast<f32>(frame - split), static_cast<f32>(duration - split));
        }
    } else if (curve->intermediateCount == 2) {
        s32 first = static_cast<s32>(curve->firstFraction * total);
        if (first > frame) {
            start = curve->start;
            end = curve->firstValue;
            progress = static_cast<f32>(frame) / static_cast<f32>(first);
        } else {
            u32 second = static_cast<s32>(curve->secondFraction * total);
            if (frame < second) {
                start = curve->firstValue;
                end = curve->secondValue;
                progress = segmentProgress(static_cast<f32>(frame - first), static_cast<f32>(second - first));
            } else {
                start = curve->secondValue;
                end = curve->end;
                progress = segmentProgress(static_cast<f32>(frame - second), static_cast<f32>(duration - second));
            }
        }
    } else {
        start = curve->start;
        end = curve->end;
    }
    return start + (end - start) * progress;
}
