#include "map/MapIfGlobals.h"

extern "C" {

void mapIfSetOpaqueMode(void)
{
    g_mapIf.state->unk3C = 2;
    g_mapIf.state->unk40 = 255;
    g_mapIf.state->unk44 = 2;
}

} /* extern "C" */
