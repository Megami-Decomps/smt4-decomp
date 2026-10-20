#include "shard/Dspsnd.h"

extern "C" {

s32 nn_snd_CTR_Dspsnd_IsInitialized(void);

/* Sets the IIR filter type of `channel` in the current bank and flags the change; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_SetChannelIirFilterType(DspsndState *state, s32 channel, u16 type)
{
    s32 result;
    DspChannelCommand *command;

    result = nn_snd_CTR_Dspsnd_IsInitialized();
    if (result != 0) {
        command = state->channels[state->bank & 1][channel];
        command->iirFilterType = type;
        command->flags = command->flags | 0x400000;
    }
    return result != 0;
}

} /* extern "C" */
