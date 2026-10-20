#include "common.h"

extern "C" {

typedef struct ChannelInfo {
    /* 0x00 */ u16 kind;           /* 0x300: DSP ADPCM */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 offset;
} ChannelInfo;

/* Returns the DSP ADPCM channel info (at `offset` from the header) when the kind is 0x300, otherwise 0. */
u8 *nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(ChannelInfo *info)
{
    u8 *adpcm;

    if (info->kind == 0x300) {
        adpcm = (u8 *)info + info->offset;
    } else {
        adpcm = NULL;
    }
    return adpcm;
}

} /* extern "C" */
