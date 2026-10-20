/* NON_MATCHING: loop index and table pointer are in swapped registers (retail: index r5, table r4) */
#include "common.h"

extern "C" {

typedef struct NameEntry {
    /* 0x0 */ const char *name;
    /* 0x4 */ u32 value;
} NameEntry;

typedef struct NameTable {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ NameEntry *entries;
    /* 0x1C */ u32 count;
} NameTable;

typedef struct NameTableHolder {
    /* 0x0 */ NameTable *table;
} NameTableHolder;

extern s32 libc_strncmp(const char *a, const char *b, u32 n);

/* Returns the value of the entry whose name matches `name` (first 0x40 bytes); 0 if none. */
u32 FUN_00234170(NameTableHolder *holder, const char *name)
{
    NameTable *table = holder->table;
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
