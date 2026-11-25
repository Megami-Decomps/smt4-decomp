#include "shard/Shard0048.h"
#include "runtime/String.h"

extern "C" {


void block66OwnerClear(Block66Owner *obj)
{
    rt_memclr((u8 *)obj->primaryMarkers, sizeof(obj->primaryMarkers));
}

} /* extern "C" */
