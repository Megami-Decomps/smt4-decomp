#include "sound/SoundTestWork.h"

extern "C" {

/* Raises the request flag when the sound-test control process ends. */
void workRequest(u32 handle)
{
    soundTestSetRequested(g_requestWork, 1);
}

} /* extern "C" */
