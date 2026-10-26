#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_Smt4.h"

extern "C" {

/* A 128-byte record of data table 8 section 1, keyed by the u16 at 0x60. */
typedef struct Record {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 id;
    /* 0x62 */ u8 unk62[0x1E];
} Record;

typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x3AC];
    /* 0x3AC */ void *overrides;
} AocSystem;

extern AocSystem *g_aocSystem;

extern Record *FUN_0014148c(AocSystem *system, u32 id);
extern void *dataTableGet(s32 table, s32 section);
extern u32 dataTableGetCount(void *section);
extern Record *libc_bsearch(Record *key, Record *entries, u32 count, s32 size, u8 *compare);

/* The record for `id`: the AOC system's own, else a search of the table. */
Record *dataTable08Sub1GetRecord(u16 id)
{
    Record key;
    void *section;
    Record *found;

    key.id = id;
    if (g_aocSystem->overrides != NULL) {
        found = FUN_0014148c(g_aocSystem, id);
        if (found != NULL) {
            return found;
        }
    }
    section = dataTableGet(8, 1);
    if (section != NULL) {
        Record *entries = reinterpret_cast<Record *>(dataTableGetEntries(section));
        u32 count = dataTableGetCount(section);

        return libc_bsearch(&key, entries, count, sizeof(Record), (u8 *)0x001385bc); /* comparator in the code */
    }
    return NULL;
}

} /* extern "C" */
