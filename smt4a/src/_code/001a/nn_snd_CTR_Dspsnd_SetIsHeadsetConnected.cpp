#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Sets whether a headset is connected on the active command block and flags the change; returns whether the DSP is available. */
u8 nn_snd_CTR_Dspsnd_SetIsHeadsetConnected(DspsndState *state, u8 value)
{
    s32 result;
    DspCommand *command;

    result = FUN_001c6e20();
    if (result != 0) {
        command = state->commands[state->current];
        command->headsetConnected = (u16)value;
        command->flags = command->flags | 0x10000000;
    }
    return result != 0;
}

} /* extern "C" */
