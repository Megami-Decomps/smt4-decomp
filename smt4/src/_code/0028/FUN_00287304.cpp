#include "common.h"
#include "game/GameState.h"

extern "C" {


s32 FUN_00287304(void)
{
    return g_gameState.map.savedLocationSet;
}

} /* extern "C" */
