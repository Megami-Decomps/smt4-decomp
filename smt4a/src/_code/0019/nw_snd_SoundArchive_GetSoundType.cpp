#include "shard/SoundArchiveWrapper.h"

extern "C" {

void nw_snd_internal_SoundArchiveFileReader_GetSoundType(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_GetSoundType, the function that follows it. */
void nw_snd_SoundArchive_GetSoundType(SoundArchiveWrapper *wrapper)
{
    nw_snd_internal_SoundArchiveFileReader_GetSoundType(wrapper->ref);
}

} /* extern "C" */
