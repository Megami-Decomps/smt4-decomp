#include "common.h"

extern "C" {

void FUN_00267d84(u32 sound, f32 speed);

/* Plays the sound at normal speed. */
void soundPlayAtNormalSpeed(u32 sound)
{
    FUN_00267d84(sound, 1.0f);
}

} /* extern "C" */
