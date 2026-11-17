#include "map/MapIfGlobals.h"

extern "C" {

/* Releases the fast-travel marker slot's model and clears the slot. */
void mapIfReleaseHandle(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[0];
    if (slot->resource != NULL) {
        slot->resource->vtable->release(slot->resource);
        slot->resource = NULL;
    }
    slot->active = 0;
}

} /* extern "C" */
