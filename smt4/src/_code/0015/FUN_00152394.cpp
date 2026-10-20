#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct WaveArchiveParams;

u8 FUN_0015239c(SoundArchiveRef *ref, u32 unused, WaveArchiveParams *out);

/* Passes the wrapper's ref on to FUN_0015239c, the function that follows it. */
u8 FUN_00152394(SoundArchiveWrapper *wrapper, u32 unused, WaveArchiveParams *out)
{
    return FUN_0015239c(wrapper->ref, unused, out);
}

} /* extern "C" */
