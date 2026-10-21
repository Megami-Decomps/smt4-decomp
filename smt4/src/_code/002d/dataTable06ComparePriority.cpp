#include "common.h"

struct Table06Sub1Record {
    u16 id; // 0x00
    u8 secondary; // 0x02
    u8 flags; // 0x03
};

extern "C" {
Table06Sub1Record *dataTable06Sub1GetRecord(u16 id);

// Sort descending by the low five flag bits, then ascending by secondary key and id.
s32 dataTable06ComparePriority(const u16 *left, const u16 *right)
{
    Table06Sub1Record *leftRecord = dataTable06Sub1GetRecord(*left);
    Table06Sub1Record *rightRecord = dataTable06Sub1GetRecord(*right);
    s32 difference = (rightRecord->flags & 0x1f) - (leftRecord->flags & 0x1f);
    if (difference == 0) {
        difference = leftRecord->secondary - rightRecord->secondary;
        if (difference == 0) {
            difference = leftRecord->id - rightRecord->id;
        }
    }
    return difference;
}
}
