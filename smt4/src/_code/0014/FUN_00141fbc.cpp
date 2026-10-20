#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

u32 *FUN_0014d354(void *infoBlock);

/* Returns the first word of the value FUN_0014d354 looks up for the archive's info block. */
u32 FUN_00141fbc(SoundArchiveRef *ref)
{
    return *FUN_0014d354(ref->infoBlock);
}

} /* extern "C" */
