/* NON_MATCHING: array-loop scanning replaces retail's cached first groups and branch chain. */
#include "common.h"

struct CollisionMarkRecord {
    u8 unk00[6];
    s16 id; // 0x06
    u8 marked; // 0x08
    u8 unk09[0x9f];
};
struct CollisionMarkTables {
    u32 unk00;
    s32 counts[4]; // 0x04
    s32 extraCount; // 0x14
    CollisionMarkRecord *records[4]; // 0x18
};

extern "C" {
extern CollisionMarkTables g_mapCollision;
extern CollisionMarkRecord DAT_005e2714[];

// Mark every collision-table entry carrying the requested nonzero id.
void FUN_0037c7a8(s32 id)
{
    if (id == 0)
        return;
    for (s32 table = 0; table < 4; ++table) {
        CollisionMarkRecord *record = g_mapCollision.records[table];
        for (s32 remaining = g_mapCollision.counts[table]; remaining > 0; --remaining, ++record) {
            if (record->id == id)
                record->marked = 1;
        }
    }
    CollisionMarkRecord *record = DAT_005e2714;
    for (s32 remaining = g_mapCollision.extraCount; remaining > 0; --remaining, ++record) {
        if (record->id == id)
            record->marked = 1;
    }
}
}
