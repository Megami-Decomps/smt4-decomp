#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct PlayerParams;

u8 FUN_0014201c(SoundArchiveRef *ref, u32 unused, PlayerParams *out);

/* Passes the wrapper's ref on to FUN_0014201c, the function that follows it. */
u8 FUN_00142014(SoundArchiveWrapper *wrapper, u32 unused, PlayerParams *out)
{
    return FUN_0014201c(wrapper->ref, unused, out);
}

} /* extern "C" */
