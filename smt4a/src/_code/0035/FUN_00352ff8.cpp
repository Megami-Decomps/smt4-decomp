/* NON_MATCHING: compiler caches diagonal positions across calls, increasing saved VFP registers. */
#include "common.h"

extern "C" {
void effParticleSpawnCycleOrientation(s32 kind, f32 x, f32 y, f32 z, f32 angle, f32 size);

// Spawn a center effect and eight surrounding effects in the horizontal plane.
void FUN_00352ff8(f32 x, f32 y, f32 z)
{
    effParticleSpawnCycleOrientation(20, x, y, z, 0.0f, 50.0f);
    effParticleSpawnCycleOrientation(22, x - 70.0f, y, z, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(19, x + 70.0f, y, z, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(18, x, y, z - 70.0f, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(21, x, y, z + 70.0f, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(20, x - 60.0f, y, z - 60.0f, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(19, x + 60.0f, y, z - 60.0f, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(21, x - 60.0f, y, z + 60.0f, 0.0f, 45.0f);
    effParticleSpawnCycleOrientation(18, x + 60.0f, y, z + 60.0f, 0.0f, 45.0f);
}
}
