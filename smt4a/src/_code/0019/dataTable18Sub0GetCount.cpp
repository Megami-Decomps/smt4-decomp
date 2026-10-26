#include "common.h"
#include "code/Code0015.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

extern void *dataTableGet(int table, int section);
extern u32 dataTableGetCount(void *table);
u32 dataTable18Sub0GetCount(void)
{
    dataTableGetCount(dataTableGet(24, 0));
}

} /* extern "C" */
