/* NON_MATCHING: instruction selection/order differs: retail beq 1c; compiler beq 20. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 FUN_002bf684(void *archive);

/* Reports whether the owned sound archive is available. */
bool FUN_00111b94(const ArchiveOwner *owner)
{
    return owner->archive != NULL && FUN_002bf684(owner->archive) != 0;
}

} /* extern "C" */
