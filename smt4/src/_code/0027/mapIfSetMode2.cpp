#include "map/MapIfGlobals.h"

extern "C" {

void mapIfSetMode2(void)
{
    MapIfState *state = g_mapIf.state;

    state->unk30 = 2;
    state->unk34 = 0xFF;
    state->unk38 = 2;
}

} /* extern "C" */
