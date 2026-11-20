#ifndef MAP_CHASE_VELOCITY_H
#define MAP_CHASE_VELOCITY_H

#include "map/MapVector.h"
#include <math.h>

/* Computes a displacement from the actor to the destination. */
static __inline MapVector mapChaseDirection(MapVector destination, const MapVector &actor)
{
    MapVector delta = {destination.x - actor.x, destination.y - actor.y, destination.z - actor.z};
    return delta;
}

/* Normalizes a displacement and scales it to the chase speed. */
static __inline void mapSetChaseVelocity(MapVector &velocity, MapVector delta, f32 speed)
{
    const f32 inverseLength = 1.0f / __sqrtf(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
    delta.x *= inverseLength;
    delta.y *= inverseLength;
    delta.z *= inverseLength;
    velocity.x = delta.x * speed;
    velocity.y = delta.y * speed;
    velocity.z = delta.z * speed;
}

#endif
