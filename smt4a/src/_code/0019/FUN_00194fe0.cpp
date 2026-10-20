#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

u32 *FUN_001a8d34(void *infoBlock);

/* Returns the first word of the value FUN_001a8d34 looks up for the archive's info block. */
u32 FUN_00194fe0(SoundArchiveRef *ref)
{
    return *FUN_001a8d34(ref->infoBlock);
}

} /* extern "C" */
