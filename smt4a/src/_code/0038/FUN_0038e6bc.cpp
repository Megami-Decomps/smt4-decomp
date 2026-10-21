/* NON_MATCHING: retail preserves a call frame and a NOP after the signed activity-byte comparison. */
#include "common.h"

struct ActivityRecord {
    u8 unk00[0x85]; // 0x00
    s8 active;       // 0x85
    u8 unk86[6];    // 0x86
};

struct ActivityRecords {
    u8 unk00[0x20]; // 0x00
    ActivityRecord records[60]; // 0x20
};

// Check that records 50 through 59 are all inactive.
extern "C" u32 FUN_0038e6bc(const ActivityRecords* owner)
{
    for (s32 index = 50; index <= 59; ++index) {
        if (owner->records[index].active != 0) {
            return 0;
        }
    }
    return 1;
}
