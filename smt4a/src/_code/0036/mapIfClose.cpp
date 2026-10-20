#include "map/mapIf.h"

extern "C" {

extern MapIfGlobalsA g_mapIf;

void mapIfClose(void)
{
    MapIfStateA *state = g_mapIf.state;

    if (state->unkCCE8 != 0) {
        state->unkCCE8 = 3;
        state->unkCCEA = 0;
    }
}

} /* extern "C" */
