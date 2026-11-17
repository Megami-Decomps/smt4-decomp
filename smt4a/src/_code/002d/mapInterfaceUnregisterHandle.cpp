#include "map/MapIfGlobals.h"
#include "Model/MoriModelManager.h"

extern "C" {

/* Removes the fast-travel marker model's controller from the handle registry. */
void mapInterfaceUnregisterHandle(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[0];
    MapIfResource *resource = slot->resource;
    ptrListRemoveClearOwner(g_handleRegistry, (void *)resource->handle);
}

}
