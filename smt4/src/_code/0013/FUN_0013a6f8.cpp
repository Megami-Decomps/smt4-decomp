/* NON_MATCHING: register allocation only: retail keeps the bus index in r7 and the NULL/flag constants in r6/r8 (built: r4 for the index), the call sequence and stores are identical. */
#include "common.h"
#include "shard/S3DspFx.h"

extern "C" {

int nn_snd_CTR_Dspsnd_SetDspDelayEffect(u8 *state, s32 bus, DspFxDelayParam *param);
int nn_snd_CTR_Dspsnd_SetDspReverbEffect(u8 *state, s32 bus, DspFxReverbParam *param);

extern u8 g_dspsndState; /* 0x4e6f64 */

/* Records a delay setting in the manager's table and hands it to the DSP command. */
static void dspFxSetDelay(DspFxState *fx, s32 bus, DspFxDelayParam *param)
{
    fx->delay[bus].enable = param->enable;
    if (param->flags & DSPFX_PARAM_FILTERS) {
        fx->delay[bus].gain = param->gain;
        fx->delay[bus].filter[0] = param->filter[0];
        fx->delay[bus].filter[1] = param->filter[1];
        fx->delay[bus].filter[2] = param->filter[2];
        fx->delay[bus].filter[3] = param->filter[3];
    }
    if (param->flags & DSPFX_PARAM_TIMES) {
        fx->delay[bus].times = param->times;
    }
    nn_snd_CTR_Dspsnd_SetDspDelayEffect(&g_dspsndState, bus, param);
}

/* Same for a reverb setting. */
static void dspFxSetReverb(DspFxState *fx, s32 bus, DspFxReverbParam *param)
{
    fx->reverb[bus].enable = param->enable;
    if (param->flags & DSPFX_PARAM_FILTERS) {
        fx->reverb[bus].gain = param->gain;
        fx->reverb[bus].filter.coef0 = param->filter.coef0;
        fx->reverb[bus].filter.coef1 = param->filter.coef1;
        fx->reverb[bus].filter.coef2 = param->filter.coef2;
        fx->reverb[bus].filter.coef3 = param->filter.coef3;
        fx->reverb[bus].filter.coef4 = param->filter.coef4;
        fx->reverb[bus].filter.coef5 = param->filter.coef5;
        fx->reverb[bus].filter.coef6 = param->filter.coef6;
        fx->reverb[bus].filter.coef7 = param->filter.coef7;
        fx->reverb[bus].filter.coef8 = param->filter.coef8;
        fx->reverb[bus].filter.coef9 = param->filter.coef9;
        fx->reverb[bus].filter.coef10 = param->filter.coef10;
        fx->reverb[bus].filter.coef11 = param->filter.coef11;
    }
    if (param->flags & DSPFX_PARAM_TIMES) {
        fx->reverb[bus].times[0] = param->times[0];
        fx->reverb[bus].times[1] = param->times[1];
        fx->reverb[bus].times[2] = param->times[2];
        fx->reverb[bus].times[3] = param->times[3];
        fx->reverb[bus].times[4] = param->times[4];
    }
    nn_snd_CTR_Dspsnd_SetDspReverbEffect(&g_dspsndState, bus, param);
}

/* Resets and disables the delay and reverb effect of both buses. */
void FUN_0013a6f8(DspFxState *fx)
{
    for (s32 i = 0; i < DSPFX_BUS_COUNT; i++) {
        s8 bus = i;

        {
            DspFxDelayParam delay;
            delay.enable = 0;
            delay.flags = DSPFX_PARAM_ENABLE;
            dspFxSetDelay(fx, bus, &delay);
        }
        {
            DspFxReverbParam reverb;
            reverb.enable = 0;
            reverb.flags = DSPFX_PARAM_ENABLE;
            dspFxSetReverb(fx, bus, &reverb);
        }
    }
}

} /* extern "C" */
