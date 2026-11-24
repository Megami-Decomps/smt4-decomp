#include "shard/Shard0048.h"

extern "C" {

extern void rt_memclr(u8 *block, u32 size);

void block3E6OwnerClear(Block66Owner *obj)
{
    rt_memclr((u8 *)obj->secondaryMarkers, sizeof(obj->secondaryMarkers));
}

} /* extern "C" */
