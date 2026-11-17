#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_Smt4.h"
#include "addon/AocSystem.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

extern ConsumableRecord *dataTable08Sub1FindById(AocSystem *system, u32 id);
extern void *dataTableGet(s32 table, s32 section);
extern u32 dataTableGetCount(void *section);
extern ConsumableRecord *libc_bsearch(ConsumableRecord *key, ConsumableRecord *entries, u32 count, s32 size, u8 *compare);

/* The record for `id`: the AOC system's own, else a search of the table. */
ConsumableRecord *dataTable08Sub1GetRecord(u32 id)
{
    ConsumableRecord key;
    void *section;
    ConsumableRecord *found;

    key.id = id;
    if (g_aocSystem->table08[1].records != NULL) {
        found = dataTable08Sub1FindById(g_aocSystem, id);
        if (found != NULL) {
            return found;
        }
    }
    section = dataTableGet(8, 1);
    if (section != NULL) {
        ConsumableRecord *entries = reinterpret_cast<ConsumableRecord *>(dataTableGetEntries(section));
        u32 count = dataTableGetCount(section);

        return libc_bsearch(&key, entries, count, sizeof(ConsumableRecord), (u8 *)0x001385bc); /* comparator in the code */
    }
    return NULL;
}

} /* extern "C" */
