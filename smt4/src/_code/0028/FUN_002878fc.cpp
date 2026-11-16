/* NON_MATCHING: with pools 0 and 1 read up front the hoisting matches retail; the zero/index registers (retail sets the pool index in the shrink-wrapped prologue) and the hoisted-value register numbering differ. */
#include "gfx/TaggedRecordPools.h"

extern "C" {
extern TaggedRecordPools g_mapCollision;
extern TaggedPoolRecord g_collisionPlaneTable[];

// Disable every matching tag in the four dynamic record pools and the static pool.
void FUN_002878fc(s32 tag)
{
    if (tag == 0)
        return;
    s32 firstCount = g_mapCollision.counts[0];
    TaggedPoolRecord *firstPool = g_mapCollision.pools[0];
    s32 secondCount = g_mapCollision.counts[1];
    TaggedPoolRecord *secondPool = g_mapCollision.pools[1];
    for (s32 pool = 0; pool < 4; ++pool) {
        s32 count;
        TaggedPoolRecord *record;
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
        for (; count > 0; --count, ++record)
            if (record->tag == tag)
                record->enabled = 0;
    }
    TaggedPoolRecord *record = g_collisionPlaneTable;
    for (s32 remaining = g_mapCollision.counts[4]; remaining > 0; --remaining, ++record)
        if (record->tag == tag)
            record->enabled = 0;
}
}
