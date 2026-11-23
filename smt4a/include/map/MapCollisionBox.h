#ifndef SMT4A_MAP_MAPCOLLISIONBOX_H
#define SMT4A_MAP_MAPCOLLISIONBOX_H

#include "nw/math/VEC3.h"

/* Queues the four walls of an upright collision box. The angle is in degrees. */
extern "C" void mapCollisionQueueBoxWalls(nw::math::VEC3 position, f32 angle, f32 width,
    u16 tag, f32 height, f32 depth);

#endif
