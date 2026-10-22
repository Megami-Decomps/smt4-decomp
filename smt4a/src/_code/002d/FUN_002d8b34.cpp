#include "map/mapDepart.h"

extern "C" {

s32 FUN_002a4b28(u32 value);

extern GameStateA g_gameState;

void FUN_002d8b34(u32 value)
{
    if (FUN_002a4b28(value & 0xFFFF) == 0) {
        g_gameState.mapFlags.unk308 = value;
    }
}

} /* extern "C" */
