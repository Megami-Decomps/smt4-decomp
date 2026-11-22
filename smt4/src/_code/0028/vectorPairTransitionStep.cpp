/* NON_MATCHING: the delta step matches (nn::math VEC3Add through pointers); in the smoothing step retail adds
 * through a pointer to each current vector (r1) and loads target/current in another order. */
#include "map/VectorPairTransition.h"
#include "map/LmapViewGlobals.h"

/* nn::math's VEC3Add, VEC3Sub and VEC3Scale. */
static __inline BattleVector3 *vec3Add(BattleVector3 *out, const BattleVector3 *a, const BattleVector3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
    return out;
}
static __inline BattleVector3 *vec3Sub(BattleVector3 *out, const BattleVector3 *a, const BattleVector3 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
    return out;
}
static __inline BattleVector3 *vec3Scale(BattleVector3 *out, const BattleVector3 *v, f32 scale)
{
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

extern "C" {

/* Advances the camera's two-vector move by one frame; returns 1 once it has arrived. */
s32 vectorPairTransitionStep()
{
    VectorPairTransition* transition = &g_lmapViewHolder.view->move;
    if (transition->frame >= transition->duration) {
        transition->current = transition->target;
        return 1;
    }
    if (transition->smoothing) {
        BattleVector3 displacement;
        vec3Sub(&displacement, &transition->target.first, &transition->current.first);
        vec3Scale(&displacement, &displacement, 1.0f / transition->smoothingDivisor);
        vec3Add(&transition->current.first, &transition->current.first, &displacement);
        vec3Sub(&displacement, &transition->target.second, &transition->current.second);
        vec3Scale(&displacement, &displacement, 1.0f / transition->smoothingDivisor);
        vec3Add(&transition->current.second, &transition->current.second, &displacement);
    } else {
        vec3Add(&transition->current.first, &transition->current.first, &transition->delta.first);
        vec3Add(&transition->current.second, &transition->current.second, &transition->delta.second);
    }
    ++transition->frame;
    return 0;
}
} // extern "C"
