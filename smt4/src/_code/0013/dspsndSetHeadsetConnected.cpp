#include "common.h"

extern "C" {

extern u8 g_dspsndState;
extern u8 nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(u8 *state, u8 connected); // declcheck: local (the shared declaration does not compile here or changes this unit)

u8 dspsndSetHeadsetConnected(u32 unused, u8 connected)
{
    return nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(&g_dspsndState, connected);
}

} /* extern "C" */
