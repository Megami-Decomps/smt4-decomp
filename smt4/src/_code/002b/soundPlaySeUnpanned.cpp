#include "sound/soundEffect.h"

extern "C" {
s32 soundPlaySePanned(u32 id, u32 position);

/* Calls soundPlaySePanned with its second argument fixed at 0. */
s32 soundPlaySeUnpanned(u32 id)
{
    return soundPlaySePanned(id, 0);
}

} /* extern "C" */
