#ifndef SMT4_SOUND_SOUNDTESTWORK_H
#define SMT4_SOUND_SOUNDTESTWORK_H

#include "sound/SoundTestState.h"

extern "C" {
extern SoundTestWork *g_soundTestWork;
s32 soundTestActionMenuUpdate(u32 handle);
s32 soundTestDrawJobUpdate(u32 handle);
void callbackStateEnable(u32 handle);
void FUN_002f4b34(u32 handle);
} /* extern "C" */

#endif
