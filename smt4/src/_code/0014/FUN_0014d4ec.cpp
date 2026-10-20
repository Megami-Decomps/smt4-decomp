#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SoundGroupOut;

u8 nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo(SoundArchiveRef *ref, u32 unused, SoundGroupOut *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo, the function that follows it. */
u8 FUN_0014d4ec(SoundArchiveWrapper *wrapper, u32 unused, SoundGroupOut *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadSoundGroupInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
