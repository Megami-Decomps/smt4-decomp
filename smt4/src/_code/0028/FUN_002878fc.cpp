/* NON_MATCHING: retail addresses counts and pools from the containing collision global rather than its count subrecord. */
#include "gfx/TaggedRecordPools.h"

extern "C" {
extern TaggedRecordPools DAT_00446fec;
extern TaggedPoolRecord DAT_00493c5c[];

// Disable every matching tag in the four dynamic record pools and the static pool.
void FUN_002878fc(s32 tag)
{
    if (tag == 0)
        return;
    for (s32 pool = 0; pool < 4; ++pool) {
        TaggedPoolRecord *record = DAT_00446fec.pools[pool];
        for (s32 remaining = DAT_00446fec.counts[pool]; remaining > 0; --remaining, ++record)
            if (record->tag == tag)
                record->enabled = 0;
    }
    TaggedPoolRecord *record = DAT_00493c5c;
    for (s32 remaining = DAT_00446fec.counts[4]; remaining > 0; --remaining, ++record)
        if (record->tag == tag)
            record->enabled = 0;
}
}
