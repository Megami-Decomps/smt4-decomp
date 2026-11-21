/* NON_MATCHING: retail fills the matrix from integer registers (no 1.0f in its pool), keeps the speed's
 * product and sum apart (no vmla) and reloads the direction before scaling it. */
#include "classes/Obj42094c.h"
extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
u32 randRange(u32 limit);
f32 FUN_001a1ee0(f32 phase);
f32 phaseCosine(f32 phase);
}

void Obj42094c::prepareGeometry()
{
    Filter4PolyView *filter = (Filter4PolyView *)this;
    filter->child->refreshOffsets();
    for (s32 i = 0; i < filter->config->count; ++i) {
        Filter4PolyMotion *motion = &filter->motions[i];
        ++motion->frame;
        if (motion->frame % filter->config->period == 0) {
            f32 fraction = (f32)randBetween(-32767, 32768) * (1.0f / 32768.0f);
            f32 minimum = filter->config->minimumSpeed;
            f32 speed = minimum + (filter->config->maximumSpeed - minimum) * fraction;
            f32 phase = (f32)randRange(65535) * (1.0f / 65536.0f) * 256.0f;
            motion->x = phaseCosine(phase);
            motion->y = FUN_001a1ee0(phase);
            motion->z = 0;
            motion->x *= speed;
            motion->y *= speed;
            motion->z *= speed;
        }
        f32 *m = motion->matrix;
        m[0] = 1;
        m[1] = 0;
        m[2] = 0;
        m[3] = motion->x;
        m[4] = 0;
        m[5] = 1;
        m[6] = 0;
        m[7] = motion->y;
        m[8] = 0;
        m[9] = 0;
        m[10] = 1;
        m[11] = motion->z;
        m[12] = 0;
        m[13] = 0;
        m[14] = 0;
        m[15] = 1;
    }
}
