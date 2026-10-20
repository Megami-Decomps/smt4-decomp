#include "shard/Shard0046.h"

extern "C" {

extern u32 loadSlotEnsureLoaded(u32 id);

void dataTable27Load(void)
{
    loadSlotEnsureLoaded(0x27);
}

} /* extern "C" */
