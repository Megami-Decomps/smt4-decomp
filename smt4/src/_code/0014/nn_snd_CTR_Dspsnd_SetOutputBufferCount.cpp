#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

void nn_snd_CTR_Dspsnd_SetOutputBufferCount(DspsndState *state, int value)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ok != 0) {
        DspCommand *params = state->commands[state->current];

        params->outputBufferCount = (s16)value;
        params->flags |= 0x8000;
    }
}

} /* extern "C" */
