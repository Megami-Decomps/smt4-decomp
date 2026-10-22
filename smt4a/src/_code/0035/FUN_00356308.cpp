#include "addon/aocMain.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 data[0xC];
} TableEntry;


extern AocSystemA *g_aocSystem;

u32 dataTableGet(u32 id, u32 section);
u32 dataTableGetCount(u32 table);
TableEntry *dataTableGetEntries(void);
u32 FUN_0046c35c(AocSystemA *aoc, s32 id, s32 section);
TableEntry *packageFindIndexedTripleRecord(AocSystemA *aoc, u32 index);

/* Returns entry `index` of data table 0x29, continuing into the add-on content table past its end (NULL when out of range). */
TableEntry *FUN_00356308(u32 index)
{
    u32 table = dataTableGet(0x29, 0);
    TableEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return entries + index;
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x23, 0) + count) {
        return packageFindIndexedTripleRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
