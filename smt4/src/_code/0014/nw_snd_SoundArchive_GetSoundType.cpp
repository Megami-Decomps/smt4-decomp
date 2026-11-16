#include "shard/SoundArchiveWrapper.h"

extern "C" {

s32 nwSndSoundArchiveRefGetSoundType(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to nwSndSoundArchiveRefGetSoundType, the function that follows it. */
s32 nw_snd_SoundArchive_GetSoundType(SoundArchiveWrapper *wrapper)
{
    return nwSndSoundArchiveRefGetSoundType(wrapper->ref);
}

} /* extern "C" */
