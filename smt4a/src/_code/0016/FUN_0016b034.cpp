/* NON_MATCHING: iterator termination comparisons have reversed operands relative to retail. */
#include "common.h"

struct GroupItem {
    u8 unk00;
    u8 enabled; // 0x01
};

struct ItemPointerList {
    GroupItem **begin; // 0x00
    GroupItem **end; // 0x04
    GroupItem **capacity; // 0x08
};

struct GroupItemTable {
    u8 unk000[0x114];
    ItemPointerList groups[1]; // 0x114: variable-length group table
};

extern "C" {
// Report whether any item in the selected group is enabled.
s32 FUN_0016b034(GroupItemTable *table, s32 group)
{
    ItemPointerList *items = &table->groups[group];
    for (GroupItem **item = items->begin; item != items->end; ++item) {
        if ((*item)->enabled != 0) {
            return 1;
        }
    }
    return 0;
}
}
