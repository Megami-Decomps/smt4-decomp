#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_00141fbc(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to FUN_00141fbc, the function that follows it. */
u32 FUN_00141fb4(SoundArchiveWrapper *wrapper)
{
    return FUN_00141fbc(wrapper->ref);
}

} /* extern "C" */
