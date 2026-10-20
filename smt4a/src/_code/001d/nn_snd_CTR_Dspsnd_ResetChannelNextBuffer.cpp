#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Flags `channel` of the current bank to reset its next buffer; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_ResetChannelNextBuffer(DspsndState *state, u8 channel)
{
    s32 result;
    DspChannelCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->channels[state->bank & 1][channel];
        command->flags = command->flags | 0x10;
    }
    return result != 0;
}

} /* extern "C" */
