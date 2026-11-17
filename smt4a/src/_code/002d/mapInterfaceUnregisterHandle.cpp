#include "map/MapIfGlobals.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Removes the fast-travel marker model's controller from the handle registry. */
void mapInterfaceUnregisterHandle(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[0];
    MoriModelContent *resource = slot->resource;
    ptrListRemoveClearOwner(g_handleRegistry, resource->body);
}

}
