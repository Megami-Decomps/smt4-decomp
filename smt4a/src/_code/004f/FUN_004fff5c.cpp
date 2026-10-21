/* NON_MATCHING: table/index use r5/r4 instead of retail r4/r5; all 25 operations, including the native hint NOP, match. */
#include "common.h"

struct NamedValueEntry {
    const char *name;
    u32 value;
};

struct NamedValueTable {
    u8 unk00[0x18];
    NamedValueEntry *entries;
    u32 count;
};

struct NamedValueOwner {
    NamedValueTable *table;
};

extern "C" s32 libc_strncmp(const char *left, const char *right, u32 size);

// Return the first value whose name matches within the table's 64-byte name limit.
extern "C" u32 FUN_004fff5c(const NamedValueOwner *owner, const char *name)
{
    const NamedValueTable &table = *owner->table;
    u32 count = table.count;
    for (u32 index = 0; index < count; ++index) {
        if (libc_strncmp(table.entries[index].name, name, 0x40) == 0)
            return table.entries[index].value;
    }
    return 0;
}
