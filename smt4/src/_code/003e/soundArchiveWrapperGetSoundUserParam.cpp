#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 soundArchiveRefGetSoundUserParam(SoundArchiveRef *ref);

/* Passes the wrapper's ref on to soundArchiveRefGetSoundUserParam, the function that follows it. */
u32 soundArchiveWrapperGetSoundUserParam(SoundArchiveWrapper *wrapper)
{
    return soundArchiveRefGetSoundUserParam(wrapper->ref);
}

} /* extern "C" */
