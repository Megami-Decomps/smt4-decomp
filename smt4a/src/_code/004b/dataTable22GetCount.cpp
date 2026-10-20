#include "common.h"

extern "C" {

extern u32 dataTableGet(u32 table, u32 index);
extern int dataTableGetCount(u32 table);

/* Number of entries in data table 2/2. */
int dataTable22GetCount(void)
{
    return dataTableGetCount(dataTableGet(2, 2));
}

} /* extern "C" */
