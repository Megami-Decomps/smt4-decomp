#ifndef SHARD_EFFECTCOMPUTESCALEDIMAGEBOUNDS_H
#define SHARD_EFFECTCOMPUTESCALEDIMAGEBOUNDS_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"

#ifdef __cplusplus
extern "C" {
#endif

void effectComputeScaledImageBounds(const EffectBoundsSource *source, f32 *bounds, f32 scale);

#ifdef __cplusplus
}
#endif

#endif
