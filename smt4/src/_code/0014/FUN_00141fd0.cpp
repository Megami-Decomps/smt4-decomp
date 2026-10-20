#include "shard/SoundArchiveWrapper.h"

extern "C" {

s32 FUN_00141fd8(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to FUN_00141fd8, the function that follows it. */
s32 FUN_00141fd0(SoundArchiveWrapper *wrapper)
{
    return FUN_00141fd8(wrapper->ref);
}

} /* extern "C" */
