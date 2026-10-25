#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

typedef struct CallbackState {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 loaded;
    /* 0x2 */ u8 unk2[6];
    /* 0x8 */ u32 component;
} CallbackState;

extern CallbackState g_callbackState;

u32 nn_dsp_CTR_DSP_UnloadComponent(u32 component);

/* Unloads the DSP component if it was loaded; returns the unload result (0 if nothing was loaded). */
u32 dspComponentUnload(void)
{
    u32 result = 0;

    if (g_callbackState.loaded != 0) {
        result = nn_dsp_CTR_DSP_UnloadComponent(g_callbackState.component);
        g_callbackState.loaded = 0;
    }
    return result;
}

} /* extern "C" */
