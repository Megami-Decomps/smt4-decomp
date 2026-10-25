#include "shard/Shard004B.h"
#include "shard/dataTable33IsLoaded.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);

s32 dataTable33IsLoaded(void *arg0)
{
    loadSlotIsLoaded(0x33);
}

} /* extern "C" */
