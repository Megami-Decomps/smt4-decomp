#include "common.h"

struct ContentEntrySort {
    u8 unk00[0x20];
    u16 id; // 0x20
    u8 unk22[2];
    u8 secondary; // 0x24
    u8 primary; // 0x25
    u8 unk26[2];
};

extern "C" {
ContentEntrySort *contentEntryFindById2(u32 id);

// Sort content entries by descending primary and secondary category keys.
s32 contentEntryCompareCategoriesDesc(const u16 *left, const u16 *right)
{
    ContentEntrySort *leftEntry = contentEntryFindById2(*left);
    ContentEntrySort *rightEntry = contentEntryFindById2(*right);
    s32 difference = rightEntry->primary - leftEntry->primary;
    if (difference == 0) {
        leftEntry = contentEntryFindById2(*left);
        rightEntry = contentEntryFindById2(*right);
        difference = rightEntry->secondary - leftEntry->secondary;
    }
    return difference;
}
}
