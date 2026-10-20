/* NON_MATCHING: outParam/outContext live in swapped callee-saved registers (r6/r5). */
#include "common.h"

extern "C" {

typedef struct StreamSoundFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 infoBlockBody;
} StreamSoundFile;

int FUN_001d1438(void *dst, u8 *src);
int FUN_001d284c(u32 channelInfoTable, u32 channel);
void *rt_memcpy(void *dst, const void *src, u32 size);
u8 *nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(void);
u32 nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(u32 infoBlockBody);

/* Copies the DSP-ADPCM info (0x26-byte param block plus the loop context that follows) of `channel` out of the stream file; returns whether it exists. */
bool FUN_00508fac(StreamSoundFile *file, void *outParam, void *outContext, u32 channel)
{
    u8 *info;

    FUN_001d284c(nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(file->infoBlockBody), channel);
    info = nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo();
    if (info != NULL) {
        rt_memcpy(outParam, info, 0x26);
        FUN_001d1438(outContext, info + 0x26);
    }
    return info != NULL;
}

} /* extern "C" */
