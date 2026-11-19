#ifndef EVENT_SPATIALEFFECTTASK_H
#define EVENT_SPATIALEFFECTTASK_H

#include "common.h"

struct ModelEffectTask;
struct SpatialTaskWorkA;

extern "C" {
/* Start a spatial effect, optionally setting a caller-owned activity flag. */
ModelEffectTask *FUN_00244e1c(u32 selector, u32 *activeFlag, f32 x, f32 y, f32 z,
                              f32 scale, u8 mode, u8 option);
SpatialTaskWorkA *FUN_0031ba34(u32 selector, u32 *activeFlag, f32 x, f32 y, f32 z,
                              f32 scale, u8 mode, u8 option);
}

#endif
