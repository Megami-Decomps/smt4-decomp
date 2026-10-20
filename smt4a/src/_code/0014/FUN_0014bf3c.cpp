/* NON_MATCHING: only the compiler's handling of the two record-selection tails differs: retail copies the `wide` flag into a fresh register per path before the lookup, returns from `(id < count) ? ... : records` with conditional moves and pops directly; the build shares a branch tail. */
#include "common.h"

extern "C" {

typedef struct AocEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 id;
} AocEntry;

extern u32 g_aocSystem; /* 0x570280 */

extern AocEntry *FUN_00184310(void);
extern u8 *FUN_0017607c(u32 system, u32 id);
extern u32 dataTableGet(u32 table, u32 index);
extern u8 *dataTableGetEntries(void);
extern u32 dataTableGetCount(u32 table);

/* Returns the add-on entry's table record, or the system's own data + 2 when it has some; `wide` selects the record's second half (+0x10). */
u8 *FUN_0014bf3c(int unused, int wide)
{
    AocEntry *entry = FUN_00184310();
    u8 *result;
    u32 id;
    u32 table;
    u8 *records;
    u32 count;

    if (entry != NULL) {
        id = entry->id;
        result = FUN_0017607c(g_aocSystem, id);
        if (result == NULL) {
            table = dataTableGet(1, 0);
            records = dataTableGetEntries();
            count = dataTableGetCount(table);
            if (id < count) {
                records = records + id * 0x30;
                if (wide != 0) {
                    return records + 0x10;
                }
            }
            return records;
        }
    } else {
        result = FUN_0017607c(g_aocSystem, 0);
        if (result == NULL) {
            table = dataTableGet(1, 0);
            records = dataTableGetEntries();
            count = dataTableGetCount(table);
            if (count != 0 && wide != 0) {
                return records + 0x10;
            }
            return records;
        }
    }
    return result + 2;
}

} /* extern "C" */
