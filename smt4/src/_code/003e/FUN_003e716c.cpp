#include "shard/SoundArchiveWrapper.h"

extern "C" {

struct SequenceQuery;

u8 FUN_003e7174(SoundArchiveRef *ref, u32 unused, SequenceQuery *out);

/* Passes the wrapper's ref on to FUN_003e7174, the function that follows it. */
u8 FUN_003e716c(SoundArchiveWrapper *wrapper, u32 unused, SequenceQuery *out)
{
    return FUN_003e7174(wrapper->ref, unused, out);
}

} /* extern "C" */
