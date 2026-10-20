#include "shard/Dspsnd.h"

extern "C" {

extern int FUN_002bb274(void);

u8 nn_snd_CTR_Dspsnd_InitializeChannelParameters(DspsndState *state, u8 channel)
{
    int ok = FUN_002bb274();

    if (ok != 0) {
        DspChannelCommand *params = state->channels[state->bank & 1][channel];

        params->flags |= 0x20000000;
    }
    return ok != 0;
}

} /* extern "C" */
