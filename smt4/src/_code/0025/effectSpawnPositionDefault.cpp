#include "common.h"
extern "C" {
void FUN_002aff74(f32 x, f32 y, f32 z, f32 first, f32 second);
/* Forward the position with both additional values zeroed. */
void effectSpawnPositionDefault(f32 x, f32 y, f32 z) { FUN_002aff74(x,y,z,0.0f,0.0f); }
}
