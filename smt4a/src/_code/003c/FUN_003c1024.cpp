#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {

s32 linkHolderCheckFirst(void *links);

/* Reports whether the map scene's link holder has a first link. */
u32 FUN_003c1024(void)
{
    return linkHolderCheckFirst(g_lmapScene->playerModel) != 0;
}

} /* extern "C" */
