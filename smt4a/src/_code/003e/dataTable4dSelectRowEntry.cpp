#include "gamedata/DataTable.h"

struct RandomEntryRowView {
    s16 values[12]; // 0x00
};

extern "C" {
s32 randRange(u32 inclusiveMaximum);

// Select a random entry from the nonzero prefix of the requested table row.
s32 dataTable4dSelectRowEntry(u32, s32 rowIndex)
{
    void *table = dataTableGet(0x4d, 0);
    RandomEntryRowView* rows = static_cast<RandomEntryRowView *>(dataTableGetEntries(table));
    s32 result = 0;

    table = dataTableGet(0x4d, 0);
    if ((s16)dataTableGetCount(table) > rowIndex) {
        s32 entryCount = 0;
        for (s32 index = 0; index < 12; ++index) {
            if (rows[rowIndex].values[index] == 0) {
                break;
            }
            ++entryCount;
        }

        if (entryCount > 0) {
            s32 selectedIndex = randRange((u16)(entryCount - 1));
            result = rows[rowIndex].values[selectedIndex];
        }
    }
    return result;
}
}
