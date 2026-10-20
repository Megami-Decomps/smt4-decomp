#include "shard/Dspsnd.h"

extern "C" {

extern int FUN_002bb274(void);

u8 nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Mono(DspsndState *state, u8 channel, u16 a, u16 b)
{
    int ok = FUN_002bb274();

    if (ok != 0) {
        DspChannelCommand *params = state->channels[state->bank & 1][channel];

        params->iirMonoA = a;
        params->iirMonoB = b;
        params->flags |= 0x800000;
    }
    return ok != 0;
}

} /* extern "C" */
