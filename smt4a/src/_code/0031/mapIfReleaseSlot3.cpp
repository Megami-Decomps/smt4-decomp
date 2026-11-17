#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"
#include "Model/MoriModelManager.h"

extern "C" {

void mapIfReleaseSlot3(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[3];

    ptrListRemoveClearOwner(g_handleRegistry, slot->resource->body);
}

} /* extern "C" */
