#include "common.h"

/* One row of data table 10: a key and the value it maps to. */
struct DataTable10Entry {
    /* 0x00 */ u16 key;
    /* 0x02 */ u16 value;
    /* 0x04 */ u8 unk04[4];
};

extern "C" {

u32 dataTableGet(u32 table, u32 sub);
DataTable10Entry *dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);

/* Returns the value data table 10 maps `key` to, or 0 when the key is absent. */
u16 FUN_0019e52c(u32 key)
{
    u32 table = dataTableGet(10, 0);
    DataTable10Entry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].key == key) {
            return entries[i].value;
        }
    }
    return 0;
}

} /* extern "C" */
