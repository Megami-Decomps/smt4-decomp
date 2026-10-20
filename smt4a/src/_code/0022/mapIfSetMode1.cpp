#include "map/mapIf.h"

extern "C" {

extern MapIfGlobalsA g_mapIf;

void mapIfSetMode1(void)
{
    MapIfStateA *state = g_mapIf.state;

    state->unk3C = 1;
    state->unk44 = 1;
}

} /* extern "C" */
