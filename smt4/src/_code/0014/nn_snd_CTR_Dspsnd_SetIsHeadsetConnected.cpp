#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

u8 nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(DspsndState *state, u8 value)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ok != 0) {
        DspCommand *params = state->commands[state->current];

        params->headsetConnected = value;
        params->flags |= 0x10000000;
    }
    return ok != 0;
}

} /* extern "C" */
