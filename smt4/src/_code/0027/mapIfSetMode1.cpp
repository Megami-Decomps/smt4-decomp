#include "map/MapIfGlobals.h"

extern "C" {

void mapIfSetMode1(void)
{
    MapIfState *state = g_mapIf.state;

    state->unk30 = 1;
    state->unk38 = 1;
}

} /* extern "C" */
