#include "shard/Shard0046.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);

void dataTable28IsLoaded(void)
{
    loadSlotIsLoaded(0x28);
}

} /* extern "C" */
