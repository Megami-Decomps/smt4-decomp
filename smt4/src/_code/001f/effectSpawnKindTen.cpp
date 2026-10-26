#include "common.h"

extern "C" {

void FUN_002566b4(u32 kind, f32 x, f32 y, f32 z, f32 height, f32 duration);

/* Spawn an effect of the given kind with the standard height and duration. */
static __inline void effectSpawnKind(u32 kind, f32 x, f32 y, f32 z)
{
    FUN_002566b4(kind, x, y, z, 5.0f, 20.0f);
}

/* Spawn a kind-ten effect with the standard height and duration. */
void effectSpawnKindTen(f32 x, f32 y, f32 z)
{
    effectSpawnKind(10, x, y, z);
}

}
