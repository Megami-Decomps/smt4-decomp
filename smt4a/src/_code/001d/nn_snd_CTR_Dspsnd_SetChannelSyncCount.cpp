#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Sets the sync count of `channel` in the current bank and flags the change; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_SetChannelSyncCount(DspsndState *state, u8 channel, s16 count)
{
    s32 result;
    DspChannelCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->channels[state->bank & 1][channel];
        command->syncCount = count;
        command->flags = command->flags | 0x10000000;
    }
    return result != 0;
}

} /* extern "C" */
