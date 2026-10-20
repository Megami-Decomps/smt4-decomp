#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_003e7100(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to FUN_003e7100, the function that follows it. */
u32 FUN_003e70f8(SoundArchiveWrapper *wrapper)
{
    return FUN_003e7100(wrapper->ref);
}

} /* extern "C" */
