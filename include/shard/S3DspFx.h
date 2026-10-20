/* nn::snd::CTR DSP effect manager: per-bus delay and reverb settings. The manager keeps its own
 * copy of each setting; DspFxDelayParam / DspFxReverbParam carry a setting plus `flags` naming
 * which groups of it are valid. The DSP command is then filled by nn_snd_CTR_Dspsnd_SetDsp*Effect. */
#ifndef SHARD_S3DSPFX_H
#define SHARD_S3DSPFX_H

#include "common.h"

#define DSPFX_BUS_COUNT 2

/* flags of DspFxDelayParam / DspFxReverbParam */
#define DSPFX_PARAM_ENABLE 0x1
#define DSPFX_PARAM_TIMES 0x2    /* u32 block at +0x08 */
#define DSPFX_PARAM_FILTERS 0x4  /* u16 fields */

/* Reverb filter coefficients (halfword-aligned). */
typedef struct DspFxReverbFilter {
    u16 coef0, coef1, coef2, coef3, coef4, coef5, coef6, coef7, coef8, coef9, coef10, coef11;
} DspFxReverbFilter;

typedef struct DspFxDelayParam {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u16 enable;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ u16 gain;
    /* 0x08 */ u32 times;
    /* 0x0C */ u16 filter[4];
} DspFxDelayParam;

typedef struct DspFxReverbParam {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u16 enable;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ u16 gain;
    /* 0x08 */ u32 times[5];
    /* 0x1C */ DspFxReverbFilter filter;
} DspFxReverbParam;

typedef struct DspFxDelay {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 enable;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ u16 gain;
    /* 0x08 */ u32 times;
    /* 0x0C */ u16 filter[4];
} DspFxDelay;

typedef struct DspFxReverb {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 enable;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ u16 gain;
    /* 0x08 */ u32 times[5];
    /* 0x1C */ DspFxReverbFilter filter;
} DspFxReverb;

typedef struct DspFxState {
    /* 0x00 */ DspFxDelay delay[DSPFX_BUS_COUNT];
    /* 0x28 */ DspFxReverb reverb[DSPFX_BUS_COUNT];
} DspFxState;

#endif
