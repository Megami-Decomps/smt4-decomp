#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SequenceSoundParams;

s32 FUN_0014d538(SoundArchiveRef *ref, u32 unused, SequenceSoundParams *out);

/* Passes the wrapper's ref on to FUN_0014d538, the function that follows it. */
s32 FUN_0014d530(SoundArchiveWrapper *wrapper, u32 unused, SequenceSoundParams *out)
{
    return FUN_0014d538(wrapper->ref, unused, out);
}

} /* extern "C" */
