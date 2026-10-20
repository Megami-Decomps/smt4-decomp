#include "shard/S1SoundArchive.h"

extern "C" {

void *FUN_001b3db0(SoundArchiveFileRef *ref, u32 id);

/* Look an id up in the wrapper's archive. */
void *FUN_001b3da8(SoundArchiveFileWrapper *wrapper, u32 id)
{
    return FUN_001b3db0(wrapper->ref, id);
}

} /* extern "C" */
