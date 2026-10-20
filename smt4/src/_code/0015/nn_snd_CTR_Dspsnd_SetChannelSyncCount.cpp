#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

u8 nn_snd_CTR_Dspsnd_SetChannelSyncCount(DspsndState *state, u8 channel, s16 count)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ok != 0) {
        DspChannelCommand *params = state->channels[state->bank & 1][channel];

        params->syncCount = count;
        params->flags |= 0x10000000;
    }
    return ok != 0;
}

} /* extern "C" */
