#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Sets the IIR filter type of `channel` in the current bank and flags the change; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_SetChannelIirFilterType(DspsndState *state, s32 channel, u16 type)
{
    s32 result;
    DspChannelCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->channels[state->bank & 1][channel];
        command->iirFilterType = type;
        command->flags = command->flags | 0x400000;
    }
    return result != 0;
}

} /* extern "C" */
