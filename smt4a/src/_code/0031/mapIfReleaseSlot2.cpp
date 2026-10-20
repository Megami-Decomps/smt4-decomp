#include "map/mapIf.h"

extern "C" {

void ptrListRemoveClearOwner(u32 gfx, u32 handle);

extern MapIfGlobalsA g_mapIf;
extern u32 g_handleRegistry;

void mapIfReleaseSlot2(void)
{
    MapIfSlotA *slot = &g_mapIf.state->slots[2];

    ptrListRemoveClearOwner(g_handleRegistry, slot->resource->handle);
}

} /* extern "C" */
