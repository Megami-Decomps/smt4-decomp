/* NON_MATCHING: Retail add r2, r4, r4, lsl #1 differs from recovered add r0, r4, r4, lsl #1. */
#include "common.h"

struct RandomEntryRowView {
    s16 values[12]; // 0x00
};

extern "C" {
s32 dataTableGet(s32 tableId, s32 index);
RandomEntryRowView* dataTableGetEntries(void);
s32 dataTableGetCount(void);
s32 randRange(u32 inclusiveMaximum);

// Select a random entry from the nonzero prefix of the requested table row.
s32 FUN_003e8244(u32, s32 rowIndex)
{
    dataTableGet(0x4d, 0);
    RandomEntryRowView* rows = dataTableGetEntries();
    s32 result = 0;

    dataTableGet(0x4d, 0);
    if ((s16)dataTableGetCount() > rowIndex) {
        RandomEntryRowView* row = rows + rowIndex;
        s32 entryCount = 0;
        for (s32 index = 0; index < 12; ++index) {
            if (row->values[index] == 0) {
                break;
            }
            ++entryCount;
        }

        if (entryCount > 0) {
            s32 selectedIndex = randRange((u16)(entryCount - 1));
            result = row->values[selectedIndex];
        }
    }
    return result;
}
}
