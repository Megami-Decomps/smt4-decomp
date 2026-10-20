/* NON_MATCHING: register allocation only: retail keeps the index in r5 and the table in r4; built swaps them. */
#include "common.h"

extern "C" {

typedef struct NamedEntry {
    /* 0x0 */ const char *name;
    /* 0x4 */ u32 value;
} NamedEntry;

typedef struct NamedTable {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ NamedEntry *entries;
    /* 0x1C */ u32 count;
} NamedTable;

typedef struct NamedHolder {
    /* 0x0 */ NamedTable *table;
} NamedHolder;

s32 libc_strncmp(const char *a, const char *b, u32 length);

/* Returns the value of the entry whose name matches `name` (first 64 characters), or 0. */
u32 FUN_00234474(NamedHolder *holder, const char *name)
{
    NamedTable *table = holder->table;
    u32 count = table->count;
    u32 i;

    for (i = 0; i < count; i++) {
        if (libc_strncmp(table->entries[i].name, name, 0x40) == 0) {
            return table->entries[i].value;
        }
    }
    return 0;
}

} /* extern "C" */
