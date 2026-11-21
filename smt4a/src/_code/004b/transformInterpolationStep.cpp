/* NON_MATCHING: the early exit and the counter update match; retail loads the fields in another order (targetA/B
 * with one vldmia), interleaves the conversions differently and stores valueA and valueB separately. */
#include "gfx/TransformInterpolation.h"

extern "C" {
/* The value `elapsed` frames of `duration` along from `start` to `target`. */
static __inline f32 transformInterpolate(f32 start, f32 target, f32 elapsed, f32 duration)
{
    return ((target - start) * elapsed) / duration + start;
}

/* Advances the active transform interpolation by one frame. */
void transformInterpolationStep(TransformInterpolation* transform)
{
    if (transform->flags & 0x1000) {
        s32 duration = transform->duration;
        s32 elapsed = transform->elapsed + 1;
        transform->elapsed = elapsed;
        if (elapsed == duration) {
            transform->flags &= ~0x1000;
        }
        transform->valueA = transformInterpolate(transform->startA, transform->targetA, elapsed, duration);
        transform->valueB = transformInterpolate(transform->startB, transform->targetB, elapsed, duration);
        transform->x = transformInterpolate(transform->startX, transform->targetX, elapsed, duration);
        transform->y = transformInterpolate(transform->startY, transform->targetY, elapsed, duration);
    }
}
}
