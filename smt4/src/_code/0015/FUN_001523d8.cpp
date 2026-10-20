#include "shard/SoundArchiveWrapper.h"

extern "C" {

int FUN_001523e0(SoundArchiveRef *ref, u32 id);

/* Passes the wrapper's ref on to FUN_001523e0, the function that follows it. */
int FUN_001523d8(SoundArchiveWrapper *wrapper, u32 id)
{
    return FUN_001523e0(wrapper->ref, id);
}

} /* extern "C" */
