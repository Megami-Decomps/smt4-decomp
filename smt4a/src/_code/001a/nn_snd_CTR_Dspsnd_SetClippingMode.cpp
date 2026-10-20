#include "shard/Dspsnd.h"

extern "C" {

s32 nn_snd_CTR_Dspsnd_IsInitialized(void);

/* Sets the clipping mode on the active command block and flags the change; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_SetClippingMode(DspsndState *state, u16 value)
{
    s32 result;
    DspCommand *command;

    result = nn_snd_CTR_Dspsnd_IsInitialized();
    if (result != 0) {
        command = state->commands[state->current];
        command->clippingMode = value;
        command->flags = command->flags | 0x8000000;
    }
    return result != 0;
}

} /* extern "C" */
