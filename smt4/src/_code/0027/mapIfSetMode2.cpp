#include "map/mapIf.h"

extern "C" {

extern MapIfGlobals g_mapIf;

void mapIfSetMode2(void)
{
    MapIfState *state = g_mapIf.state;

    state->unk30 = 2;
    state->unk34 = 0xFF;
    state->unk38 = 2;
}

} /* extern "C" */
