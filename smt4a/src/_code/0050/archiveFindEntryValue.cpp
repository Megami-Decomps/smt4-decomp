/* NON_MATCHING: the loop index and the table pointer are held in swapped callee-saved registers (r4/r5). */
#include "shard/W6_W6Match8_ArchiveValues.h"

extern "C" {


int libc_strncmp(u32 a, u32 b, int size);

/* Looks up `key` among the archive's entries (compared for up to 0x40 bytes) and returns its value, or 0 if absent. */
u32 archiveFindEntryValue(Archive *archive, u32 key)
{
    ArchiveAttributeTable *table = archive->table;
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
