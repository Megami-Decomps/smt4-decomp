#include "common.h"

extern "C" {

void *dataTableGet(u32 table, u32 section);
u32 dataTableGetCount(void *table);

s16 dataTableCountEntrySet(void)
{
    return (s16)dataTableGetCount(dataTableGet(77, 0));
}

} /* extern "C" */
