#include "common.h"
#include "shard/effectSetByteSpeed.h"
extern "C" {
void efctSetSpeed(f32 speed);
/* Normalize the unsigned byte-scale speed to floating point. */
void effectSetByteSpeed(u32 speed) { efctSetSpeed((f32)speed * 0.003921568859368563f); }
}
