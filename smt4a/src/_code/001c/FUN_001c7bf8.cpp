#include "shard/Dspsnd.h"

extern "C" {

extern DspsndState g_dspsndState;

u8 nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(DspsndState *state, u8 channel, u32 param);

/* Sets the ADPCM parameter of the channel whose index `channel` points to. */
u8 FUN_001c7bf8(u32 *channel, u32 param)
{
    return nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(&g_dspsndState, *channel, param);
}

} /* extern "C" */
