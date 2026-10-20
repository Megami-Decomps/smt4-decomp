#include "shard/Shard0037.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern void *dataTableGetEntries(void *table);

void dataTable5GetEntries(void)
{
    dataTableGetEntries(dataTableGet(5, 0));
}

} /* extern "C" */
