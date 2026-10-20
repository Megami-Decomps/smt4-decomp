#include "common.h"
#include "shard/S3DspFx.h"

extern "C" {

DspFxState *FUN_001afd94(void);
void FUN_00189e74(DspFxState *fx);

/* Clears the 12 DSP effect state bytes, then resets the effect table. */
void nn_snd_CTR_DspFxManager_Initialize(u8 *state)
{
    state[0] = 0;
    state[4] = 0;
    state[8] = 0;
    state[2] = 0;
    state[6] = 0;
    state[10] = 0;
    state[1] = 0;
    state[5] = 0;
    state[9] = 0;
    state[3] = 0;
    state[7] = 0;
    state[11] = 0;
    FUN_00189e74(FUN_001afd94());
}

} /* extern "C" */
