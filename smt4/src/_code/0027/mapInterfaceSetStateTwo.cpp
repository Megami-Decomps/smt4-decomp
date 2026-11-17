#include "map/MapIfGlobals.h"
extern "C" {
/* Set the map interface state to two. */
void mapInterfaceSetStateTwo(void)
{
    MapIfState *mapIf = g_mapIf.state;
    mapIf->unk30 = 2;
}
}
