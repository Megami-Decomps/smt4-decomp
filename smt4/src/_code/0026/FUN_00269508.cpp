/* NON_MATCHING: the opening division is merged across cases and the zero test and
 * floating-point conversion of the elapsed time are scheduled differently. */
#include "gfx/SegmentedScalarCurve.h"

/* Evaluates a linear scalar track with zero, one or two intermediate keys. */
extern "C" f32 FUN_00269508(const void *data, s32 frame, s32 duration)
{
    const SegmentedScalarCurve *curve = (const SegmentedScalarCurve *)data;
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
        s32 split = static_cast<s32>(curve->firstFraction * total);
        if (frame < split) {
            start = curve->start;
            end = curve->firstValue;
            progress = static_cast<f32>(frame) / static_cast<f32>(split);
        } else {
            SegmentValues segment = getSegmentValues((f32)(duration - split), (f32)(frame - split),
                                                    curve->firstValue, curve->end);
            start = segment.start;
            end = segment.end;
            progress = segment.rate;
        }
    } else if (curve->intermediateCount == 2) {
        s32 first = static_cast<s32>(curve->firstFraction * total);
        if (first > frame) {
            start = curve->start;
            end = curve->firstValue;
            progress = static_cast<f32>(frame) / static_cast<f32>(first);
        } else {
            s32 second = static_cast<s32>(curve->secondFraction * total);
            if (frame < second) {
                SegmentValues segment = getSegmentValues((f32)(second - first), (f32)(frame - first),
                                                        curve->firstValue, curve->secondValue);
                start = segment.start;
                end = segment.end;
                progress = segment.rate;
            } else {
                SegmentValues segment = getSegmentValues((f32)(duration - second), (f32)(frame - second),
                                                        curve->secondValue, curve->end);
                start = segment.start;
                end = segment.end;
                progress = segment.rate;
            }
        }
    } else {
        start = curve->start;
        end = curve->end;
    }
    return start + (end - start) * progress;
}
