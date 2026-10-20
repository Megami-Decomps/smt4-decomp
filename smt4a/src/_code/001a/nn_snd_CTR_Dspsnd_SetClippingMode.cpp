#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Sets the clipping mode on the active command block and flags the change; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_SetClippingMode(DspsndState *state, u16 value)
{
    s32 result;
    DspCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->commands[state->current];
        command->clippingMode = value;
        command->flags = command->flags | 0x8000000;
    }
    return result != 0;
}

} /* extern "C" */
