#include "common.h"

struct Record08Sub0SortKeys {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 secondary;
    /* 0x55 */ u8 primary;
};

extern "C" const Record08Sub0SortKeys* dataTable08Sub0GetRecord(u16 id);

// Sort table 08/sub0 IDs by primary byte, then by secondary byte.
extern "C" s32 dataTable08Sub0CompareBySortKeys(const u16* leftId, const u16* rightId)
{
    const Record08Sub0SortKeys* left = dataTable08Sub0GetRecord(*leftId);
    const Record08Sub0SortKeys* right = dataTable08Sub0GetRecord(*rightId);
    s32 difference = left->primary - right->primary;
    if (difference == 0) {
        left = dataTable08Sub0GetRecord(*leftId);
        right = dataTable08Sub0GetRecord(*rightId);
        difference = left->secondary - right->secondary;
    }
    return difference;
}
