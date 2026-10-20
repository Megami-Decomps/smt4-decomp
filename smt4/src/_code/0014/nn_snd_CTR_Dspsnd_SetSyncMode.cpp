#include "shard/Dspsnd.h"

extern "C" {

extern int FUN_002bb274(void);

void nn_snd_CTR_Dspsnd_SetSyncMode(DspsndState *state, u16 value)
{
    int ok = FUN_002bb274();

    if (ok != 0) {
        DspCommand *params = state->commands[state->current];

        params->syncMode = value;
        params->syncFlags |= 0x10000;
    }
}

} /* extern "C" */
