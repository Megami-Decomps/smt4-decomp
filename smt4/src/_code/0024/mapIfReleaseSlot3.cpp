#include "map/mapIf.h"

extern "C" {

void FUN_00152bec(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfReleaseSlot3(void)
{
    MapIfSlot *slot = &g_mapIf.state->slots[3];

    FUN_00152bec(slot->handle);
}

} /* extern "C" */
