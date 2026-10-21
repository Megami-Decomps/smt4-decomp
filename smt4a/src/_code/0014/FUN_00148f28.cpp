/* NON_MATCHING: instruction selection/order differs: retail beq 1c; compiler beq 20. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 nw_snd_SoundArchive_IsAvailable(void *archive);

/* Reports whether the owned sound archive is available. */
bool FUN_00148f28(const ArchiveOwner *owner)
{
    return owner->archive != NULL && nw_snd_SoundArchive_IsAvailable(owner->archive) != 0;
}

} /* extern "C" */
