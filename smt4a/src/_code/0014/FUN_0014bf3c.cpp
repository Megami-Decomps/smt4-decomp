/* NON_MATCHING: the two inlined record lookups now match retail; armcc numbers the entry id/wide copies r5/r6 where retail uses r4/r6 (wide copied before the id byte load). */
#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct AocEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 id;
} AocEntry;

extern u32 g_aocSystem; /* 0x570280 */

extern AocEntry *FUN_00184310(void);
extern u8 *FUN_0017607c(u32 system, u32 id);

/* The add-on record data + 2 when the system has some for `id`, else the table record for `id`; `wide` selects its second half (+0x10). */
static __inline u8 *aocRecordData(u32 id, int wide)
{
    u8 *result = FUN_0017607c(g_aocSystem, id);

    if (result == NULL) {
        void *table = dataTableGet(1, 0);
        u8 *records = (u8 *)dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);

        if (id < count) {
            records = records + id * 0x30;
            if (wide != 0) {
                return records + 0x10;
            }
        }
        return records;
    }
    return result + 2;
}

/* Returns the add-on entry's table record, or the system's own data + 2 when it has some; `wide` selects the record's second half (+0x10). */
u8 *FUN_0014bf3c(int unused, int wide)
{
    AocEntry *entry = FUN_00184310();

    if (entry != NULL) {
        return aocRecordData(entry->id, wide);
    }
    return aocRecordData(0, wide);
}

} /* extern "C" */
