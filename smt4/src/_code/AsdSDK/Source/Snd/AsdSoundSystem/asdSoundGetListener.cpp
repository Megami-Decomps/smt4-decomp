#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u32 DAT_00476628;          /* guard for the listener's one-time construction */
extern AsdSndListener g_asdSoundListener;

s32 __cxa_guard_acquire(u32 *guard);
__weak void __cxa_guard_release(u32 *guard);

/* The listener position, zeroed the first time it is asked for. */
AsdSndListener *asdSoundGetListener(void)
{
    if ((DAT_00476628 & 1) == 0 && __cxa_guard_acquire(&DAT_00476628) != 0) {
        g_asdSoundListener.x = 0.0f;
        g_asdSoundListener.y = 0.0f;
        g_asdSoundListener.z = 0.0f;
        __cxa_guard_release(&DAT_00476628);
    }
    return &g_asdSoundListener;
}

} /* extern "C" */
