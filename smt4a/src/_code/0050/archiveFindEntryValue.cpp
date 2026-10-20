/* NON_MATCHING: the loop index and the table pointer are held in swapped callee-saved registers (r4/r5). */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 name;     /* string pointer */
    /* 0x04 */ u32 value;
} Entry;

typedef struct Table {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Entry *entries;
    /* 0x1C */ u32 count;
} Table;

typedef struct Archive {
    /* 0x00 */ Table *table;
} Archive;

int libc_strncmp(u32 a, u32 b, int size);

/* Looks up `key` among the archive's entries (compared for up to 0x40 bytes) and returns its value, or 0 if absent. */
u32 archiveFindEntryValue(Archive *archive, u32 key)
{
    Table *table = archive->table;
    u32 count = table->count;
    u32 i;

    for (i = 0; i < count; i++) {
        if (libc_strncmp(table->entries[i].name, key, 0x40) == 0) {
            return table->entries[i].value;
        }
    }
    return 0;
}

} /* extern "C" */
