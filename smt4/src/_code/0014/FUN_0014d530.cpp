#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SequenceSoundParams;

s32 nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(SoundArchiveRef *ref, u32 unused, SequenceSoundParams *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo, the function that follows it. */
s32 FUN_0014d530(SoundArchiveWrapper *wrapper, u32 unused, SequenceSoundParams *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
