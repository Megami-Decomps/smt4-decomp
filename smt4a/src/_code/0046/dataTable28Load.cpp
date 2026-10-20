#include "shard/Shard0046.h"

extern "C" {

extern u32 loadSlotEnsureLoaded(u32 id);

void dataTable28Load(void)
{
    loadSlotEnsureLoaded(0x28);
}

} /* extern "C" */
