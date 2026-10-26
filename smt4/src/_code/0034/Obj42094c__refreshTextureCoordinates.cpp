/* NON_MATCHING: code, constants and the paired min/max load match retail; retail allocates the hoisted 0.0 constant to s19 below the other VFP constants (s20-s22) and uses two separate loads for the particle array and config instead of ldrd. */
#include "classes/Obj42094c.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
u32 randNextInRange(u32 limit);
f32 phaseCosInterpolate(f32 angle);
f32 FUN_002b70cc(f32 angle);
}

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
        filter->motions[index].frame = filter->config->frameStep * index;
        f32 fraction = randBetween(-32767, 32768) * (1.0f / 32768.0f);
        f32 speed = filter->config->maximumSpeed - filter->config->minimumSpeed;
        speed *= fraction;
        speed += filter->config->minimumSpeed;
        f32 phase = (f32)randNextInRange(65535) * (1.0f / 65536.0f) * 256.0f;
        f32 *velocity = &filter->motions[index].x;
        f32 x = phaseCosInterpolate(phase);
        f32 y = FUN_002b70cc(phase);
        velocity[0] = x;
        velocity[1] = y;
        velocity[2] = 0;
        velocity = &filter->motions[index].x;
        velocity[0] *= speed;
        velocity[1] *= speed;
        velocity[2] *= speed;
    }
}
