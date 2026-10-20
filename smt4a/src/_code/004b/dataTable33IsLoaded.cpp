#include "shard/Shard004B.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);

void dataTable33IsLoaded(void)
{
    loadSlotIsLoaded(0x33);
}

} /* extern "C" */
