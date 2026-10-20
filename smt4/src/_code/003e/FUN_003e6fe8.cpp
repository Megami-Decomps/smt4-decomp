#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct GroupFileOut;

s32 FUN_003e6ff0(SoundArchiveRef *ref, u32 unused, GroupFileOut *out);

/* Passes the wrapper's ref on to FUN_003e6ff0, the function that follows it. */
s32 FUN_003e6fe8(SoundArchiveWrapper *wrapper, u32 unused, GroupFileOut *out)
{
    return FUN_003e6ff0(wrapper->ref, unused, out);
}

} /* extern "C" */
