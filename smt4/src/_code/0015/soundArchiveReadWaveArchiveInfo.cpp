#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct WaveArchiveParams;

u8 nw_snd_internal_SoundArchiveFileReader_ReadWaveArchiveInfo(SoundArchiveRef *ref, u32 unused, WaveArchiveParams *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadWaveArchiveInfo, the function that follows it. */
u8 soundArchiveReadWaveArchiveInfo(SoundArchiveWrapper *wrapper, u32 unused, WaveArchiveParams *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadWaveArchiveInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
