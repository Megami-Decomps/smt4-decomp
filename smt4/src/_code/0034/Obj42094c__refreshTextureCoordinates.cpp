#include "classes/Obj42094c.h"
#include "nw/math/VEC3.h"
#include "util/Random.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
f32 phaseCosInterpolate(f32 angle);
f32 mathSinFixedAngle(f32 angle);
} /* extern "C" */

/* Refresh the quad coordinates and initialize each filter motion's phase and speed. */
extern "C" void _ZN9Obj42094c25refreshTextureCoordinatesEv(Filter4PolyView *filter)
{
    filter->child->refreshRects();
    filter->vertices[0].u = filter->config->left;
    filter->vertices[0].v = filter->config->top;
    filter->vertices[1].u = filter->config->left;
    filter->vertices[1].v = filter->config->bottom;
    filter->vertices[2].u = filter->config->right;
    filter->vertices[2].v = filter->config->top;
    filter->vertices[3].u = filter->config->right;
    filter->vertices[3].v = filter->config->bottom;
    for (s32 index = 0; index < filter->config->count; ++index) {
        s32 frame = filter->config->frameStep * index;
        filter->motions[index].frame = frame;
        f32 fraction = randBetween(-32767, 32768) * (1.0f / 32768.0f);
        f32 speed = filter->config->maximumSpeed - filter->config->minimumSpeed;
        speed *= fraction;
        speed += filter->config->minimumSpeed;
        f32 phase = (f32)randNextInRange(65535) * (1.0f / 65536.0f) * 256.0f;
        setFilterPlanarVelocity(&filter->motions[index].velocity, phase, phaseCosInterpolate, mathSinFixedAngle);
        nw::math::VEC3Scale(&filter->motions[index].velocity, &filter->motions[index].velocity, speed);
    }
}
