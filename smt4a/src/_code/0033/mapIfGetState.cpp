#include "map/MapIfGlobals.h"

extern "C" {

/* Returns whether the map interface's dialog is open (0 without an interface). */
s32 mapIfGetState(void)
{
    MapIfStateA *map = g_mapIf.state;
    return map != NULL ? map->dialogOpen : 0;
}

} /* extern "C" */
