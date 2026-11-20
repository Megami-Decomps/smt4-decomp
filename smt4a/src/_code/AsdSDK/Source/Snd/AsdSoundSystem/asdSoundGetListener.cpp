#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u32 g_asdSoundListenerGuard;          /* guard for the listener's one-time construction */
extern AsdSndListener g_asdSoundListener;

s32 __cxa_guard_acquire(u32 *guard);
__weak void __cxa_guard_release(u32 *guard);

/* Returns the listener position, zeroing it the first time it is asked for. */
AsdSndListener *asdSoundGetListener(void)
{
    if ((g_asdSoundListenerGuard & 1) == 0 && __cxa_guard_acquire(&g_asdSoundListenerGuard) != 0) {
        g_asdSoundListener.x = 0.0f;
        g_asdSoundListener.y = 0.0f;
        g_asdSoundListener.z = 0.0f;
        __cxa_guard_release(&g_asdSoundListenerGuard);
    }
    return &g_asdSoundListener;
}

} /* extern "C" */
