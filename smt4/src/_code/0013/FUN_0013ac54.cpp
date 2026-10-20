#include "common.h"

extern "C" {

extern u8 g_dspsndState;
extern u8 nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(u8 *state, u8 connected);

u8 FUN_0013ac54(u32 unused, u8 connected)
{
    return nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(&g_dspsndState, connected);
}

} /* extern "C" */
