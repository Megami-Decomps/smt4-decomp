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
s32 gameFlagIsSet(u32 flag);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Collects up to eight entries of data table (0x35, 1) for `id` whose required flags are met (two "set" flags and two "clear" flags, each only if given) and returns the first one, or NULL. */
Entry *dataTableFindMatching35(u32 id)
{
    u32 table;
    Entry *entry;
    u32 count;
    s32 flag;
    u32 i;
    s32 found;
    Entry *matches[9];

    matches[0] = NULL;
    matches[1] = NULL;
    matches[2] = NULL;
    matches[3] = NULL;
    matches[4] = NULL;
    matches[5] = NULL;
    matches[6] = NULL;
    matches[7] = NULL;
    table = dataTableGet(0x35, 1);
    entry = dataTableGetEntries();
    count = dataTableGetCount(table);
    found = 0;
    for (i = 0; i < count; i = i + 1) {
        if ((((entry->id == id) && ((entry->needSetA == 0 || (flag = gameFlagIsSet(entry->needSetA), flag != 0)))) &&
             ((entry->needSetB == 0 || (flag = gameFlagIsSet(entry->needSetB), flag != 0)))) &&
            (((entry->needClearA == 0 || (flag = gameFlagIsSet(entry->needClearA), flag == 0)) &&
              ((entry->needClearB == 0 || (flag = gameFlagIsSet(entry->needClearB), flag == 0)))))) {
            matches[found] = entry;
            found = found + 1;
            if (found >= 8) {
                return matches[0];
            }
        }
        entry = entry + 1;
    }
    return matches[0];
}

} /* extern "C" */
