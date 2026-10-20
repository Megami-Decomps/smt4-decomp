#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SoundParams;

s32 FUN_0014d404(SoundArchiveRef *ref, u32 unused, SoundParams *out);

/* Passes the wrapper's ref on to FUN_0014d404, the function that follows it. */
s32 FUN_0014d3fc(SoundArchiveWrapper *wrapper, u32 unused, SoundParams *out)
{
    return FUN_0014d404(wrapper->ref, unused, out);
}

} /* extern "C" */
