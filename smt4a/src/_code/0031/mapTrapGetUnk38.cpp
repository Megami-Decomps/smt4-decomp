#include "map/mapTrap.h"

extern "C" {

extern MapTrapA *g_mapTrap;

u32 mapTrapGetUnk38(void)
{
    return g_mapTrap->unk38;
}

} /* extern "C" */
