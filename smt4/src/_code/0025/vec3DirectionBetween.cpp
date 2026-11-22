#include "common.h"
#include "nw/math/VEC3.h"

using namespace nw::math;

extern "C" {

/* Writes the unit vector pointing from `from` to `to`. */
void vec3DirectionBetween(VEC3 *out, VEC3 from, VEC3 to)
{
    VEC3 direction;

    VEC3Sub(&direction, &to, &from);
    VEC3Normalize(out, &direction);
}

} /* extern "C" */
