#include "map/mapTrap.h"

extern "C" {

extern MapTrapA *g_mapTrap;

u32 mapTrapGetUnk3C(void)
{
    return g_mapTrap->unk3C;
}

} /* extern "C" */
