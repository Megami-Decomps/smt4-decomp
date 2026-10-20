#include "shard/Shard004C.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern s32 dataTableGetCount(void *table);
extern u8 *dataTableGetEntries(void *table);

/* Table 9 (type 3) halfword at clamp(a - b + 10, 0, count - 1). */
u16 dataTable9Type3GetClamped(s32 a, s32 b)
{
    void *table = dataTableGet(9, 3);
    s32 index = (a - b) + 10;

    if (index < 0) {
        index = 0;
    }
    if (dataTableGetCount(table) <= (u32)index) {
        index = dataTableGetCount(table) - 1;
    }
    return ((u16 *)dataTableGetEntries(table))[index];
}

} /* extern "C" */
