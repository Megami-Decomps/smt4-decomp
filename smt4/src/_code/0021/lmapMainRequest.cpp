#include "common.h"
#include "map/LmapMainGlobals.h"

extern "C" {


static __inline void lmapSetFreeOnEnd(LmapMainState *map, u8 value)
{
    map->freeOnEnd = value;
}

/* Asks for the map's block to be freed once its job ends. */
void lmapMainRequest(void)
{
    lmapSetFreeOnEnd(g_lmapMainState, 1);
}

}
