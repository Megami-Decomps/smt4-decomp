#include "shard/S3DspFx.h"

extern "C" u8 g_dspsndState;
extern "C" void nn_snd_CTR_Dspsnd_SetDspReverbEffect(u8 *state, s32 bus, DspFxReverbParam *parameter);

/* Update the cached reverb groups selected by the parameter flags. */
extern "C" void dspFxSetReverb(DspFxState *effects, s32 bus, DspFxReverbParam *parameter)
{
    if (parameter->flags & DSPFX_PARAM_ENABLE)
        effects->reverb[bus].enable = parameter->enable;
    if (parameter->flags & DSPFX_PARAM_FILTERS) {
        effects->reverb[bus].gain = parameter->gain;
        effects->reverb[bus].filter.coef0 = parameter->filter.coef0;
        effects->reverb[bus].filter.coef1 = parameter->filter.coef1;
        effects->reverb[bus].filter.coef2 = parameter->filter.coef2;
        effects->reverb[bus].filter.coef3 = parameter->filter.coef3;
        effects->reverb[bus].filter.coef4 = parameter->filter.coef4;
        effects->reverb[bus].filter.coef5 = parameter->filter.coef5;
        effects->reverb[bus].filter.coef6 = parameter->filter.coef6;
        effects->reverb[bus].filter.coef7 = parameter->filter.coef7;
        effects->reverb[bus].filter.coef8 = parameter->filter.coef8;
        effects->reverb[bus].filter.coef9 = parameter->filter.coef9;
        effects->reverb[bus].filter.coef10 = parameter->filter.coef10;
        effects->reverb[bus].filter.coef11 = parameter->filter.coef11;
    }
    if (parameter->flags & DSPFX_PARAM_TIMES) {
        effects->reverb[bus].times[0] = parameter->times[0];
        effects->reverb[bus].times[1] = parameter->times[1];
        effects->reverb[bus].times[2] = parameter->times[2];
        effects->reverb[bus].times[3] = parameter->times[3];
        effects->reverb[bus].times[4] = parameter->times[4];
    }
    nn_snd_CTR_Dspsnd_SetDspReverbEffect(&g_dspsndState, bus, parameter);
}
