#include "map/MapIfGlobals.h"

extern "C" {
void asdTMTexTableReleaseNode(s32, s32);

// Release the first map-interface overlay and its texture-table reference.
void mapIfReleaseFirstOverlay(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[0];
    if (slot->resource != NULL) {
        slot->resource->vtable->release(slot->resource);
        slot->resource = NULL;
    }
    slot->active = 0;
    asdTMTexTableReleaseNode(4, 0x25);
}
}
