#include "map/mapIf.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfReleaseSlot1(void)
{
    MapIfSlot *slot = &g_mapIf.state->slots[1];

    asdMdlManagerMarkDestroy(slot->handle);
}

} /* extern "C" */
