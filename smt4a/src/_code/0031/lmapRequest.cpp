#include "map/LmapMainGlobals.h"

extern "C" {
static __inline void lmapSetFreeOnEnd(LmapMainStateA *map, u8 value)
{
    map->freeOnEnd = value;
}

/* Asks for the map's block to be freed once its job ends. */
void lmapRequest(void)
{
    lmapSetFreeOnEnd(g_lmapMainState, 1);
}
}
