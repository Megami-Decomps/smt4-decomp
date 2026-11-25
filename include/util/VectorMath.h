#ifndef UTIL_VECTORMATH_H
#define UTIL_VECTORMATH_H

#include "nw/math/MTX33.h"

/* Writes the unit vector pointing from `from` to `to`. */
extern "C" void vec3DirectionBetween(nw::math::VEC3 *direction, nw::math::VEC3 from, nw::math::VEC3 to);

#endif
