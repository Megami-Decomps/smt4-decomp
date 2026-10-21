#include "common.h"
extern "C" {
void FUN_002b080c(void *object,u32 mode,s32 value,f32 x,f32 y,f32 z,f32 w);
/* Reset the object in mode sixteen with default scalar values. */
void effectSpawnDefaultArguments(void *object) { FUN_002b080c(object,16,-1,0.0f,0.0f,0.0f,0.0f); }
}
