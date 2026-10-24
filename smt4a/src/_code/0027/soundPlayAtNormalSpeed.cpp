#include "common.h"

extern "C" {

void FUN_00322984(u32 sound, f32 speed);

/* Plays the sound at normal speed. */
void soundPlayAtNormalSpeed(u32 sound)
{
    FUN_00322984(sound, 1.0f);
}

} /* extern "C" */
