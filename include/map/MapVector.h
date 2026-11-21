/* A position or direction in map space: three floats. */
#ifndef MAP_MAPVECTOR_H
#define MAP_MAPVECTOR_H

#include "common.h"

struct MapVector {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};

/* nn::math's VEC3Sub and VEC3Scale header inlines for map vectors. */
static __inline MapVector mapVectorSub(MapVector a, const MapVector &b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __inline MapVector *mapVectorScale(MapVector *out, const MapVector *v, f32 scale)
{
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

#endif
