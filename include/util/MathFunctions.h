#pragma once
#include "common.h"

/* Math helpers. */
extern "C" {

f32 mathDistanceBetweenPoints(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

s32 vec2GetXInt(const void *object);

} /* extern "C" */
