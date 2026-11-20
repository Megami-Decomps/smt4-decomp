#ifndef EVENT_SPATIALEFFECTTASK_H
#define EVENT_SPATIALEFFECTTASK_H

#include "common.h"

struct SpatialTaskWorkA;

extern "C" {
/* Start a spatial effect, optionally setting a caller-owned activity flag. */
SpatialTaskWorkA *spatialEffectTaskCreate(u32 selector, u32 *activeFlag, f32 x, f32 y, f32 z,
                              f32 scale, u8 mode, u8 option);
}

#endif
