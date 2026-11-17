#include "map/MapIfGlobals.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);

void mapIfReleaseSlot0(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[1];

    asdMdlManagerMarkDestroy(slot->model);
}

} /* extern "C" */
