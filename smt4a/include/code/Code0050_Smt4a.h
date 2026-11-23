#pragma once
#include "common.h"
#include "map/MapVector.h"
#include "nn/Result.h"

/* Functions in the 0x00500000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

MapVector mapVectorScaled(const MapVector *vector, f32 scale);

/* Reads the value of the token's registry entry. */
nn::Result tokenRegistryGetValue(const u32 *key, u32 *value);

} /* extern "C" */
