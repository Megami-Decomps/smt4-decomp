#include "shard/Dspsnd.h"

extern "C" {

extern int FUN_002bb274(void);

void nn_snd_CTR_Dspsnd_SetOutputBufferCount(DspsndState *state, int value)
{
    int ok = FUN_002bb274();

    if (ok != 0) {
        DspCommand *params = state->commands[state->current];

        params->outputBufferCount = (s16)value;
        params->flags |= 0x8000;
    }
}

} /* extern "C" */
