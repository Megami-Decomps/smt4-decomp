#include "map/LmapViewGlobals.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Resolves the explicit map-context value or derives it from the current context mode. */
s32 lmapResolveContextValue(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    LmapViewA *context = g_lmapViewHolder.view;
    s32 value = context->contextValue;
    if (context->contextOverride != -1) {
        value = context->contextOverride;
    } else {
        switch (context->contextMode) {
        case -3: value = 5; break;
        case -1: value = 8; break;
        case -2: value = 9; break;
        case 0: value += flags->cameraPresetOffset; break;
        case 1: value = 6; break;
        case 2: value = 10; break;
        }
    }
    return value;
}
}
