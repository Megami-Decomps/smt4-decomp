#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SoundParams;

s32 nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo(SoundArchiveRef *ref, u32 unused, SoundParams *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo, the function that follows it. */
s32 FUN_0014d3fc(SoundArchiveWrapper *wrapper, u32 unused, SoundParams *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadSoundInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
