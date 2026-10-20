#include "map/mapIf.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfReleaseSlot3(void)
{
    MapIfSlot *slot = &g_mapIf.state->slots[3];

    asdMdlManagerMarkDestroy(slot->handle);
}

} /* extern "C" */
