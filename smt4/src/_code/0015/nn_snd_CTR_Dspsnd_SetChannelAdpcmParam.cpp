/* NON_MATCHING: register allocation only: retail keeps `channel` in r5 and `flags` in r6 (swapped here) */
/* Copies a 0x20-byte ADPCM parameter block into the channel's pending slot and marks the channel dirty. */
#include "common.h"

extern "C" {

typedef struct Dspsnd {
    /* 0x0000 */ u8 unk0000[0x10B0];
    /* 0x10B0 */ u32 *channelFlags[2][24];  /* per double-buffer slot, per channel */
    /* 0x1170 */ u8 unk1170[0xC0];
    /* 0x1230 */ void *adpcmParam[2][24];
    /* 0x12F0 */ u8 unk12F0[0x2A];
    /* 0x131A */ u16 flagSlot;              /* bit 0 selects the channelFlags slot */
    /* 0x131C */ u8 unk131C[2];
    /* 0x131E */ u16 paramSlot;
} Dspsnd;

extern s32 nn_snd_CTR_Dspsnd_IsInitialized(void);
extern s32 rt_memcpy(void *dest, const void *src, s32 size);

u8 nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(Dspsnd *dspsnd, u8 channel, const void *param)
{
    s32 ready = nn_snd_CTR_Dspsnd_IsInitialized();

    if (ready != 0) {
        u32 *flags = dspsnd->channelFlags[dspsnd->flagSlot & 1][channel];

        rt_memcpy(dspsnd->adpcmParam[dspsnd->paramSlot][channel], param, 0x20);
        *flags |= 4;
    }
    return ready != 0;
}

}
