#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

u8 nn_snd_CTR_Dspsnd_SetChannelIirFilterType(DspsndState *state, s32 channel, u16 type)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ok != 0) {
        DspChannelCommand *params = state->channels[state->bank & 1][channel];

        params->iirFilterType = type;
        params->flags |= 0x400000;
    }
    return ok != 0;
}

} /* extern "C" */
