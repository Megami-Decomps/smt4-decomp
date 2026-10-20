#include "map/mapIf.h"

extern "C" {

extern MapIfGlobals g_mapIf;

void mapIfSetMode1(void)
{
    MapIfState *state = g_mapIf.state;

    state->unk30 = 1;
    state->unk38 = 1;
}

} /* extern "C" */
