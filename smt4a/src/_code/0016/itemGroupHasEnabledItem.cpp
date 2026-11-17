#include "common.h"

struct GroupItemFlags {
    u8 unk00;
    u8 enabled; // 0x01
};

struct ItemPointerList {
    GroupItemFlags **begin; // 0x00
    GroupItemFlags **end; // 0x04
    GroupItemFlags **capacity; // 0x08
};

struct GroupItemTable {
    u8 unk000[0x114];
    ItemPointerList groups[1]; // 0x114: variable-length group table
};

/* A vector-style iterator over the pointer list. */
struct ItemIterator {
    GroupItemFlags **current;
};
static __inline bool operator!=(const ItemIterator &a, const ItemIterator &b)
{
    return a.current != b.current;
}

extern "C" {
// Report whether any item in the selected group is enabled.
s32 itemGroupHasEnabledItem(GroupItemTable *table, s32 group)
{
    ItemPointerList *items = &table->groups[group];
    ItemIterator last = {items->end};
    for (ItemIterator item = {items->begin}; item != last; ++item.current) {
        if ((*item.current)->enabled != 0) {
            return 1;
        }
    }
    return 0;
}
}
