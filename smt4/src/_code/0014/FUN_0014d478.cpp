#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct WaveSoundParams;

u8 nw_snd_internal_SoundArchiveFileReader_ReadWaveSoundInfo(SoundArchiveRef *ref, u32 unused, WaveSoundParams *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadWaveSoundInfo, the function that follows it. */
u8 FUN_0014d478(SoundArchiveWrapper *wrapper, u32 unused, WaveSoundParams *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadWaveSoundInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
