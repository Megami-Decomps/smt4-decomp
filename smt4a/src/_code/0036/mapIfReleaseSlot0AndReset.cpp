#include "map/mapIf.h"

extern "C" {

void FUN_001aea28(u32 gfx, u32 handle);

extern MapIfGlobalsA g_mapIf;
extern u32 DAT_0056fcc0;

void mapIfReleaseSlot0AndReset(void)
{
    MapIfStateA *state = g_mapIf.state;

    FUN_001aea28(DAT_0056fcc0, state->slots[0].resource->handle);
    state->unkCD08 = 0;
    state->unkCD0C = 0;
}

} /* extern "C" */
