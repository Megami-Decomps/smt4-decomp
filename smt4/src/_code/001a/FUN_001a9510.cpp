/* NON_MATCHING: armcc puts the global work pointer in r2 instead of retail's r3 and schedules zero setup differently. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapWorkEntries *DAT_00448c20;

/* Resets the map work header and its thirty-two entries. */
void FUN_001a9510(void)
{
    MapWorkEntries *work = DAT_00448c20;
    work->state = 0;
    work->count = 0;
    work->active = 0;
    work->ready = 0;
    for (s32 index = 0; index < 32; ++index) {
        MapWorkEntry *entry = &work->entries[index];
        entry->active = 0;
        entry->x = 0.0f;
        entry->y = 0.0f;
        entry->z = 0.0f;
        entry->first = 0;
        entry->second = 0;
        entry->third = 0;
        entry->id = 0;
        entry->kind = 0;
    }
}

} /* extern "C" */
