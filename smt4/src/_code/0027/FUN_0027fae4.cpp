/* NON_MATCHING: compiler caches repeated diagonal positions and saves an extra VFP register pair. */
#include "common.h"

extern "C" {
void FUN_002566b4(u32 state, f32 x, f32 y, f32 z, f32 height, f32 size);

// Emit a central particle and eight surrounding particles in the ground plane.
void FUN_0027fae4(f32 x, f32 y, f32 z)
{
    FUN_002566b4(12, x, y, z, 5.0f, 30.0f);
    FUN_002566b4(10, x - 50.0f, y, z, 5.0f, 25.0f);
    FUN_002566b4(11, x + 50.0f, y, z, 5.0f, 25.0f);
    FUN_002566b4(10, x, y, z - 50.0f, 5.0f, 25.0f);
    FUN_002566b4(11, x, y, z + 50.0f, 5.0f, 25.0f);
    FUN_002566b4(12, x - 40.0f, y, z - 40.0f, 5.0f, 25.0f);
    FUN_002566b4(11, x + 40.0f, y, z - 40.0f, 5.0f, 25.0f);
    FUN_002566b4(12, x - 40.0f, y, z + 40.0f, 5.0f, 25.0f);
    FUN_002566b4(10, x + 40.0f, y, z + 40.0f, 5.0f, 25.0f);
}
}
