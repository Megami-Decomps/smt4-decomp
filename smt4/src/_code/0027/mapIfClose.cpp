#include "map/mapIf.h"

extern "C" {

extern MapIfGlobals g_mapIf;

void mapIfClose(void)
{
    MapIfState *state = g_mapIf.state;

    if (state->unkCCB8 != 0) {
        state->unkCCB8 = 3;
        state->unkCCBA = 0;
    }
}

} /* extern "C" */
