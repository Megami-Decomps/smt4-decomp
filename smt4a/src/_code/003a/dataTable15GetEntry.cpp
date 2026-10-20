#include "shard/Shard003A.h"

extern "C" {

typedef struct Entry64 {
    /* 0x00 */ u8 data[100];
} Entry64;

extern void *dataTableGet(u32 index, u32 type);
extern Entry64 *dataTableGetEntries(void *table);

/* Entry `index` of data table 0x15 (type 0). */
Entry64 *dataTable15GetEntry(s32 index)
{
    void *table = dataTableGet(0x15, 0);

    return dataTableGetEntries(table) + index;
}

} /* extern "C" */
