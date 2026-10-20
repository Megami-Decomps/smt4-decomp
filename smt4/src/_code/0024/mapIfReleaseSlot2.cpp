#include "map/mapIf.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfReleaseSlot2(void)
{
    MapIfSlot *slot = &g_mapIf.state->slots[2];

    asdMdlManagerMarkDestroy(slot->handle);
}

} /* extern "C" */
