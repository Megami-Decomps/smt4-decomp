/* NON_MATCHING: code, switch table and block order match retail; only the flags pointer and the override value swap r2/r3. */
#include "map/LmapViewGlobals.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Resolves the explicit map-context value or derives it from the current context mode. */
s32 FUN_003033d4(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    LmapViewA *context = g_lmapViewHolder.view;
    s32 override = context->contextOverride;
    s32 value = context->contextValue;
    if (override != -1) {
        value = override;
    } else {
        switch (context->contextMode) {
        case -3:
            return 5;
        case -1:
            return 8;
        case -2:
            return 9;
        case 0:
            return value + flags->cameraPresetOffset;
        case 1:
            return 6;
        case 2:
            return 10;
        }
    }
    return value;
}
}
