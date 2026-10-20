#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct PlayerParams;

u8 nw_snd_internal_SoundArchiveFileReader_ReadPlayerInfo(SoundArchiveRef *ref, u32 unused, PlayerParams *out);

/* Passes the wrapper's ref on to nw_snd_internal_SoundArchiveFileReader_ReadPlayerInfo, the function that follows it. */
u8 FUN_00142014(SoundArchiveWrapper *wrapper, u32 unused, PlayerParams *out)
{
    return nw_snd_internal_SoundArchiveFileReader_ReadPlayerInfo(wrapper->ref, unused, out);
}

} /* extern "C" */
