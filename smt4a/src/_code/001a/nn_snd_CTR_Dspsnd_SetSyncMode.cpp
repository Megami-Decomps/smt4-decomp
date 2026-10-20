#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Sets the sync mode on the active command block and flags the change, if the DSP is available. */
void nn_snd_CTR_Dspsnd_SetSyncMode(DspsndState *state, u16 value)
{
    s32 result;
    DspCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->commands[state->current];
        command->syncMode = value;
        command->syncFlags = command->syncFlags | 0x10000;
    }
}

} /* extern "C" */
