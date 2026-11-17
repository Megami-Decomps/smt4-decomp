#include "map/MapIfGlobals.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"
#include "Model/MoriModelManager.h"

extern "C" {

void mapIfReleaseSlot2(void)
{
    MapIfModelSlotA *slot = &g_mapIf.state->slots[2];

    ptrListRemoveClearOwner(g_handleRegistry, slot->resource->body);
}

} /* extern "C" */
