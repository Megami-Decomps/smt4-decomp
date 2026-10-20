#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x0C];
    /* 0x0E */ u16 needSetA;
    /* 0x10 */ u16 needSetB;
    /* 0x12 */ u16 needClearA;
    /* 0x14 */ u16 needClearB;
    /* 0x16 */ u8 unk16[0x3E];
} Entry;                        /* 0x54 */

u32 dataTableGet(u32 table, u32 arg);
s32 FUN_0018719c(u32 flag);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns 1 when data table (0x35, 1) has an entry for `id` whose required flags are met: each of the two "set" flags (if given) is set and each of the two "clear" flags (if given) is clear. */
u32 dataTableHasMatchingEntry35(u32 id)
{
    u32 table;
    Entry *entry;
    u32 count;
    s32 flag;
    u32 i;

    table = dataTableGet(0x35, 1);
    entry = dataTableGetEntries();
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++) {
        if ((((entry->id == id) && ((entry->needSetA == 0 || (flag = FUN_0018719c(entry->needSetA), flag != 0)))) &&
             ((entry->needSetB == 0 || (flag = FUN_0018719c(entry->needSetB), flag != 0)))) &&
            (((entry->needClearA == 0 || (flag = FUN_0018719c(entry->needClearA), flag == 0)) &&
              ((entry->needClearB == 0 || (flag = FUN_0018719c(entry->needClearB), flag == 0)))))) {
            return 1;
        }
        entry = entry + 1;
    }
    return 0;
}

} /* extern "C" */
