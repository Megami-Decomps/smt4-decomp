#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Releases the second action marker slot's model and clears the slot. */
void mapIfReleasePanel(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[2];
    if (slot->resource != NULL) {
        delete slot->resource;
        slot->resource = NULL;
    }
    slot->active = 0;
}

} /* extern "C" */
