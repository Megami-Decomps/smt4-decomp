#include "common.h"

struct ActivityRecord {
    u8 unk00[0x8c];
};

struct ActivityRecords {
    u8 unk00[0x20]; // 0x00
    ActivityRecord records[60]; // 0x20
};

extern "C" s8 recordGetActive(const ActivityRecord *record);

// Check that records 50 through 59 are all inactive.
extern "C" u32 activityRecordsAreIdle(const ActivityRecords* owner)
{
    for (s32 index = 50; index <= 59; ++index) {
        if (recordGetActive(&owner->records[index]) != 0) {
            return 0;
        }
    }
    return 1;
}
