/* nn::math's VEC3 header inlines (the C versions) for battle vectors. A header of their own: <math.h> changes the
 * code of units that declare sqrt themselves. */
#ifndef BATTLE_BATTLEVECTORMATH_H
#define BATTLE_BATTLEVECTORMATH_H

#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>

/* VEC3Add, VEC3Sub, VEC3Normalize and VEC3Scale: armcc reloads each operand through its pointer, as retail does in
 * battleVectorTransitionAimPath. */
static __inline BattleVector3 *battleVectorAdd(BattleVector3 *out, const BattleVector3 *a, const BattleVector3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
    return out;
}

static __inline BattleVector3 *battleVectorSub(BattleVector3 *out, const BattleVector3 *a, const BattleVector3 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
    return out;
}

static __inline BattleVector3 *battleVectorNormalize(BattleVector3 *out, const BattleVector3 *v)
{
    f32 scale = 1.0f / sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

static __inline BattleVector3 *battleVectorScale(BattleVector3 *out, const BattleVector3 *v, f32 scale)
{
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

#endif
