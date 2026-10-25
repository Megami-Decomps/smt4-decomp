/* NON_MATCHING: second failure test uses lsrs r1 (retail r2) and the loop test is cmp r0,r4/bhi (retail cmp r4,r0/bcc). */
#include "nn/Result.h"

namespace {

struct EntryCountView {
    u32 count;       // 0x00
    u32 unk04;       // 0x04
};

struct EntryRecordView {
    u8 unk00[6];     // 0x00
    u16 unk06;       // 0x06
};

}

extern "C" s32 FUN_00500254(s32 handle, EntryCountView* countInfo);
extern "C" s32 FUN_0050028c(s32 handle, EntryRecordView* record, u32 selector, u32 mode);

// Checks each reported record's 16-bit value, propagating error statuses.
extern "C" s32 FUN_00428334(s32 handle, u32 selector, u32 expectedValue)
{
    EntryCountView countInfo;
    EntryRecordView record;

    s32 result = FUN_00500254(handle, &countInfo);
    if (nnResultIsFailure(result)) {
        return result;
    }

    for (u32 index = 0; index < countInfo.count; ++index) {
        result = FUN_0050028c(handle, &record, selector, 1);
        if (nnResultIsFailure(result)) {
            return result;
        }
        if (record.unk06 != expectedValue) {
            return -0x36bec740;
        }
    }

    return 0;
}
