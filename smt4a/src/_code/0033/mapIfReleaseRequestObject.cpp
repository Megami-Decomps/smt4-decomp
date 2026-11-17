#include "map/MapIfGlobals.h"

extern "C" {

/* Releases the first action marker slot's model and clears the slot. */
void mapIfReleaseRequestObject(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[1];
    if (slot->resource != NULL) {
        slot->resource->vtable->release(slot->resource);
        slot->resource = NULL;
    }
    slot->active = 0;
}

} /* extern "C" */
