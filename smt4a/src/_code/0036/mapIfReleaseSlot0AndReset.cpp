#include "map/mapIf.h"

extern "C" {

void ptrListRemoveClearOwner(u32 gfx, u32 handle);

extern MapIfGlobalsA g_mapIf;
extern u32 g_handleRegistry;

void mapIfReleaseSlot0AndReset(void)
{
    MapIfStateA *state = g_mapIf.state;

    ptrListRemoveClearOwner(g_handleRegistry, state->slots[0].resource->handle);
    state->unkCD08 = 0;
    state->unkCD0C = 0;
}

} /* extern "C" */
