#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Sets the output buffer count on the active command block and flags the change, if the DSP is available. */
void nn_snd_CTR_Dspsnd_SetOutputBufferCount(DspsndState *state, s32 value)
{
    s32 result;
    DspCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->commands[state->current];
        command->outputBufferCount = (s16)value;
        command->flags = command->flags | 0x8000;
    }
}

} /* extern "C" */
