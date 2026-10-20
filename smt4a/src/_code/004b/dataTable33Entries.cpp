#include "shard/Shard004B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u8 *dataTableGetEntries(void *table);

void dataTable33Entries(u32 unused, u32 type)
{
    dataTableGetEntries(dataTableGet(0x33, type));
}

} /* extern "C" */
