#include "common.h"

extern "C" {

u32 dataTableGetCount(void *table);
void *dataTableGet(int id, int index);

/* Number of entries in data table 0x2B/1; callers pass a view that is not read. */
s32 dataTable2bSub1GetCount(void *unused)
{
    return dataTableGetCount(dataTableGet(0x2b, 1));
}

} /* extern "C" */
