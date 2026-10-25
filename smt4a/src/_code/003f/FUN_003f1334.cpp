#include "shard/Shard003F.h"
#include "shard/FUN_003f1334.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);
extern u32 loadSlotRequestAsync(u32 id, s32 value);

void FUN_003f1334(void)
{
    if (loadSlotIsLoaded(0x4D) == 0) {
        loadSlotRequestAsync(0x4D, 0);
    }
}

} /* extern "C" */
