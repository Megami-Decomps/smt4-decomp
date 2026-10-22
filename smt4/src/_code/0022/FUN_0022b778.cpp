/* NON_MATCHING: interpolation recovered; VFP load grouping, calculation scheduling and final paired position stores differ. */
#include "gfx/TransformInterpolation.h"

extern "C" {
// Advance the active transform interpolation by one frame.
void FUN_0022b778(TransformInterpolation* transform)
{
    if (transform->flags & 0x1000) {
        s32 duration = transform->duration;
        s32 elapsed = transform->elapsed + 1;
        transform->elapsed = elapsed;
        if (elapsed == duration) {
            transform->flags &= ~0x1000;
        }
        transform->valueA = ((transform->targetA - transform->startA) * (float)elapsed) /
                            (float)duration + transform->startA;
        transform->valueB = ((transform->targetB - transform->startB) * (float)elapsed) /
                            (float)duration + transform->startB;
        transform->x = ((transform->targetX - transform->startX) * (float)elapsed) /
                       (float)duration + transform->startX;
        transform->y = ((transform->targetY - transform->startY) * (float)elapsed) /
                       (float)duration + transform->startY;
    }
}
}
