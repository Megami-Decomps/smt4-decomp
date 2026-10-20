#include "shard/SoundArchiveWrapper.h"

extern "C" {

void FUN_00194fb8(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to FUN_00194fb8, the function that follows it. */
void FUN_00194fb0(SoundArchiveWrapper *wrapper)
{
    FUN_00194fb8(wrapper->ref);
}

} /* extern "C" */
