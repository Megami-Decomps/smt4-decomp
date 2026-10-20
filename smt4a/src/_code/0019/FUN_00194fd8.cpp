#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_00194fe0(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to FUN_00194fe0, the function that follows it. */
u32 FUN_00194fd8(SoundArchiveWrapper *wrapper)
{
    return FUN_00194fe0(wrapper->ref);
}

} /* extern "C" */
