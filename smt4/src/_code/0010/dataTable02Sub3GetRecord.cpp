#include "common.h"

extern "C" {

u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
u8 *dataTableGetEntries(void);
int FUN_002c0a9c(int a, int b, int c);

/* Runs FUN_002c0a9c on every byte pair of data table 2/3. */
void dataTable02Sub3GetRecord(void)
{
    u32 table = dataTableGet(2, 3);
    u8 *entries = dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        u8 *pair = entries + i * 2;
        FUN_002c0a9c(pair[0], pair[1], 0);
    }
}

} /* extern "C" */
