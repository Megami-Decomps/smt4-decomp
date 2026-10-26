/* Reads the wave archive info of this archive reference's key into `out` (id, wave count, flag); returns 1 if it exists. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

typedef struct WaveArchiveInfo {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 flag;
} WaveArchiveInfo;

typedef struct WaveArchiveParams {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 waveCount;
    /* 0x08 */ u8 flag;
} WaveArchiveParams;

extern WaveArchiveInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetWaveArchiveInfo(void *infoBlock);
extern u32 nw_snd_internal_SoundArchiveFile_WaveArchiveInfo_GetWaveCount(WaveArchiveInfo *info);

u8 nw_snd_internal_SoundArchiveFileReader_ReadWaveArchiveInfo(SoundArchiveRef *ref, u32 unused, WaveArchiveParams *out)
{
    WaveArchiveInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetWaveArchiveInfo(ref->infoBlock);

    if (info != NULL) {
        out->id = info->id;
        out->waveCount = nw_snd_internal_SoundArchiveFile_WaveArchiveInfo_GetWaveCount(info);
        out->flag = info->flag;
    }
    return info != NULL;
}

}
