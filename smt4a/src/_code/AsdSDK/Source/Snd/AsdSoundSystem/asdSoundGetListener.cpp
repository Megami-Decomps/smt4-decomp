#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u32 DAT_005c4c20;          /* guard for the listener's one-time construction */
extern AsdSndListener g_asdSoundListener;

s32 FUN_002eba64(u32 *guard);

/* The listener position, zeroed the first time it is asked for. */
AsdSndListener *asdSoundGetListener(void)
{
    if ((DAT_005c4c20 & 1) == 0 && FUN_002eba64(&DAT_005c4c20) != 0) {
        g_asdSoundListener.x = 0.0f;
        g_asdSoundListener.y = 0.0f;
        g_asdSoundListener.z = 0.0f;
    }
    return &g_asdSoundListener;
}

} /* extern "C" */
