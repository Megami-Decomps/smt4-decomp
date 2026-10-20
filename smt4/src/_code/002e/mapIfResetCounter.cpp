#include "map/mapIf.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfResetCounter(void)
{
    MapIfState *state = g_mapIf.state;

    asdMdlManagerMarkDestroy(state->unkCBEC);
    state->unkCCD8 = 0;
    state->unkCCDC = 0;
}

} /* extern "C" */
