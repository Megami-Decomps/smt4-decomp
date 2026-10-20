#include "map/mapIf.h"

extern "C" {

void FUN_00152bec(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfReleaseSlot0(void)
{
    MapIfSlot *slot = &g_mapIf.state->slots[0];

    FUN_00152bec(slot->handle);
}

} /* extern "C" */
