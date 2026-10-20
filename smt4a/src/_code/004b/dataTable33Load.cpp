#include "shard/Shard004B.h"

extern "C" {

extern u32 loadSlotEnsureLoaded(u32 id);

void dataTable33Load(void)
{
    loadSlotEnsureLoaded(0x33);
}

} /* extern "C" */
