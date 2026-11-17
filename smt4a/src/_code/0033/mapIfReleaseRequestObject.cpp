#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Releases the first action marker slot's model and clears the slot. */
void mapIfReleaseRequestObject(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[1];
    if (slot->resource != NULL) {
        delete slot->resource;
        slot->resource = NULL;
    }
    slot->active = 0;
}

} /* extern "C" */
