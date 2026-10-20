#include "shard/Dspsnd.h"

extern "C" {

s32 nn_snd_CTR_Dspsnd_IsInitialized(void);

/* Sets the sync mode on the active command block and flags the change, if the DSP is available. */
void nn_snd_CTR_Dspsnd_SetSyncMode(DspsndState *state, u16 value)
{
    s32 result;
    DspCommand *command;

    result = nn_snd_CTR_Dspsnd_IsInitialized();
    if (result != 0) {
        command = state->commands[state->current];
        command->syncMode = value;
        command->syncFlags = command->syncFlags | 0x10000;
    }
}

} /* extern "C" */
