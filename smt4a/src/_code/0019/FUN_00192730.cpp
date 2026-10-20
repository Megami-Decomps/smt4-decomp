#include "common.h"

extern "C" {

extern void *dataTableGet(int table, int section);
extern u32 dataTableGetCount(void *table);
u32 FUN_00192730(void)
{
    dataTableGetCount(dataTableGet(24, 0));
}

} /* extern "C" */
