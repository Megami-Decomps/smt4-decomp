/* NON_MATCHING: structure now matches retail; retail hoists the pool 0/1 counts and pointers (r7-r9, sl) out of the pool loop and selects them with register moves, the build loads them in place. */
#include "gfx/TaggedRecordPools.h"

extern "C" {
extern TaggedRecordPools g_mapCollision;
extern TaggedPoolRecord DAT_005e2714[];

// Disable every matching tag in the four dynamic record pools and the static pool.
void FUN_00319f64(s32 tag)
{
    if (tag == 0)
        return;
    for (s32 pool = 0; pool < 4; ++pool) {
        s32 count;
        TaggedPoolRecord *record;
        if (pool == 0) {
            count = g_mapCollision.counts[0];
            record = g_mapCollision.pools[0];
        } else if (pool == 1) {
            count = g_mapCollision.counts[1];
            record = g_mapCollision.pools[1];
        } else if (pool == 2) {
            count = g_mapCollision.counts[2];
            record = g_mapCollision.pools[2];
        } else {
            count = g_mapCollision.counts[3];
            record = g_mapCollision.pools[3];
        }
        for (; count > 0; --count, ++record)
            if (record->tag == tag)
                record->enabled = 0;
    }
    TaggedPoolRecord *record = DAT_005e2714;
    for (s32 remaining = g_mapCollision.counts[4]; remaining > 0; --remaining, ++record)
        if (record->tag == tag)
            record->enabled = 0;
}
}
