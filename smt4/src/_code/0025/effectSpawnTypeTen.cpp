/* NON_MATCHING: float-argument loads are scheduled before retail's effect-kind argument. */
#include "common.h"
extern "C" {
void FUN_002566b4(u32 kind,f32 x,f32 y,f32 z,f32 height,f32 duration);
/* Spawn a kind-ten effect with the short-height preset. */
void effectSpawnTypeTen(f32 x,f32 y,f32 z) { FUN_002566b4(10,x,y,z,5.0f,40.0f); }
}
