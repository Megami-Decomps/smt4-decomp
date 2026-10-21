#include "common.h"

struct TableEightSortRecord {
    u8 unk00[0x54];
    u8 secondary; // 0x54
    u8 primary; // 0x55
};

extern "C" {
TableEightSortRecord *dataTable08Sub0GetRecord(u32 id);

// Compare table-eight ids by descending primary byte, then descending secondary byte.
s32 dataTable08CompareCategoriesDesc(const u16 *left, const u16 *right)
{
    TableEightSortRecord *first = dataTable08Sub0GetRecord(*left);
    TableEightSortRecord *second = dataTable08Sub0GetRecord(*right);
    s32 difference = second->primary - first->primary;
    if (difference == 0) {
        first = dataTable08Sub0GetRecord(*left);
        second = dataTable08Sub0GetRecord(*right);
        difference = second->secondary - first->secondary;
    }
    return difference;
}
}
