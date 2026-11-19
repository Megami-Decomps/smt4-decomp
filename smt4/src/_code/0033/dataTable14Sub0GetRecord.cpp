#include "common.h"

extern "C" {

u32 dataTableGetCount(u32 value);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 first, u32 second);
int libc_bsearch(u8 *args, u32 first, u32 second, int count, u8 *table);

/* Finds the 6-byte record of `value` in data table 0x14's first sub-table (binary search on its first byte; the comparator is at 0x2dcb50). */
void *dataTable14Sub0GetRecord(u8 value)
{
    u32 first;
    u32 second;
    u8 args[12];

    first = dataTableGet(0x14, 0);
    second = dataTableGetEntries();
    first = dataTableGetCount(first);
    args[0] = value;
    return reinterpret_cast<void *>(libc_bsearch(args, second, first, 6, (u8 *)0x2dcb50));
}

} /* extern "C" */
