#include "map/MapIfGlobals.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);

void mapIfReleaseSlot1(void)
{
    MapIfModelSlot *slot = &g_mapIf.state->slots[2];

    asdMdlManagerMarkDestroy(slot->model);
}

} /* extern "C" */
