#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SoundTypeParams;

s32 FUN_003e711c(SoundArchiveRef *ref, u32 unused, SoundTypeParams *out);

/* Passes the wrapper's ref on to FUN_003e711c, the function that follows it. */
s32 FUN_003e7114(SoundArchiveWrapper *wrapper, u32 unused, SoundTypeParams *out)
{
    return FUN_003e711c(wrapper->ref, unused, out);
}

} /* extern "C" */
