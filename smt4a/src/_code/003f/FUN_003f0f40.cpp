#include "shard/Shard003F.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);

u8 FUN_003f0f40(void)
{
    return loadSlotIsLoaded(0x4D) != 0;
}

} /* extern "C" */
