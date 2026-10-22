#include "common.h"

struct DspDelayEffectParameters {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u16 enabled;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 delay;
    /* 0x08 */ u32 buffer;
    /* 0x0C */ u16 feedback;
    /* 0x0E */ u16 gain;
    /* 0x10 */ u16 spread;
    /* 0x12 */ u16 channels;
};
extern "C" {
extern u8 g_dspsndState[];
void nn_snd_CTR_Dspsnd_SetDspDelayEffect(void *state, u32 index,
                                       const DspDelayEffectParameters *parameters);
}

/* Apply only the delay-effect fields selected by the update flags. */
extern "C" void dspDelayApplyUpdate(DspDelayEffectParameters *effects, u32 index,
                             const DspDelayEffectParameters *parameters)
{
    DspDelayEffectParameters *effect = &effects[index];
    if (parameters->flags & 1) {
        effect->enabled = parameters->enabled;
    }
    if (parameters->flags & 4) {
        effect->delay = parameters->delay;
        effect->feedback = parameters->feedback;
        effect->gain = parameters->gain;
        effect->spread = parameters->spread;
        effect->channels = parameters->channels;
    }
    if (parameters->flags & 2) {
        effect->buffer = parameters->buffer;
    }
    nn_snd_CTR_Dspsnd_SetDspDelayEffect(g_dspsndState, index, parameters);
}
