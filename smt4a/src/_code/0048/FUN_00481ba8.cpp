/* NON_MATCHING: FP scheduling: retail loads the target with one vldmia, scene components with vldr and the 1.0f constant late */
#include "map/lmapMain.h"
#include <math.h>

struct Float3 {
    f32 values[3];
};

struct ChaseTarget {
    u8 unk00[0x2C];  // 0x00
    Float3 position; // 0x2C
};

struct ChaseMotion {
    u8 unk00[0x0C];       // 0x00
    ChaseTarget *target;  // 0x0C
    f32 velocity[3];      // 0x10
    u8 unk1c[4];          // 0x1C
    f32 speed;            // 0x20
};

extern "C" {
extern LmapScene *g_lmapScene; /* 0x447e88 */

/* Points the velocity from the target toward the map scene position, scaled to the speed. */
void FUN_00481ba8(ChaseMotion *motion)
{
    Float3 target = motion->target->position;
    f32 speed = motion->speed;
    f32 dx = g_lmapScene->transform.position[0] - target.values[0];
    f32 dy = g_lmapScene->transform.position[1] - target.values[1];
    f32 dz = g_lmapScene->transform.position[2] - target.values[2];
    f32 scale = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);

    motion->velocity[0] = dx * scale * speed;
    motion->velocity[1] = dy * scale * speed;
    motion->velocity[2] = dz * scale * speed;
}

} /* extern "C" */
