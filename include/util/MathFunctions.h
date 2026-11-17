#pragma once
#include "common.h"
#include "map/MapVector.h"

/* Math helpers. */
extern "C" {

f32 mathDistanceBetweenPoints(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
/* The heading from one point to another in degrees (0..360), from the x and z differences. */
f32 mathPositionHeadingDegrees(MapVector from, MapVector to);
/* The signed difference `to - from` between two angles in degrees, wrapped to the short way round. */
f32 mathAngleDeltaDegrees(f32 from, f32 to);
/* The dot product of two three-component vectors. */
f32 mathVec3Dot(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
/* Sets the three components to zero. */
void mathVectorClear(f32 *vector);
/* Copies the three words at 0x0C to the three words at 0x00. */
void vec3CopyFromOffsetC(u32 *object);

} /* extern "C" */
