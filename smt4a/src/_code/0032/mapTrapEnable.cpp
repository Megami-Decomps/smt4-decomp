#include "map/mapTrap.h"

extern "C" {

extern MapTrapA *g_mapTrap;

void mapTrapEnable(void)
{
    MapTrapA *trap = g_mapTrap;

    trap->unk0C = 1;
    trap->unk6C = 1;
}

} /* extern "C" */
