#include "map/MapIfGlobals.h"

extern "C" {

void ptrListRemoveClearOwner(u32 gfx, u32 handle);

extern u32 g_handleRegistry;

void mapIfReleaseSlot4(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[4];

    ptrListRemoveClearOwner(g_handleRegistry, slot->resource->handle);
}

} /* extern "C" */
