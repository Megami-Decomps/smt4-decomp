#include "map/mapIf.h"

extern "C" {

void FUN_001aea28(u32 gfx, u32 handle);

extern MapIfGlobalsA g_mapIf;
extern u32 DAT_0056fcc0;

void mapIfReleaseSlot1(void)
{
    MapIfSlotA *slot = &g_mapIf.state->slots[1];

    FUN_001aea28(DAT_0056fcc0, slot->resource->handle);
}

} /* extern "C" */
