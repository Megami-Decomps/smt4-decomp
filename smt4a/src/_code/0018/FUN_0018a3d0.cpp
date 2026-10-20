#include "common.h"

extern "C" {

u8 nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(u8 *state, u8 connected);
extern u8 g_dspsndState[];

/* Tells the DSP sound state whether a headset is connected; returns its result. */
u8 FUN_0018a3d0(u32 unused, u8 connected)
{
    u8 result;

    result = nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(g_dspsndState, connected);
    return result;
}

} /* extern "C" */
