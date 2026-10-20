#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_003e70d8(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to FUN_003e70d8, the function that follows it. */
u32 FUN_003e70d0(SoundArchiveWrapper *wrapper)
{
    return FUN_003e70d8(wrapper->ref);
}

} /* extern "C" */
