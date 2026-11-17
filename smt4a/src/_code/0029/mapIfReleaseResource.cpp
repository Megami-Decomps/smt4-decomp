#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Releases the fourth action marker slot's model and clears the slot. */
void mapIfReleaseResource(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[4];
    if (slot->resource != NULL) {
        delete slot->resource;
        slot->resource = NULL;
    }
    slot->active = 0;
}

} /* extern "C" */
