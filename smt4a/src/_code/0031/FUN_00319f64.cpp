/* NON_MATCHING: retail addresses counts and pools from the containing collision global rather than its count subrecord. */
#include "gfx/TaggedRecordPools.h"

extern "C" {
extern TaggedRecordPools DAT_00580208;
extern TaggedPoolRecord DAT_005e2714[];

// Disable every matching tag in the four dynamic record pools and the static pool.
void FUN_00319f64(s32 tag)
{
    if (tag == 0)
        return;
    for (s32 pool = 0; pool < 4; ++pool) {
        TaggedPoolRecord *record = DAT_00580208.pools[pool];
        for (u32 remaining = DAT_00580208.counts[pool]; remaining > 0; --remaining, ++record)
            if (record->tag == tag)
                record->enabled = 0;
    }
    TaggedPoolRecord *record = DAT_005e2714;
    for (s32 remaining = DAT_00580208.counts[4]; remaining > 0; --remaining, ++record)
        if (record->tag == tag)
            record->enabled = 0;
}
}
