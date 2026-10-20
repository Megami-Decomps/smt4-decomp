#include "shard/Dspsnd.h"

extern "C" {

extern int FUN_002bb274(void);

u8 nn_snd_CTR_Dspsnd_SetSoundOutputMode(DspsndState *state, u16 value)
{
    int ok = FUN_002bb274();

    if (ok != 0) {
        DspCommand *params = state->commands[state->current];

        params->soundOutputMode = value;
        params->flags |= 0x4000000;
    }
    return ok != 0;
}

} /* extern "C" */
