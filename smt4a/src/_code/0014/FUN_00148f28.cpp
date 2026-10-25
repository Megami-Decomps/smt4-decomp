#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 nw_snd_SoundArchive_IsAvailable(void *archive);

/* Reports whether the owned sound archive is available. */
bool FUN_00148f28(const ArchiveOwner *owner)
{
    if (owner->archive != NULL) {
        return nw_snd_SoundArchive_IsAvailable(owner->archive) != 0;
    }
    return false;
}

} /* extern "C" */
