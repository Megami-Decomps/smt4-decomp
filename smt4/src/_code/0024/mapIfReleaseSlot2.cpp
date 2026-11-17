#include "map/MapIfGlobals.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);

void mapIfReleaseSlot2(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[3];

    asdMdlManagerMarkDestroy(slot->model);
}

} /* extern "C" */
