#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 FUN_002bf684(void *archive);

/* Reports whether the owned sound archive is available. */
bool FUN_00111b94(const ArchiveOwner *owner)
{
    if (owner->archive != NULL) {
        return FUN_002bf684(owner->archive) != 0;
    }
    return false;
}

} /* extern "C" */
