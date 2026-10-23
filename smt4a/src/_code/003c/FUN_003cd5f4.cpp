/* NON_MATCHING: correct table traversal; register allocation and conditional-null branches differ. */
#include "gamedata/DataTable.h"

namespace {
struct Table30SearchRecord {
    /* 0x00 */ u8 data[0x20];
    /* 0x20 */ s32 key;
    /* 0x24 */ s16 value;
    /* 0x26 */ u8 padding[2];
};
}

extern "C" {
extern void *g_aocSystem;
u32 FUN_0046c35c(void *system, s32 kind, u32 tableIndex);
Table30SearchRecord *FUN_0046ea50(void *system, u32 index);

// Find a key in the base and downloadable records and return its associated value.
s32 FUN_003cd5f4(s32 key)
{
    for (u32 index = 0; (s32)index < (s32)(dataTableGetCount(dataTableGet(0x30, 0)) +
             FUN_0046c35c(g_aocSystem, 0x27, 0)); ++index) {
        DataTableView<Table30SearchRecord> table(0x30, 0);
        Table30SearchRecord *record;
        if (index < table.count) {
            record = &table.entries[index];
        } else {
            u32 total = table.count + FUN_0046c35c(g_aocSystem, 0x27, 0);
            record = NULL;
            if (index < total)
                record = FUN_0046ea50(g_aocSystem, index - table.count);
        }
        if (record->key == key)
            return record->value;
    }
    return -1;
}
}
