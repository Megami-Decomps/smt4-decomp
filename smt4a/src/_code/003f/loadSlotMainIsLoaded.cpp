#include "shard/Shard003F.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);

u8 loadSlotMainIsLoaded(void)
{
    return loadSlotIsLoaded(0x4D) != 0;
}

} /* extern "C" */
