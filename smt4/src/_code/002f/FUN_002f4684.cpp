#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {

/* Sets how the map scene's position eases and its speed (converted from an integer). */
void FUN_002f4684(s32 mode, s32 value)
{
    g_lmapScene->moveMode = mode;
    g_lmapScene->moveSpeed = static_cast<f32>(value);
}

} /* extern "C" */
