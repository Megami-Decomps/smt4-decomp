/* NON_MATCHING: the planar velocity stores and reloads, and the scratch registers used for its translation matrix, differ. */
#include "classes/Obj42094c.h"
#include "nw/math/VEC3.h"
#include "nw/math/MTX44Transform.h"
#include "util/Random.h"
extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
f32 mathSinFixedAngle(f32 phase);
f32 phaseCosInterpolate(f32 phase);
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
            f32 speed = filter->config->maximumSpeed - filter->config->minimumSpeed;
            speed *= fraction;
            speed += filter->config->minimumSpeed;
            f32 phase = (f32)randNextInRange(65535) * (1.0f / 65536.0f) * 256.0f;
            setFilterPlanarVelocity(&motion->velocity, phase, phaseCosInterpolate, mathSinFixedAngle);
            nw::math::VEC3Scale(&motion->velocity, &motion->velocity, speed);
        }
        nw::math::MTX44Translate(&motion->matrix, &motion->velocity);
    }
}
