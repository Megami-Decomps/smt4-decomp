#include "map/MapIfGlobals.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);

void mapIfReleaseSlot3(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[4];

    asdMdlManagerMarkDestroy(slot->model);
}

} /* extern "C" */
