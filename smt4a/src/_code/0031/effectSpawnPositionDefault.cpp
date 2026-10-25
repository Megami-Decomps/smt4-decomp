#include "common.h"
#include "shard/W6_W6Match2_GeometryResources.h"
extern "C" {
void FUN_00184c50(f32 x, f32 y, f32 z, f32 first, f32 second);
/* Forward the position with both additional values zeroed. */
void effectSpawnPositionDefault(f32 x, f32 y, f32 z) { FUN_00184c50(x,y,z,0.0f,0.0f); }
}
