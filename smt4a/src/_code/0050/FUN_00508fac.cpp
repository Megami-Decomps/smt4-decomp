/* NON_MATCHING: outParam/outContext live in swapped callee-saved registers (r6/r5). */
#include "common.h"

extern "C" {

typedef struct StreamSoundFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 infoBlockBody;
} StreamSoundFile;

int __ARM_common_memcpy4_6(void *dst, u8 *src);
int nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo(u32 channelInfoTable, u32 channel);
void *__aeabi_memcpy(void *dst, const void *src, u32 size);
u8 *nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(void);
u32 nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(u32 infoBlockBody);

/* Copies the DSP-ADPCM info (0x26-byte param block plus the loop context that follows) of `channel` out of the stream file; returns whether it exists. */
bool FUN_00508fac(StreamSoundFile *file, void *outParam, void *outContext, u32 channel)
{
    u8 *info;

    nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo(nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(file->infoBlockBody), channel);
    info = nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo();
    if (info != NULL) {
        __aeabi_memcpy(outParam, info, 0x26);
        __ARM_common_memcpy4_6(outContext, info + 0x26);
    }
    return info != NULL;
}

} /* extern "C" */
