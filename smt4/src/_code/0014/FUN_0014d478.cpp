#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct WaveSoundParams;

u8 FUN_0014d480(SoundArchiveRef *ref, u32 unused, WaveSoundParams *out);

/* Passes the wrapper's ref on to FUN_0014d480, the function that follows it. */
u8 FUN_0014d478(SoundArchiveWrapper *wrapper, u32 unused, WaveSoundParams *out)
{
    return FUN_0014d480(wrapper->ref, unused, out);
}

} /* extern "C" */
