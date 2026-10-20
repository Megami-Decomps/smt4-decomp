#include "common.h"

extern "C" {

void dataTableGetCount(u32 table);
void dataTableGetEntries(void);
u32 dataTableGet(u32 table, u32 arg);

/* Looks up data table (0x37, 0), fetches its entries and counts them (results unused). */
void FUN_002ebda8(void)
{
    u32 table;

    table = dataTableGet(0x37, 0);
    dataTableGetEntries();
    dataTableGetCount(table);
}

} /* extern "C" */
