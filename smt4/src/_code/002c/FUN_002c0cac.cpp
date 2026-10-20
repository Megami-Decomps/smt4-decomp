/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *dataTableGet(u32 table, u32 index);
void dataTableGetEntries(void *table);

void FUN_002c0cac(void)
{
    dataTableGetEntries(dataTableGet(24, 0));
}

}
