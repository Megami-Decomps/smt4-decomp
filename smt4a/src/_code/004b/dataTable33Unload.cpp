#include "shard/Shard004B.h"

extern "C" {

extern void dataTableFree(u32 id);

void dataTable33Unload(void)
{
    dataTableFree(0x33);
}

} /* extern "C" */
