#include "map/mapTrap.h"

extern "C" {

extern MapTrapA *g_mapTrap;

void FUN_002de104(void)
{
    MapTrapA *trap = g_mapTrap;

    trap->unk0C = 1;
    trap->unk6C = 0;
}

} /* extern "C" */
