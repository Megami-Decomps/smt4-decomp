#include "shard/SoundArchiveWrapper.h"

extern "C" {

u8 nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(SoundArchiveRef *ref, u32 unused, u32 *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadBankInfo, the function that follows it. */
u8 soundArchiveReadBankInfo(SoundArchiveWrapper *wrapper, u32 unused, u32 *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
