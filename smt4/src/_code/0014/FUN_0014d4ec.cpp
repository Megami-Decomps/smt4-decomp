#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SoundGroupOut;

u8 FUN_0014d4f4(SoundArchiveRef *ref, u32 unused, SoundGroupOut *out);

/* Passes the wrapper's ref on to FUN_0014d4f4, the function that follows it. */
u8 FUN_0014d4ec(SoundArchiveWrapper *wrapper, u32 unused, SoundGroupOut *out)
{
    return FUN_0014d4f4(wrapper->ref, unused, out);
}

} /* extern "C" */
