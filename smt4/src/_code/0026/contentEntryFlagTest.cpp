/* NON_MATCHING: only the copy of id into r4 is scheduled before the id>400 branch (retail after it) and one branch target differs */
#include "common.h"

extern "C" {

typedef struct Entry0026a794 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x16];
    /* 0x38 */ u32 flags;
} Entry0026a794;

typedef struct Record0026a794 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 flags;
} Record0026a794;

typedef s32 Compare0026a794(const Entry0026a794 *a, const Entry0026a794 *b);

typedef struct AocSystem0026a794 AocSystem0026a794;

Entry0026a794 *recordTableFindById(AocSystem0026a794 *aoc, u32 id);
Record0026a794 *FUN_002ae164(u32 id);
void *dataTableGet(s32 table, s32 slot);
Entry0026a794 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry0026a794 *libc_bsearch(const Entry0026a794 *key, const Entry0026a794 *base, u32 count, u32 size, Compare0026a794 *compare);

/* The id comparator at 0x145a98 (unnamed; retail embeds its address). */
#define ID_COMPARE_0026A794 ((Compare0026a794 *)0x145a98)

extern AocSystem0026a794 *g_aocSystem; /* 0x433158 */

/* Flag test on entry `id`: ids above 400 come from the add-on content or data table 4 section 1 (bit 30 clear), the rest from FUN_002ae164 (sign bit clear gives 1). */
u32 contentEntryFlagTest(u32 id)
{
    Entry0026a794 *entry;
    Record0026a794 *record;

    if (id > 400) {
        entry = recordTableFindById(g_aocSystem, id);
        if (entry == NULL) {
            void *table = dataTableGet(4, 1);
            Entry0026a794 *entries = dataTableGetEntries(table);
            u32 count = dataTableGetCount(table);
            Entry0026a794 key;

            key.id = id;
            entry = libc_bsearch(&key, entries, count, sizeof(Entry0026a794), ID_COMPARE_0026A794);
        }
        if (entry != NULL) {
            return ~(entry->flags >> 30) & 1;
        }
    } else {
        record = FUN_002ae164(id);
        if (record != NULL) {
            return (record->flags >> 31) + 1;
        }
    }
    return 0;
}

} /* extern "C" */
