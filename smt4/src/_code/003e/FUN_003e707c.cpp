#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct Sound3DInfo;

u8 FUN_003e7084(SoundArchiveRef *ref, u32 unused, Sound3DInfo *out);

/* Passes the wrapper's ref on to FUN_003e7084, the function that follows it. */
u8 FUN_003e707c(SoundArchiveWrapper *wrapper, u32 unused, Sound3DInfo *out)
{
    return FUN_003e7084(wrapper->ref, unused, out);
}

} /* extern "C" */
