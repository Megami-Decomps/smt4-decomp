#include "shard/Shard0048.h"
#include "runtime/String.h"

extern "C" {


void block3E6OwnerClear(Block66Owner *obj)
{
    rt_memclr((u8 *)obj->secondaryMarkers, sizeof(obj->secondaryMarkers));
}

} /* extern "C" */
