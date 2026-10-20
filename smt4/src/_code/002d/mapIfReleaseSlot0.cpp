#include "map/mapIf.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfReleaseSlot0(void)
{
    MapIfSlot *slot = &g_mapIf.state->slots[0];

    asdMdlManagerMarkDestroy(slot->handle);
}

} /* extern "C" */
