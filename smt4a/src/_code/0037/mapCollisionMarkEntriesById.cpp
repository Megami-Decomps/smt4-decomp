/* NON_MATCHING: retail predicates the pool index initialization before the early exit. */
#include "gfx/TaggedRecordPools.h"

extern "C" {
extern TaggedPoolRecord DAT_005e2714[];

/* Enable every matching tag in the four dynamic collision pools and the static pool. */
void mapCollisionMarkEntriesById(s32 tag)
{
    if (tag == 0)
        return;

    const s32 firstCount = g_mapCollision.counts[0];
    const s32 secondCount = g_mapCollision.counts[1];
    TaggedPoolRecord *firstPool = g_mapCollision.pools[0];
    TaggedPoolRecord *secondPool = g_mapCollision.pools[1];
    for (s32 pool = 0; pool < 4; ++pool) {
        TaggedPoolRecord *record;
        s32 count;
        if (pool == 0) {
            count = firstCount;
            record = firstPool;
        } else if (pool == 1) {
            count = secondCount;
            record = secondPool;
        } else if (pool == 2) {
            count = g_mapCollision.counts[2];
            record = g_mapCollision.pools[2];
        } else {
            count = g_mapCollision.counts[3];
            record = g_mapCollision.pools[3];
        }
        for (s32 remaining = count; remaining > 0; --remaining, ++record) {
            if (record->tag == tag)
                record->enabled = 1;
        }
    }
    TaggedPoolRecord *record = DAT_005e2714;
    for (s32 remaining = g_mapCollision.counts[4]; remaining > 0; --remaining, ++record) {
        if (record->tag == tag)
            record->enabled = 1;
    }
}
} /* extern "C" */
