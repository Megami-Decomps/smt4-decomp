#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

u8 nn_snd_CTR_Dspsnd_InitializeChannelParameters(DspsndState *state, u8 channel)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ok != 0) {
        DspChannelCommand *params = state->channels[state->bank & 1][channel];

        params->flags |= 0x20000000;
    }
    return ok != 0;
}

} /* extern "C" */
