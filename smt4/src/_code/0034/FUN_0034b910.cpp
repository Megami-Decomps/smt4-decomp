/* NON_MATCHING: random/phase constants and motion field addresses use different preserved registers; paired field loads and scaling stores are scheduled differently. */
#include "classes/Obj42094c.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
u32 randNextInRange(s32 limit);
f32 phaseCosInterpolate(f32 angle);
f32 FUN_002b70cc(f32 angle);
}

/* Refresh the quad coordinates and initialize each filter motion's phase and speed. */
extern "C" void FUN_0034b910(Filter4PolyView *filter)
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
        f32 randomSpeed = (f32)randBetween(-32767, 32768) * (1.0f / 32768.0f);
        f32 minimum = filter->config->minimumSpeed;
        f32 speed = minimum + (filter->config->maximumSpeed - minimum) * randomSpeed;
        f32 randomPhase = (f32)randNextInRange(65535) * (1.0f / 65536.0f);
        f32 angle = randomPhase * 256.0f;
        Filter4PolyMotion *motion = &filter->motions[index];
        f32 cosine = phaseCosInterpolate(angle);
        f32 sine = FUN_002b70cc(angle);
        motion->x = cosine;
        motion->y = sine;
        motion->z = 0.0f;
        filter->motions[index].x *= speed;
        filter->motions[index].y *= speed;
        filter->motions[index].z *= speed;
    }
}
