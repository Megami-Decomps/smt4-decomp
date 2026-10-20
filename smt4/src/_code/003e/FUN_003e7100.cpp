/* Returns the first word of the record offsetRefResolve1C finds for the archive reference's info block. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

u32 *offsetRefResolve1C(void *infoBlock);

u32 FUN_003e7100(SoundArchiveRef *ref)
{
    return *offsetRefResolve1C(ref->infoBlock);
}

}
