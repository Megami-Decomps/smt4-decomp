#include "shard/SoundArchiveWrapper.h"

extern "C" {

u8 FUN_0014d3d4(SoundArchiveRef *ref, u32 unused, u32 *out);

/* Passes the wrapper's ref on to FUN_0014d3d4, the function that follows it. */
u8 FUN_0014d3cc(SoundArchiveWrapper *wrapper, u32 unused, u32 *out)
{
    return FUN_0014d3d4(wrapper->ref, unused, out);
}

} /* extern "C" */
