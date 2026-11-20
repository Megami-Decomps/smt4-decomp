#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

s32 compendiumEntryIsRegistered(u32 value);

void FUN_002d8b34(u32 value)
{
    if (compendiumEntryIsRegistered(value & 0xFFFF) == 0) {
        g_gameState.unk308 = value;
    }
}

} /* extern "C" */
