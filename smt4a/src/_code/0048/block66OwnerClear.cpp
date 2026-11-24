#include "shard/Shard0048.h"

extern "C" {

extern void rt_memclr(u8 *block, u32 size);

void block66OwnerClear(Block66Owner *obj)
{
    rt_memclr((u8 *)obj->primaryMarkers, sizeof(obj->primaryMarkers));
}

} /* extern "C" */
