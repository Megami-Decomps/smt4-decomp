/* NON_MATCHING: armcc schedules the fixed float arguments before the kind argument. */
#include "common.h"

extern "C" {

void FUN_00364578(u32 kind, f32 x, f32 y, f32 z, f32 height, f32 duration);

/* Spawn a kind-ten effect with the standard height and duration. */
void effectSpawnKindTen(f32 x, f32 y, f32 z)
{
    FUN_00364578(10, x, y, z, 5.0f, 20.0f);
}

}
