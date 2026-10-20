#include "map/mapIf.h"

extern "C" {

void FUN_00152bec(u32 handle);

extern MapIfGlobals g_mapIf;

void mapIfResetCounter(void)
{
    MapIfState *state = g_mapIf.state;

    FUN_00152bec(state->unkCBEC);
    state->unkCCD8 = 0;
    state->unkCCDC = 0;
}

} /* extern "C" */
