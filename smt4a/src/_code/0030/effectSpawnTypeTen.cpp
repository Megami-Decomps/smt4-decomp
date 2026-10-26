#include "common.h"
extern "C" {
void FUN_00364578(u32 kind,f32 x,f32 y,f32 z,f32 height,f32 duration);

/* Spawn an effect of the given kind with the standard height and the long duration. */
static __inline void effectSpawnKindLong(u32 kind, f32 x, f32 y, f32 z)
{
    FUN_00364578(kind, x, y, z, 5.0f, 40.0f);
}

void effectSpawnTypeTen(f32 x,f32 y,f32 z) { effectSpawnKindLong(10, x, y, z); }
}
