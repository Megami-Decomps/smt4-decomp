/* NON_MATCHING: particle state and floating-point operations are recovered; VFP register and paired-store scheduling still differ. */
#include "classes/Obj42094c.h"
extern "C" {
s32 FUN_00184964(s32 minimum, s32 maximum);
u32 randRange(u32 limit);
f32 FUN_001a1ee0(f32 phase);
f32 FUN_001b63b0(f32 phase);
}

void Obj42094c::prepareGeometry()
{
    Filter4PolyView *filter = (Filter4PolyView *)this;
    filter->child->refreshOffsets();
    for (s32 i = 0; i < filter->config->count; ++i) {
        Filter4PolyMotion *motion = &filter->motions[i];
        ++motion->frame;
        if (motion->frame % filter->config->period == 0) {
            f32 fraction = (f32)FUN_00184964(-32767, 32768) * (1.0f / 32768.0f);
            f32 minimum = filter->config->minimumSpeed;
            f32 speed = minimum + (filter->config->maximumSpeed - minimum) * fraction;
            f32 phase = (f32)randRange(65535) * (1.0f / 65536.0f) * 256.0f;
            motion->x = FUN_001b63b0(phase);
            motion->y = FUN_001a1ee0(phase);
            motion->z = 0;
            motion->x *= speed;
            motion->y *= speed;
            motion->z *= speed;
        }
        motion->matrix[0] = 1;
        motion->matrix[1] = 0;
        motion->matrix[2] = 0;
        motion->matrix[3] = motion->x;
        motion->matrix[4] = 0;
        motion->matrix[5] = 1;
        motion->matrix[6] = 0;
        motion->matrix[7] = motion->y;
        motion->matrix[8] = 0;
        motion->matrix[9] = 0;
        motion->matrix[10] = 1;
        motion->matrix[11] = motion->z;
        motion->matrix[12] = 0;
        motion->matrix[13] = 0;
        motion->matrix[14] = 0;
        motion->matrix[15] = 1;
    }
}
