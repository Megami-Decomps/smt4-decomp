#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

void nn_snd_CTR_Dspsnd_SetSyncMode(DspsndState *state, u16 value)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ok != 0) {
        DspCommand *params = state->commands[state->current];

        params->syncMode = value;
        params->syncFlags |= 0x10000;
    }
}

} /* extern "C" */
