#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {


/* Script command: sets the map scene's state at 0x250 to two. */
s32 FUN_0037d544(void)
{
    g_lmapScene->unk250 = 2;
    return 1;
}

} /* extern "C" */
