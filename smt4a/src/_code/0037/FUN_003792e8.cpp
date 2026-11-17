#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {


/* Starts the map scene effect: mode and amount, marked active. */
void FUN_003792e8(u32 mode, s32 amount)
{
    g_lmapScene->moveMode = mode;
    g_lmapScene->moveActive = 1;
    g_lmapScene->moveSpeed = (f32)amount;
}

} /* extern "C" */
