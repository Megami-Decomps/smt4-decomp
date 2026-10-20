/* NON_MATCHING: register allocation only: retail keeps coefficients in r5..r9 in argument order and the channel in sl (built mixes them) */
/* Sets the biquad IIR filter coefficients of a channel and flags the filter as updated. */
#include "common.h"

extern "C" {

typedef struct ChannelParam {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x3C];
    /* 0x40 */ s16 coef0;       /* b0 .. a2 in reverse order of the arguments */
    /* 0x42 */ s16 coef1;
    /* 0x44 */ s16 coef2;
    /* 0x46 */ s16 coef3;
    /* 0x48 */ s16 coef4;
} ChannelParam;

typedef struct Dspsnd {
    /* 0x0000 */ u8 unk0000[0x10B0];
    /* 0x10B0 */ ChannelParam *channelParam[2][24];  /* per double-buffer slot, per channel */
    /* 0x1170 */ u8 unk1170[0x1AA];
    /* 0x131A */ u16 flagSlot;              /* bit 0 selects the channelParam slot */
} Dspsnd;

extern s32 FUN_002bb274(void);

u8 nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Biquad(Dspsnd *dspsnd, u8 channel, s16 b0, s16 b1, s16 b2, s16 a1, s16 a2)
{
    s32 ready = FUN_002bb274();

    if (ready != 0) {
        ChannelParam *param = dspsnd->channelParam[dspsnd->flagSlot & 1][channel];

        param->coef0 = a2;
        param->coef1 = a1;
        param->coef2 = b2;
        param->coef3 = b1;
        param->coef4 = b0;
        param->flags |= 0x1000000;
    }
    return ready != 0;
}

}
