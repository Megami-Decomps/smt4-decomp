#include "map/MapIfGlobals.h"

static __inline void mapInterfaceSetState(MapIfStateA *map, s32 state)
{
    map->unk3C = state;
}

extern "C" {

void FUN_002342b8(void)
{
    mapInterfaceSetState(g_mapIf.state, 2);
}

}
