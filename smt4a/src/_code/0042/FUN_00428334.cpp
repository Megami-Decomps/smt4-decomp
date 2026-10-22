/* NON_MATCHING: Retail lsrs r1, r0, #31 differs from recovered tst r0, #-2147483648. */
#include "common.h"

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
    if ((result & 0x80000000u) != 0) {
        return result;
    }

    u32 index = 0;
    if (countInfo.count != 0) {
        do {
            result = FUN_0050028c(handle, &record, selector, 1);
            if ((result & 0x80000000u) != 0) {
                return result;
            }
            if (record.unk06 != expectedValue) {
                return -0x36bec740;
            }
            ++index;
        } while (index < countInfo.count);
    }

    return 0;
}
