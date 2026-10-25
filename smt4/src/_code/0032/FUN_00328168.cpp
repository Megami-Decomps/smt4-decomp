/* NON_MATCHING: retail keeps the NULL of the bounds-checked lookup hoisted in r9 (movcs r0, r9, pushing r9/sl); armcc emits movcs r0, #0. */
#include "gamedata/DataTable.h"

/* A table 0x2E section 3 entry, keyed by two signed bytes. */
struct Table2eSub3Entry {
    /* 0x00 */ s8 first;
    /* 0x01 */ s8 second;
    /* 0x02 */ u8 unk02[0x12];
};

extern "C" {

/* Finds the table 0x2E section 3 entry with the given key pair, or NULL. */
Table2eSub3Entry *FUN_00328168(s32 first, s32 second)
{
    for (s32 index = 0; index < (s32)dataTableGetCount(dataTableGet(0x2e, 3)); index++) {
        DataTableView<Table2eSub3Entry> table(0x2e, 3);
        Table2eSub3Entry *entry = table.at(index);
        if (entry->first == first && entry->second == second) {
            return entry;
        }
    }
    return NULL;
}

} /* extern "C" */
