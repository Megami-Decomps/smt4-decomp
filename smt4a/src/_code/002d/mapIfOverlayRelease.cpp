#include "map/MapIfGlobals.h"

extern "C" {

/* Releases the third action marker slot's model and clears the slot. */
void mapIfOverlayRelease(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[3];
    if (slot->resource != NULL) {
        slot->resource->vtable->release(slot->resource);
        slot->resource = NULL;
    }
    slot->active = 0;
}

} /* extern "C" */
