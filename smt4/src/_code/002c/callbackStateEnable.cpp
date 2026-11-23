#include "sound/SoundTestWork.h"

/* Marks the sound-test control process as requested. */
extern "C" void callbackStateEnable(u32)
{
    soundTestSetRequested(g_soundTestWork, 1);
}
