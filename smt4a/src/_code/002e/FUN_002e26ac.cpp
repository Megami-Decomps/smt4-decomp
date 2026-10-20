#include "common.h"

extern "C" {

void dataTableGetCount(u32 table);
u32 dataTableGet(u32 table, u32 arg);

/* Looks up data table (0x15, 0) and counts its entries. */
void FUN_002e26ac(void)
{
    dataTableGetCount(dataTableGet(0x15, 0));
}

} /* extern "C" */
